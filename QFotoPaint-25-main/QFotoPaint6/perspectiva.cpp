#include "perspectiva.h"
#include "ui_perspectiva.h"
#include <QMessageBox>
#include "imagenes.h"



int npers_orig;
int npers_dest;

Point2f ppers_orig[4];
Point2f ppers_dest[4];

int pers_corresp[MAX_VENTANAS];

void callback_perspectiva(int event, int x, int y, int flags, void *pt)
{
    int num = (long long) pt;
    if (flags & EVENT_FLAG_LBUTTON) {
        int imin = 0;
        int distmin = 500;
        for(int i = 0; i < 4; i++) {
            int distact;

            if (num == 0)
            {
                distact = abs(x - ppers_orig[i].x) + abs(y - ppers_orig[i].y);
            }
            else
            {
                distact = abs(x - ppers_dest[i].x) + abs(y - ppers_dest[i].y);
            }

            if (distact < distmin) {
                distmin = distact;
                imin = i;
            }
        }
        if (distmin < 500)
        {
            if (num == 0)
            {
                ppers_orig[imin]= Point2f(x,y);
            }
            else
            {
                ppers_dest[imin]= Point2f(x,y);
            }
            ver_perspectiva(npers_orig, npers_dest, ppers_orig, ppers_dest);
        }
    }
}

Perspectiva::Perspectiva(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Perspectiva)
{
    ui->setupUi(this);
    for (int i = 0, pos = 0; i < MAX_VENTANAS; i++) {
        if (foto[i].usada) {
            ui->listWidget->addItem(QString::fromStdString(foto[i].nombre));
            ui->listWidget_2->addItem(QString::fromStdString(foto[i].nombre));
            pers_corresp[pos++] = i;
        }
    }

    int numEncontradas = 0;
    for (int i = 0; i < MAX_VENTANAS; ++i) if (foto[i].usada) ++numEncontradas;
    if (numEncontradas == 0) {
        QMessageBox::warning(this, tr("Perspectiva"), tr("No hay imágenes abiertas para aplicar perspectiva."));
        QDialog::reject();
        return;
    }

    npers_orig = foto_activa();
    if (npers_orig < 0) npers_orig = pers_corresp[0];
    npers_dest = pers_corresp[0];

    if (npers_orig < 0 || npers_orig >= MAX_VENTANAS || !foto[npers_orig].usada ||
        npers_dest < 0 || npers_dest >= MAX_VENTANAS || !foto[npers_dest].usada) {
        QMessageBox::warning(this, tr("Perspectiva"), tr("Error con las imágenes seleccionadas."));
        QDialog::reject();
        return;
    }
    int w = foto[npers_orig].img.cols;
    int h = foto[npers_orig].img.rows;
    ppers_orig[0]= Point2f(0,0);
    ppers_orig[1]= Point2f(w,0);
    ppers_orig[2]= Point2f(w,h);
    ppers_orig[3]= Point2f(0,h);


    w = foto[npers_dest].img.cols;
    h = foto[npers_dest].img.rows;
    ppers_dest[0]= Point2f(0,0);
    ppers_dest[1]= Point2f(w,0);
    ppers_dest[2]= Point2f(w,h);
    ppers_dest[3]= Point2f(0,h);

    namedWindow("Origen", WINDOW_AUTOSIZE);
    namedWindow("Destino", WINDOW_AUTOSIZE);

    ver_perspectiva(npers_orig, npers_dest, ppers_orig, ppers_dest);

    setMouseCallback("Origen", callback_perspectiva, (void *) 0);
    setMouseCallback("Destino", callback_perspectiva, (void *) 1);
    
}

Perspectiva::~Perspectiva()
{
    delete ui;
}


void Perspectiva::accept()
{
    ver_perspectiva(npers_orig, npers_dest, ppers_orig, ppers_dest, true);
    destroyWindow("Origen");
    destroyWindow("Destino");
    mostrar(npers_dest);
    QDialog::accept();
}

void Perspectiva::reject()
{
    destroyWindow("Origen");
    destroyWindow("Destino");
    QDialog::reject();
}

void Perspectiva::on_listWidget_currentRowChanged(int current)
{
    int npers_orig_old = npers_orig;
    npers_orig = pers_corresp[current];

    double px = double(foto[npers_orig].img.cols) / double(foto[npers_orig_old].img.cols);
    double py = double(foto[npers_orig].img.rows) / double(foto[npers_orig_old].img.rows);

    for(int i = 0; i < 4; i++) {
        ppers_orig[i].x *= px;
        ppers_orig[i].y *= py;
    }

    ver_perspectiva(npers_orig, npers_dest, ppers_orig, ppers_dest);

}

void Perspectiva::on_listWidget_2_currentRowChanged(int current)
{
    int npers_dest_old = npers_dest;
    npers_dest = pers_corresp[current];

    double px = double(foto[npers_dest].img.cols) / double(foto[npers_dest_old].img.cols);
    double py = double(foto[npers_dest].img.rows) / double(foto[npers_dest_old].img.rows);

    for (int i = 0; i < 4; i++) {
        ppers_dest[i].x *= px;
        ppers_dest[i].y *= py;
    }

    ver_perspectiva(npers_orig, npers_dest, ppers_orig, ppers_dest);
}

