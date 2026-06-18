/********************************************************************************
** Form generated from reading UI file 'perspectiva.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PERSPECTIVA_H
#define UI_PERSPECTIVA_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QListWidget>

QT_BEGIN_NAMESPACE

class Ui_Perspectiva
{
public:
    QDialogButtonBox *buttonBox;
    QListWidget *listWidget;
    QListWidget *listWidget_2;
    QLabel *label_2;
    QLabel *label_3;

    void setupUi(QDialog *Perspectiva)
    {
        if (Perspectiva->objectName().isEmpty())
            Perspectiva->setObjectName("Perspectiva");
        Perspectiva->setWindowModality(Qt::WindowModality::WindowModal);
        Perspectiva->resize(493, 267);
        buttonBox = new QDialogButtonBox(Perspectiva);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(170, 200, 141, 31));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        listWidget = new QListWidget(Perspectiva);
        listWidget->setObjectName("listWidget");
        listWidget->setGeometry(QRect(60, 70, 181, 101));
        listWidget_2 = new QListWidget(Perspectiva);
        listWidget_2->setObjectName("listWidget_2");
        listWidget_2->setGeometry(QRect(250, 70, 181, 101));
        label_2 = new QLabel(Perspectiva);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(60, 30, 181, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(Perspectiva);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(250, 30, 181, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(127, 127, 127);\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);

        retranslateUi(Perspectiva);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Perspectiva, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Perspectiva, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Perspectiva);
    } // setupUi

    void retranslateUi(QDialog *Perspectiva)
    {
        Perspectiva->setWindowTitle(QCoreApplication::translate("Perspectiva", "Transformacion Perspectiva", nullptr));
        label_2->setText(QCoreApplication::translate("Perspectiva", "Imagen origen", nullptr));
        label_3->setText(QCoreApplication::translate("Perspectiva", "Imagen destino", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Perspectiva: public Ui_Perspectiva {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PERSPECTIVA_H
