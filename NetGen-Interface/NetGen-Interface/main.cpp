#include "netgenmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    NetGenMainWindow w;
    w.show();
    return a.exec();
}
