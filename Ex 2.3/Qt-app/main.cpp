#include <QApplication>
#include "my_rand_lcg.h"
#include "MainWindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    MainWindow window;
    window.setWindowTitle("Randomizer LCG");
    window.show();
    return a.exec();
}
