/********************************************************************************
** Form generated from reading UI file 'inpaint.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_INPAINT_H
#define UI_INPAINT_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSlider>

QT_BEGIN_NAMESPACE

class Ui_Inpaint
{
public:
    QDialogButtonBox *buttonBox;
    QSlider *horizontalSlider;
    QLabel *label;
    QCheckBox *checkBox;
    QPushButton *pushButton;
    QPushButton *pushButton_2;

    void setupUi(QDialog *Inpaint)
    {
        if (Inpaint->objectName().isEmpty())
            Inpaint->setObjectName("Inpaint");
        Inpaint->setWindowModality(Qt::WindowModality::WindowModal);
        Inpaint->resize(303, 203);
        buttonBox = new QDialogButtonBox(Inpaint);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(20, 150, 151, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalSlider = new QSlider(Inpaint);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(20, 40, 271, 21));
        horizontalSlider->setMinimum(1);
        horizontalSlider->setMaximum(300);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setValue(20);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(20);
        label = new QLabel(Inpaint);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 271, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        checkBox = new QCheckBox(Inpaint);
        checkBox->setObjectName("checkBox");
        checkBox->setGeometry(QRect(180, 160, 91, 20));
        pushButton = new QPushButton(Inpaint);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(20, 80, 121, 24));
        pushButton_2 = new QPushButton(Inpaint);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(154, 80, 111, 24));

        retranslateUi(Inpaint);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, Inpaint, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, Inpaint, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(Inpaint);
    } // setupUi

    void retranslateUi(QDialog *Inpaint)
    {
        Inpaint->setWindowTitle(QCoreApplication::translate("Inpaint", "Inpaint", nullptr));
        label->setText(QCoreApplication::translate("Inpaint", "Radio del pincel", nullptr));
        checkBox->setText(QCoreApplication::translate("Inpaint", "Previsualizar", nullptr));
        pushButton->setText(QCoreApplication::translate("Inpaint", "Resetear", nullptr));
        pushButton_2->setText(QCoreApplication::translate("Inpaint", "Inpaint", nullptr));
    } // retranslateUi

};

namespace Ui {
    class Inpaint: public Ui_Inpaint {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_INPAINT_H
