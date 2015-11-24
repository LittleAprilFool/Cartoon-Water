#include "cartoonwater.h"
#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    cartoonWater w;
    w.show();

    return a.exec();
}
