#include <QApplication>
#include <QtWidgets>
#include "mainwindow.h"


int main(int argc, char *argv[])
{
    QApplication app(argc, argv);
    QSplashScreen *splash = new QSplashScreen;
    Qt::Alignment topRight = Qt::AlignRight | Qt::AlignTop;
    MainWindow mainWin;
    mainWin.show();
    splash->finish(&mainWin);
    delete splash;
    return app.exec();
}

