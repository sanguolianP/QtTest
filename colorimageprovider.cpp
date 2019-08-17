//#include <qqmlextensionplugin.h>
//#include <qqmlengine.h>
#include <qquickimageprovider.h>
#include <QImage>
#include <QPainter>
#include "imageprocess.h"

class ColorImageProvider : public QQuickImageProvider
{

public:
    ImageProcess imgPro;

public:
    ColorImageProvider()
        : QQuickImageProvider(QQuickImageProvider::Pixmap)
    {
    }

    QPixmap requestPixmap(const QString &id, QSize *size, const QSize &requestedSize) override
    {
        int width = 100;
        int height = 50;

        if (size)
            *size = QSize(width, height);
        QPixmap pixmap(requestedSize.width() > 0 ? requestedSize.width() : width,
                       requestedSize.height() > 0 ? requestedSize.height() : height);

        //        pixmap.fill(QColor(id).rgba());

        //        // write the color name
        //        QPainter painter(&pixmap);
        //        QFont f = painter.font();
        //        f.setPixelSize(20);
        //        painter.setFont(f);
        //        painter.setPen(Qt::black);
        //        if (requestedSize.isValid())
        //            painter.scale(requestedSize.width() / width, requestedSize.height() / height);
        //        painter.drawText(QRectF(0, 0, width, height), Qt::AlignCenter, id);

        if(id == "hello")
        {
            QImage img;
//                    img = QImage("images1/WindowBG.png");
            img = QImage("C:/Users/SanguolianP/Desktop/imageTestqml4/qml/images/maininterface.jpg");
//            img =

            pixmap = QPixmap::fromImage(img);
        }

        return pixmap;
    }
};

//class ImageProviderExtensionPlugin : public QQmlExtensionPlugin
//{
//    Q_OBJECT
//    Q_PLUGIN_METADATA(IID QQmlExtensionInterface_iid)
//public:
//    void registerTypes(const char *uri) override
//    {
//        Q_UNUSED(uri);
//    }

//    void initializeEngine(QQmlEngine *engine, const char *uri) override
//    {
//        Q_UNUSED(uri);
//        engine->addImageProvider("colors", new ColorImageProvider);
//    }

//};
