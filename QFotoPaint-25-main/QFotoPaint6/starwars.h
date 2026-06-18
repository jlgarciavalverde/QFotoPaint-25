#ifndef STARWARS_H
#define STARWARS_H

#include <QDialog>
#include "imagenes.h"

namespace Ui {
class StarWars;
}

class StarWars : public QDialog
{
    Q_OBJECT

public:
    explicit StarWars(int numfoto, QWidget *parent = nullptr);
    ~StarWars();

private slots:
    void on_pushButton_2_clicked();

    void on_StarWars_accepted();

    void on_StarWars_rejected();

    void on_pushButton_clicked();

private:
    Ui::StarWars *ui;
    int nfoto;
    Scalar color;
};

#endif // STARWARS_H
