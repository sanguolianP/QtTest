#include <QGuiApplication>
#include <QQmlApplicationEngine>
//#include <QQuickView>
//#include <QQmlEngine>
#include "ColorImageProvider.cpp"

int main(int argc, char *argv[])
{
//    QCoreApplication::setAttribute(Qt::AA_EnableHighDpiScaling);

    QGuiApplication app(argc, argv);

//    QQuickView view;
    QQmlApplicationEngine engine;

//    QQmlEngine *engine = view.engine();

    engine.addImageProvider(QLatin1String("colors"), new ColorImageProvider);

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));

//    view.setSource(QUrl(QStringLiteral("qrc:/main.qml")));
//    view.show();

    return app.exec();
}
