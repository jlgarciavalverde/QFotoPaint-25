#include "capturarvideo.h"
#include "ui_capturarvideo.h"

CapturarVideo::CapturarVideo(String nombre, QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::CapturarVideo)
{
    ui->setupUi(this);
    if (cap.open(nombre))
    {
        int nframes = cap.get(CAP_PROP_FRAME_COUNT);
        ui->horizontalSlider->setMaximum(nframes-1);
        ui->spinBox->setMaximum(nframes-1);
        Mat frame;
        if(cap.read(frame))
        {
            imshow("Frame del vídeo", frame);
        }

    }
}

bool CapturarVideo::isOpened()
{
    return cap.isOpened();
}
CapturarVideo::~CapturarVideo()
{
    delete ui;
}

void CapturarVideo::on_horizontalSlider_valueChanged(int value)
{
    ui->spinBox->setValue(value);
    cap.set(CAP_PROP_POS_FRAMES,value);
    Mat frame;
    if(cap.read(frame))
    {
        imshow("Frame del vídeo", frame);
    }
}


void CapturarVideo::on_spinBox_valueChanged(int arg1)
{
    ui->horizontalSlider->setValue(arg1);
}


void CapturarVideo::on_CapturarVideo_accepted()
{

    cap.set(CAP_PROP_POS_FRAMES,ui->spinBox->value());
    Mat frame;
    if(cap.read(frame))
    {
        crear_nueva(primera_libre(), frame);
    }
    destroyWindow("Frame de vídeo");
}





void CapturarVideo::on_CapturarVideo_rejected()
{
    destroyWindow("Frame de vídeo");
}

