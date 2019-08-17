#include "imageprocess.h"



ImageProcess::ImageProcess()
{

}

ImageProcess::~ImageProcess()
{

}

QImage ImageProcess::openImage()
{
    qDebug("open");
    QString fileName = QFileDialog::getOpenFileName(
                   NULL, "open image file",
                    ".",
                    "Image files (*.bmp *.jpg *.pbm *.pgm *.png *.ppm *.xbm *.xpm);;All files (*.*)");
        if(fileName != "")
        {
            if(!QImage(fileName).isNull())
            {
                qDebug()<<fileName;
                image = QImage(fileName);
                qDebug()<<image;

                return image;
            }
        }
}

QImage ImageProcess::processImage()
{

}
