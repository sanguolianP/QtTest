#include <QGuiApplication>
#include <QApplication>
#include <QQmlApplicationEngine>
//#include <QQuickView>
//#include <QQmlEngine>
#include "ColorImageProvider.cpp"
#include "imageprocess.h"

int main(int argc, char *argv[])
{
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

//    QGuiApplication app(argc, argv);

    QApplication app(argc, argv);

//    QQuickView view;
    QQmlApplicationEngine engine;

//    QQmlEngine *engine = view.engine();

    qmlRegisterType<ImageProcess>("Imagepro", 1, 1, "ImageProItem");

    engine.addImageProvider(QLatin1String("colors"), new ColorImageProvider);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

//    view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
//    view.show();

    return app.exec();
}
