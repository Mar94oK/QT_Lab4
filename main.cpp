#include "mainwindow.h"
#include <QApplication>
#include <QTime>
#include <QGlobal.h>
#include <QtCore>

//My first commint to git...

//and the second..

int main(int argc, char *argv[])
{
    QTime time = QTime::currentTime();
    qsrand((uint)time.msec());
    QTranslator mytranslator;
    QApplication a(argc, argv);
    MainWindow w;
    w.show();

    return a.exec();
}
