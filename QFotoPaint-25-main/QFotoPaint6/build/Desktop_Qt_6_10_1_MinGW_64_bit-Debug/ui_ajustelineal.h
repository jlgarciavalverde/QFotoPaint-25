/********************************************************************************
** Form generated from reading UI file 'ajustelineal.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_AJUSTELINEAL_H
#define UI_AJUSTELINEAL_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_AjusteLineal
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label_2;
    QSlider *horizontalSlider;
    QLabel *label;
    QCheckBox *checkBox;
    QSpinBox *spinBox;
    QSpinBox *spinBox_2;
    QSlider *horizontalSlider_2;

    void setupUi(QDialog *AjusteLineal)
    {
        if (AjusteLineal->objectName().isEmpty())
            AjusteLineal->setObjectName("AjusteLineal");
        AjusteLineal->setWindowModality(Qt::WindowModality::WindowModal);
        AjusteLineal->resize(405, 168);
        AjusteLineal->setToolTipDuration(-7);
        buttonBox = new QDialogButtonBox(AjusteLineal);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(30, 120, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        label_2 = new QLabel(AjusteLineal);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 271, 16));
        label_2->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label_2->setAlignment(Qt::AlignmentFlag::AlignCenter);
        horizontalSlider = new QSlider(AjusteLineal);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(30, 40, 271, 21));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(100);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setValue(5);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(10);
        label = new QLabel(AjusteLineal);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 271, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        checkBox = new QCheckBox(AjusteLineal);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(210, 128, 101, 17));
        checkBox->setChecked(true);
        spinBox = new QSpinBox(AjusteLineal);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(310, 20, 81, 22));
        spinBox->setMinimum(0);
        spinBox->setMaximum(100);
        spinBox->setValue(5);
        spinBox_2 = new QSpinBox(AjusteLineal);
        spinBox_2->setObjectName("spinBox_2");
        spinBox_2->setGeometry(QRect(310, 70, 81, 22));
        spinBox_2->setMinimum(0);
        spinBox_2->setMaximum(100);
        spinBox_2->setValue(5);
        horizontalSlider_2 = new QSlider(AjusteLineal);
        horizontalSlider_2->setObjectName("horizontalSlider_2");
        horizontalSlider_2->setGeometry(QRect(30, 90, 271, 21));
        horizontalSlider_2->setMinimum(0);
        horizontalSlider_2->setMaximum(100);
        horizontalSlider_2->setValue(5);
        horizontalSlider_2->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider_2->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider_2->setTickInterval(10);

        retranslateUi(AjusteLineal);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, AjusteLineal, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, AjusteLineal, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(AjusteLineal);
    } // setupUi

    void retranslateUi(QDialog *AjusteLineal)
    {
        AjusteLineal->setWindowTitle(QCoreApplication::translate("AjusteLineal", "Ajuste lineal del histograma", nullptr));
        label_2->setText(QCoreApplication::translate("AjusteLineal", "Percentil m\303\241ximo", nullptr));
        label->setText(QCoreApplication::translate("AjusteLineal", "Percentil m\303\255nimo", nullptr));
        checkBox->setText(QCoreApplication::translate("AjusteLineal", "Previsualizar", nullptr));
    } // retranslateUi

};

namespace Ui {
    class AjusteLineal: public Ui_AjusteLineal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_AJUSTELINEAL_H
