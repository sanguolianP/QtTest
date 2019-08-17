#ifndef IMAGEPROCESS_H
#define IMAGEPROCESS_H

#include <QObject>
#include <QFileDialog>
#include <QDebug>
#include <QtQuick>

#include <QApplication>

class ImageProcess: public QQuickItem
{
    Q_OBJECT
public:
    ImageProcess();
    ~ImageProcess();

public:
//    QWidget *widget;
    QImage image;

public:

    Q_INVOKABLE QImage openImage();
    QImage processImage();


signals:


};

#endif // IMAGEPROCESS_H
