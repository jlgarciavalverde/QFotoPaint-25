#ifndef PERSPECTIVA_H
#define PERSPECTIVA_H

#include <QDialog>

namespace Ui {
class Perspectiva;
}

class Perspectiva : public QDialog
{
    Q_OBJECT

public:
    explicit Perspectiva(QWidget *parent = nullptr);
    ~Perspectiva();

private:
    Ui::Perspectiva *ui;
protected:
    void accept() override;
    void reject() override;
private slots:
    void on_listWidget_currentRowChanged(int current);
    void on_listWidget_2_currentRowChanged(int current);
};







#endif // PERSPECTIVA_H
