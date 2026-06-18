/********************************************************************************
** Form generated from reading UI file 'matsatlum.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MATSATLUM_H
#define UI_MATSATLUM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDial>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_MatSatLum
{
public:
    QDialogButtonBox *buttonBox;
    QSlider *horizontalSlider;
    QLabel *label;
    QSlider *horizontalSlider_2;
    QLabel *label_2;
    QLabel *label_3;
    QDial *dial;

    void setupUi(QDialog *MatSatLum)
    {
        if (MatSatLum->objectName().isEmpty())
            MatSatLum->setObjectName("MatSatLum");
        MatSatLum->setWindowModality(Qt::WindowModality::WindowModal);
        MatSatLum->resize(400, 300);
        buttonBox = new QDialogButtonBox(MatSatLum);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(210, 240, 161, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalSlider = new QSlider(MatSatLum);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(10, 30, 271, 21));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(300);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setValue(100);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(25);
        label = new QLabel(MatSatLum);
        label->setObjectName("label");
        label->setGeometry(QRect(10, 10, 271, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        horizontalSlider_2 = new QSlider(MatSatLum);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setGeometry(QRect(10, 80, 271, 21));
        horizontalSlider_2->setMinimum(0);
        horizontalSlider_2->setMaximum(300);
        horizontalSlider_2->setPageStep(16);
        horizontalSlider_2->setValue(100);
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider_2->setTickInterval(25);
        label_2 = new QLabel(MatSatLum);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(10, 60, 271, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        label_3 = new QLabel(MatSatLum);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(10, 110, 271, 16));
        label_3->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_3->setAlignment(Qt::AlignmentFlag::AlignCenter);
        dial = new QDial(MatSatLum);
        dial->setObjectName("dial");
        dial->setGeometry(QRect(90, 140, 101, 101));
        dial->setMaximum(255);
        dial->setValue(0);
        dial->setWrapping(true);
        dial->setNotchTarget(2.000000000000000);
        dial->setNotchesVisible(true);

        retranslateUi(MatSatLum);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, MatSatLum, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, MatSatLum, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(MatSatLum);
    } // setupUi

    void retranslateUi(QDialog *MatSatLum)
    {
        MatSatLum->setWindowTitle(QCoreApplication::translate("MatSatLum", "Matiz/Saturacion/Luminosidad", nullptr));
        label->setText(QCoreApplication::translate("MatSatLum", "Saturaci\303\263n", nullptr));
        label_2->setText(QCoreApplication::translate("MatSatLum", "Luminosidad", nullptr));
        label_3->setText(QCoreApplication::translate("MatSatLum", "Matiz", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MatSatLum: public Ui_MatSatLum {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MATSATLUM_H
