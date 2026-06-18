/********************************************************************************
** Form generated from reading UI file 'bajorrelieve.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_BAJORRELIEVE_H
#define UI_BAJORRELIEVE_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_Bajorrelieve
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSlider *horizontalSlider;
    QLabel *label_2;
    QDial *dial;
    QLabel *label_3;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QLabel *label_4;
    QSpinBox *spinBox;

    void setupUi(QDialog *Bajorrelieve)
    {
        if (Bajorrelieve->objectName().isEmpty())
            Bajorrelieve->setObjectName("Bajorrelieve");
        Bajorrelieve->setWindowModality(Qt::WindowModality::WindowModal);
        Bajorrelieve->resize(539, 386);
        buttonBox = new QDialogButtonBox(Bajorrelieve);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 340, 341, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(Bajorrelieve);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 271, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        horizontalSlider = new QSlider(Bajorrelieve);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(10, 30, 271, 21));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(200);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setValue(100);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(10);
        label_2 = new QLabel(Bajorrelieve);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 271, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        dial = new QDial(Bajorrelieve);
        dial->setObjectName("dial");
        dial->setGeometry(QRect(20, 90, 241, 211));
        dial->setMaximum(360);
        dial->setWrapping(true);
        dial->setNotchTarget(3.000000000000000);
        dial->setNotchesVisible(true);
        label_3 = new QLabel(Bajorrelieve);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(290, 10, 191, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        radioButton = new QRadioButton(Bajorrelieve);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(300, 30, 111, 25));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(Bajorrelieve);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(300, 60, 111, 25));
        radioButton_3 = new QRadioButton(Bajorrelieve);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(300, 90, 111, 25));
        label_4 = new QLabel(Bajorrelieve);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(290, 150, 191, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox = new QSpinBox(Bajorrelieve);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(340, 170, 71, 29));
        spinBox->setMinimum(1);
        spinBox->setMaximum(31);
        spinBox->setSingleStep(2);
        spinBox->setValue(3);

        retranslateUi(Bajorrelieve);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Bajorrelieve, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Bajorrelieve, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Bajorrelieve);
    } // setupUi

    void retranslateUi(QDialog *Bajorrelieve)
    {
        Bajorrelieve->setWindowTitle(QCoreApplication::translate("Bajorrelieve", "Efecto de bajorrelieve", nullptr));
        label->setText(QCoreApplication::translate("Bajorrelieve", "Grado del efecto", nullptr));
        label_2->setText(QCoreApplication::translate("Bajorrelieve", "\303\201ngulo del efecto", nullptr));
        label_3->setText(QCoreApplication::translate("Bajorrelieve", "Textura de fondo", nullptr));
        radioButton->setText(QCoreApplication::translate("Bajorrelieve", "Arena", nullptr));
        radioButton_2->setText(QCoreApplication::translate("Bajorrelieve", "Cielo", nullptr));
        radioButton_3->setText(QCoreApplication::translate("Bajorrelieve", "Madera", nullptr));
        label_4->setText(QCoreApplication::translate("Bajorrelieve", "Tama\303\261o de Sobel", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Bajorrelieve: public Ui_Bajorrelieve {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_BAJORRELIEVE_H
