#include "changhe_studio.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    changhe_studio w;
    w.show();
    return a.exec();
}
