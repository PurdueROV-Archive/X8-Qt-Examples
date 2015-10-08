#include <QApplication>
#include <QQmlApplicationEngine>
#include <QQmlContext>

#include <data.h>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    QQmlApplicationEngine engine;

    Data* data = new Data();

    engine.load(QUrl(QStringLiteral("qrc:/main.qml")));
    engine.rootContext()->setContextProperty("Data", data);


    return app.exec();
}
