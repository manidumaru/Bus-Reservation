#include "mockup.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MockUp w;
    w.show();
    return a.exec();
}
