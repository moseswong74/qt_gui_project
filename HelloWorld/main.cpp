#include "mainwindow.h"
#include "qlabel.h"

#include <QApplication>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    //MainWindow w;

    // QLabel is used for displaying text or an image
    QLabel label{"Hello World"};

    //w.show();
    label.show();
    return a.exec();
}
