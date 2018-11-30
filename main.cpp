#include "MainUi.h"
#include <QApplication>
#include "singletonMode/Singleton.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    Singleton::Instance()->doSomething();
    MainUi w;
    w.show();

    return a.exec();
}
