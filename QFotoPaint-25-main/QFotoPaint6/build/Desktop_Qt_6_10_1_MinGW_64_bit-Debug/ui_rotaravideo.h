/********************************************************************************
** Form generated from reading UI file 'rotaravideo.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_ROTARAVIDEO_H
#define UI_ROTARAVIDEO_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QDoubleSpinBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QRadioButton>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_rotaravideo
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;
    QSpinBox *spinBox;
    QGroupBox *groupBox;
    QRadioButton *radioButton;
    QRadioButton *radioButton_2;
    QRadioButton *radioButton_3;
    QComboBox *comboBox;
    QLabel *label_2;
    QLabel *label_3;
    QDoubleSpinBox *doubleSpinBox;
    QComboBox *comboBox_2;
    QDoubleSpinBox *doubleSpinBox_2;
    QLabel *label_4;
    QSpinBox *spinBox_2;
    QLabel *label_5;
    QComboBox *comboBox_3;
    QDoubleSpinBox *doubleSpinBox_3;
    QLabel *label_6;
    QSpinBox *spinBox_3;
    QLabel *label_7;

    void setupUi(QDialog *rotaravideo)
    {
        if (rotaravideo->objectName().isEmpty())
            rotaravideo->setObjectName("rotaravideo");
        rotaravideo->setWindowModality(Qt::WindowModality::WindowModal);
        rotaravideo->resize(316, 182);
        rotaravideo->setMinimumSize(QSize(316, 182));
        rotaravideo->setMaximumSize(QSize(316, 182));
        QIcon icon;
        icon.addFile(QString::fromUtf8(":/imagenes/icono.png"), QSize(), QIcon::Mode::Normal, QIcon::State::Off);
        rotaravideo->setWindowIcon(icon);
        buttonBox = new QDialogButtonBox(rotaravideo);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(220, 10, 81, 61));
        buttonBox->setOrientation(Qt::Orientation::Vertical);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label = new QLabel(rotaravideo);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 181, 16));
        spinBox = new QSpinBox(rotaravideo);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(10, 30, 161, 22));
        spinBox->setMinimum(1);
        spinBox->setMaximum(10000);
        spinBox->setValue(30);
        groupBox = new QGroupBox(rotaravideo);
        groupBox->setObjectName("groupBox");
        groupBox->setGeometry(QRect(10, 60, 191, 101));
        radioButton = new QRadioButton(groupBox);
        radioButton->setObjectName("radioButton");
        radioButton->setGeometry(QRect(10, 20, 181, 17));
        radioButton->setChecked(true);
        radioButton_2 = new QRadioButton(groupBox);
        radioButton_2->setObjectName("radioButton_2");
        radioButton_2->setGeometry(QRect(10, 50, 141, 17));
        radioButton_3 = new QRadioButton(groupBox);
        radioButton_3->setObjectName("radioButton_3");
        radioButton_3->setGeometry(QRect(10, 80, 141, 17));
        comboBox = new QComboBox(rotaravideo);
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->addItem(QString());
        comboBox->setObjectName("comboBox");
        comboBox->setGeometry(QRect(210, 90, 91, 21));
        comboBox->setEditable(true);
        label_2 = new QLabel(rotaravideo);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(210, 70, 101, 16));
        label_3 = new QLabel(rotaravideo);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(210, 120, 101, 16));
        doubleSpinBox = new QDoubleSpinBox(rotaravideo);
        doubleSpinBox->setObjectName("doubleSpinBox");
        doubleSpinBox->setGeometry(QRect(210, 140, 91, 22));
        doubleSpinBox->setDecimals(1);
        doubleSpinBox->setMaximum(200.000000000000000);
        doubleSpinBox->setValue(30.000000000000000);
        comboBox_2 = new QComboBox(rotaravideo);
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->addItem(QString());
        comboBox_2->setObjectName("comboBox_2");
        comboBox_2->setGeometry(QRect(220, 80, 91, 21));
        comboBox_2->setEditable(true);
        doubleSpinBox_2 = new QDoubleSpinBox(rotaravideo);
        doubleSpinBox_2->setObjectName("doubleSpinBox_2");
        doubleSpinBox_2->setGeometry(QRect(220, 130, 91, 22));
        doubleSpinBox_2->setDecimals(1);
        doubleSpinBox_2->setMaximum(200.000000000000000);
        doubleSpinBox_2->setValue(30.000000000000000);
        label_4 = new QLabel(rotaravideo);
        label_4->setObjectName("label_4");
        label_4->setGeometry(QRect(220, 60, 101, 16));
        spinBox_2 = new QSpinBox(rotaravideo);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(20, 20, 161, 22));
        spinBox_2->setMinimum(1);
        spinBox_2->setMaximum(10000);
        spinBox_2->setValue(30);
        label_5 = new QLabel(rotaravideo);
        label_5->setObjectName("label_5");
        label_5->setGeometry(QRect(220, 110, 101, 16));
        comboBox_3 = new QComboBox(rotaravideo);
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->addItem(QString());
        comboBox_3->setObjectName("comboBox_3");
        comboBox_3->setGeometry(QRect(220, 80, 91, 21));
        comboBox_3->setEditable(true);
        doubleSpinBox_3 = new QDoubleSpinBox(rotaravideo);
        doubleSpinBox_3->setObjectName("doubleSpinBox_3");
        doubleSpinBox_3->setGeometry(QRect(220, 130, 91, 22));
        doubleSpinBox_3->setDecimals(1);
        doubleSpinBox_3->setMaximum(200.000000000000000);
        doubleSpinBox_3->setValue(30.000000000000000);
        label_6 = new QLabel(rotaravideo);
        label_6->setObjectName("label_6");
        label_6->setGeometry(QRect(220, 60, 101, 16));
        spinBox_3 = new QSpinBox(rotaravideo);
        spinBox_3->setObjectName("spinBox_3");
        spinBox_3->setGeometry(QRect(20, 20, 161, 22));
        spinBox_3->setMinimum(1);
        spinBox_3->setMaximum(10000);
        spinBox_3->setValue(30);
        label_7 = new QLabel(rotaravideo);
        label_7->setObjectName("label_7");
        label_7->setGeometry(QRect(220, 110, 101, 16));

        retranslateUi(rotaravideo);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, rotaravideo, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, rotaravideo, qOverload<>(&QDialog::reject));

        comboBox->setCurrentIndex(0);
        comboBox_2->setCurrentIndex(0);
        comboBox_3->setCurrentIndex(0);


        QMetaObject::connectSlotsByName(rotaravideo);
    } // setupUi

    void retranslateUi(QDialog *rotaravideo)
    {
        rotaravideo->setWindowTitle(QCoreApplication::translate("rotaravideo", "Rotar imagen a v\303\255deo...", nullptr));
        label->setText(QCoreApplication::translate("rotaravideo", "N\303\272mero de frames del v\303\255deo:", nullptr));
        groupBox->setTitle(QCoreApplication::translate("rotaravideo", "Tama\303\261o del video", nullptr));
        radioButton->setText(QCoreApplication::translate("rotaravideo", "Igual que imagen original", nullptr));
        radioButton_2->setText(QCoreApplication::translate("rotaravideo", "M\303\241ximo, caber todo", nullptr));
        radioButton_3->setText(QCoreApplication::translate("rotaravideo", "M\303\255nimo, sin bordes", nullptr));
        comboBox->setItemText(0, QCoreApplication::translate("rotaravideo", "DEFAULT", nullptr));
        comboBox->setItemText(1, QCoreApplication::translate("rotaravideo", "MPEG", nullptr));
        comboBox->setItemText(2, QCoreApplication::translate("rotaravideo", "MJPG", nullptr));
        comboBox->setItemText(3, QCoreApplication::translate("rotaravideo", "PIM1", nullptr));
        comboBox->setItemText(4, QCoreApplication::translate("rotaravideo", "DIVX", nullptr));
        comboBox->setItemText(5, QCoreApplication::translate("rotaravideo", "XVID", nullptr));

        comboBox->setCurrentText(QCoreApplication::translate("rotaravideo", "DEFAULT", nullptr));
        label_2->setText(QCoreApplication::translate("rotaravideo", "C\303\263dec de v\303\255deo", nullptr));
        label_3->setText(QCoreApplication::translate("rotaravideo", "Frames por seg.", nullptr));
        comboBox_2->setItemText(0, QCoreApplication::translate("rotaravideo", "DEFAULT", nullptr));
        comboBox_2->setItemText(1, QCoreApplication::translate("rotaravideo", "MPEG", nullptr));
        comboBox_2->setItemText(2, QCoreApplication::translate("rotaravideo", "MJPG", nullptr));
        comboBox_2->setItemText(3, QCoreApplication::translate("rotaravideo", "PIM1", nullptr));
        comboBox_2->setItemText(4, QCoreApplication::translate("rotaravideo", "DIVX", nullptr));
        comboBox_2->setItemText(5, QCoreApplication::translate("rotaravideo", "XVID", nullptr));

        comboBox_2->setCurrentText(QCoreApplication::translate("rotaravideo", "DEFAULT", nullptr));
        label_4->setText(QCoreApplication::translate("rotaravideo", "C\303\263dec de v\303\255deo", nullptr));
        label_5->setText(QCoreApplication::translate("rotaravideo", "Frames por seg.", nullptr));
        comboBox_3->setItemText(0, QCoreApplication::translate("rotaravideo", "DEFAULT", nullptr));
        comboBox_3->setItemText(1, QCoreApplication::translate("rotaravideo", "MPEG", nullptr));
        comboBox_3->setItemText(2, QCoreApplication::translate("rotaravideo", "MJPG", nullptr));
        comboBox_3->setItemText(3, QCoreApplication::translate("rotaravideo", "PIM1", nullptr));
        comboBox_3->setItemText(4, QCoreApplication::translate("rotaravideo", "DIVX", nullptr));
        comboBox_3->setItemText(5, QCoreApplication::translate("rotaravideo", "XVID", nullptr));

        comboBox_3->setCurrentText(QCoreApplication::translate("rotaravideo", "DEFAULT", nullptr));
        label_6->setText(QCoreApplication::translate("rotaravideo", "C\303\263dec de v\303\255deo", nullptr));
        label_7->setText(QCoreApplication::translate("rotaravideo", "Frames por seg.", nullptr));
    } // retranslateUi

};

namespace Ui {
    class rotaravideo: public Ui_rotaravideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_ROTARAVIDEO_H
