#include "mainwindow.h"
#include <QtWidgets/QApplication>
#include <stdio.h>

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);
    MainWindow w;

    w.setWindowFlags(Qt::Window | Qt::FramelessWindowHint);
    w.show();
    return a.exec();
}
