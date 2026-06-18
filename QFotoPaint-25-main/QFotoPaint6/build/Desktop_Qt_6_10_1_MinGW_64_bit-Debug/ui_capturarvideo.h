/********************************************************************************
** Form generated from reading UI file 'capturarvideo.ui'
**
** Created by: Qt User Interface Compiler version 6.10.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CAPTURARVIDEO_H
#define UI_CAPTURARVIDEO_H

#include <QtCore/QVariant>
#include <QtWidgets/QAbstractButton>
#include <QtWidgets/QApplication>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QSlider>
#include <QtWidgets/QSpinBox>

QT_BEGIN_NAMESPACE

class Ui_CapturarVideo
{
public:
    QDialogButtonBox *buttonBox;
    QSlider *horizontalSlider;
    QLabel *label;
    QSpinBox *spinBox;

    void setupUi(QDialog *CapturarVideo)
    {
        if (CapturarVideo->objectName().isEmpty())
            CapturarVideo->setObjectName("CapturarVideo");
        CapturarVideo->setWindowModality(Qt::WindowModality::WindowModal);
        CapturarVideo->resize(397, 123);
        buttonBox = new QDialogButtonBox(CapturarVideo);
        buttonBox->setObjectName("buttonBox");
        buttonBox->setGeometry(QRect(10, 80, 171, 32));
        buttonBox->setOrientation(Qt::Orientation::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::StandardButton::Cancel|QDialogButtonBox::StandardButton::Ok);
        horizontalSlider = new QSlider(CapturarVideo);
        horizontalSlider->setObjectName("horizontalSlider");
        horizontalSlider->setGeometry(QRect(20, 40, 271, 21));
        horizontalSlider->setMinimum(0);
        horizontalSlider->setMaximum(256);
        horizontalSlider->setPageStep(16);
        horizontalSlider->setValue(100);
        horizontalSlider->setOrientation(Qt::Orientation::Horizontal);
        horizontalSlider->setTickPosition(QSlider::TickPosition::TicksBelow);
        horizontalSlider->setTickInterval(100);
        label = new QLabel(CapturarVideo);
        label->setObjectName("label");
        label->setGeometry(QRect(20, 20, 271, 16));
        label->setStyleSheet(QString::fromUtf8("background-color: rgb(128, 128, 128);\n"
"color: rgb(255, 255, 255);"));
        label->setAlignment(Qt::AlignmentFlag::AlignCenter);
        spinBox = new QSpinBox(CapturarVideo);
        spinBox->setObjectName("spinBox");
        spinBox->setGeometry(QRect(300, 20, 81, 22));
        spinBox->setMinimum(0);
        spinBox->setMaximum(256);
        spinBox->setValue(100);

        retranslateUi(CapturarVideo);
        QObject::connect(buttonBox, &QDialogButtonBox::accepted, CapturarVideo, qOverload<>(&QDialog::accept));
        QObject::connect(buttonBox, &QDialogButtonBox::rejected, CapturarVideo, qOverload<>(&QDialog::reject));

        QMetaObject::connectSlotsByName(CapturarVideo);
    } // setupUi

    void retranslateUi(QDialog *CapturarVideo)
    {
        CapturarVideo->setWindowTitle(QCoreApplication::translate("CapturarVideo", "CapturarDeVideo", nullptr));
        label->setText(QCoreApplication::translate("CapturarVideo", "N\303\272mero de frames", nullptr));
    } // retranslateUi

};

namespace Ui {
    class CapturarVideo: public Ui_CapturarVideo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CAPTURARVIDEO_H
