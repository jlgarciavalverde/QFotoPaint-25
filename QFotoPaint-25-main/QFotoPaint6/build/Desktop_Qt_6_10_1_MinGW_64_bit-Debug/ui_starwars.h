/********************************************************************************
** Form generated from reading UI file 'starwars.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_STARWARS_H
#define UI_STARWARS_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_StarWars
{
public:
    QDialogButtonBox *buttonBox;
    QComboBox *comboBox;
    QDoubleSpinBox *doubleSpinBox;
    QSpinBox *spinBox;
    QLabel *label;
    QPlainTextEdit *plainTextEdit;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QLabel *label_7;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_8;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *StarWars)
    {
        if (StarWars->objectName().isEmpty())
            StarWars->setObjectName("StarWars");
        StarWars->setWindowModality(Qt::WindowModality::WindowModal);
        StarWars->resize(553, 322);
        buttonBox = new QDialogButtonBox(StarWars);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(180, 280, 161, 31));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        comboBox = new QComboBox(StarWars);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(410, 40, 111, 21));
        comboBox->setEditable(true);
        doubleSpinBox = new QDoubleSpinBox(StarWars);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(410, 100, 111, 22));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMaximum(200.000000000000000);
        doubleSpinBox->setValue(30.000000000000000);
        spinBox = new QSpinBox(StarWars);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(30, 40, 231, 22));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10000);
        spinBox->setValue(1000);
        label = new QLabel(StarWars);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 10, 231, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        plainTextEdit = new QPlainTextEdit(StarWars);
        plainTextEdit->setObjectName("plainTextEdit");
        plainTextEdit->setGeometry(QRect(30, 120, 361, 141));
        label_4 = new QLabel(StarWars);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(30, 90, 361, 16));
        label_4->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_4->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_5 = new QLabel(StarWars);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(410, 10, 111, 20));
        label_5->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_5->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_6 = new QLabel(StarWars);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(410, 70, 111, 20));
        label_6->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_6->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_7 = new QLabel(StarWars);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(410, 130, 111, 20));
        label_7->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_7->setAlignment(Qt::AlignmentFlag::AlignCenter);
        doubleSpinBox_2 = new QDoubleSpinBox(StarWars);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setGeometry(QRect(410, 160, 111, 22));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMinimum(1.000000000000000);
        doubleSpinBox_2->setMaximum(10.000000000000000);
        doubleSpinBox_2->setValue(2.000000000000000);
        label_8 = new QLabel(StarWars);
        label_8->setObjectName("label_8");
        label_8->setGeometry(QRect(410, 190, 111, 20));
        label_8->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_8->setAlignment(Qt::AlignmentFlag::AlignCenter);
        pushButton = new QPushButton(StarWars);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(440, 220, 41, 41));
        pushButton->setStyleSheet(QString::fromUtf8("background-color: rgb(255, 255, 0);"));
        pushButton_2 = new QPushButton(StarWars);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(410, 280, 111, 24));

        retranslateUi(StarWars);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, StarWars, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, StarWars, qOverload<>(&QDialog::reject));

        comboBox->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(StarWars);
    } // setupUi

    void retranslateUi(QDialog *StarWars)
    {
        StarWars->setWindowTitle(QCoreApplication::translate("StarWars", "StarWars", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("StarWars", "DEFAULT", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("StarWars", "MPEG", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("StarWars", "MJPG", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("StarWars", "PIM1", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("StarWars", "DIVX", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("StarWars", "XVID", nullptr));

        comboBox->setCurrentText(QCoreApplication::translate("StarWars", "DEFAULT", nullptr));
        label->setText(QCoreApplication::translate("StarWars", "N\303\272mero de frames", nullptr));
        plainTextEdit->setPlainText(QCoreApplication::translate("StarWars", "En un lugar de La Mancha\n"
"De cuyo nombre no quiero\n"
"acordarme, no ha mucho\n"
"tiempo que vivia un hidalgo\n"
"caballero de los de lanza en\n"
"astillero, adarga antigua\n"
"rocin y galgo corredor...", nullptr));
        label_4->setText(QCoreApplication::translate("StarWars", "Texto", nullptr));
        label_5->setText(QCoreApplication::translate("StarWars", "Codec de v\303\255deo", nullptr));
        label_6->setText(QCoreApplication::translate("StarWars", "Frames por seg.", nullptr));
        label_7->setText(QCoreApplication::translate("StarWars", "Tama\303\261o del texto", nullptr));
        label_8->setText(QCoreApplication::translate("StarWars", "Color del texto", nullptr));
        pushButton->setText(QString());
        pushButton_2->setText(QCoreApplication::translate("StarWars", "Previsualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class StarWars: public Ui_StarWars {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_STARWARS_H
