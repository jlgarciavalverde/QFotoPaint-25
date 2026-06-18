#include "starwars.h"
#include "ui_starwars.h"
#include "video.h"
#include "QFileDialog"
#include "QColorDialog"
StarWars::StarWars(int numfoto, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::StarWars)
{
    ui->setupUi(this);
    nfoto = numfoto;
    color = CV_RGB(255,255,0);
}

StarWars::~StarWars()
{
    delete ui;
}

void StarWars::on_pushButton_2_clicked()
{
    int codigocc;
    QString cad= ui->comboBox->currentText();
    if (cad=="DEFAULT")
        codigocc= VideoWriter::fourcc('D','I','V','X');
    else {
        string cadena= cad.toLatin1().data();
        codigocc= VideoWriter::fourcc(cadena[0], cadena[1], cadena[2], cadena[3]);
    }

    QString textoP = ui->plainTextEdit->toPlainText();
    QStringList sl = textoP.split('\n');

    vector<string> texto;

    for(auto linea: sl)
    {
        texto.push_back(linea.toLatin1().data());
    }

    star_wars(nfoto, "", ui->spinBox->value(), ui->doubleSpinBox->value(), codigocc, texto, color, ui->doubleSpinBox_2->value());
}


void StarWars::on_StarWars_accepted()
{

    QString nombre = QFileDialog::getSaveFileName();
    if (nombre.isEmpty())
    {
        return;
    }
    int codigocc;
    QString cad= ui->comboBox->currentText();
    if (cad=="DEFAULT")
        codigocc= VideoWriter::fourcc('D','I','V','X');
    else {
        string cadena= cad.toLatin1().data();
        codigocc= VideoWriter::fourcc(cadena[0], cadena[1], cadena[2], cadena[3]);
    }

    QString textoP = ui->plainTextEdit->toPlainText();
    QStringList sl = textoP.split('\n');

    vector<string> texto;

    for(auto linea: sl)
    {
        texto.push_back(linea.toLatin1().data());
    }

    star_wars(nfoto, nombre.toLatin1().data(), ui->spinBox->value(), ui->doubleSpinBox->value(), codigocc, texto, color, ui->doubleSpinBox_2->value(), true);

    destroyWindow("Star Wars");
}


void StarWars::on_StarWars_rejected()
{
    destroyWindow("Star Wars");
}


void StarWars::on_pushButton_clicked()
{
    QColor color= QColorDialog::getColor();
    if (color.isValid()) {
        QString estilo= "background-color: rgb(";
        estilo+= QString::number(color.red())+",";
        estilo+= QString::number(color.green())+",";
        estilo+= QString::number(color.blue())+")";
        ui->pushButton->setStyleSheet(estilo);
        this->color= CV_RGB(color.red(), color.green(), color.blue());
    }
}

