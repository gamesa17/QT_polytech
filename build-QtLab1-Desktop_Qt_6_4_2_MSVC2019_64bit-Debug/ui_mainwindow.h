/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 6.4.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTableView>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralwidget;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *constEdit;
    QLineEdit *formulaEdit;
    QLineEdit *valueEdit;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QTableView *tableView;
    QMenuBar *menubar;
    QStatusBar *statusbar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName("MainWindow");
        MainWindow->resize(800, 600);
        centralwidget = new QWidget(MainWindow);
        centralwidget->setObjectName("centralwidget");
        label = new QLabel(centralwidget);
        label->setObjectName("label");
        label->setGeometry(QRect(30, 20, 321, 21));
        label_2 = new QLabel(centralwidget);
        label_2->setObjectName("label_2");
        label_2->setGeometry(QRect(30, 70, 321, 21));
        label_3 = new QLabel(centralwidget);
        label_3->setObjectName("label_3");
        label_3->setGeometry(QRect(30, 140, 321, 21));
        constEdit = new QLineEdit(centralwidget);
        constEdit->setObjectName("constEdit");
        constEdit->setGeometry(QRect(30, 40, 151, 25));
        formulaEdit = new QLineEdit(centralwidget);
        formulaEdit->setObjectName("formulaEdit");
        formulaEdit->setGeometry(QRect(30, 100, 151, 25));
        valueEdit = new QLineEdit(centralwidget);
        valueEdit->setObjectName("valueEdit");
        valueEdit->setGeometry(QRect(30, 170, 151, 25));
        pushButton = new QPushButton(centralwidget);
        pushButton->setObjectName("pushButton");
        pushButton->setGeometry(QRect(30, 220, 93, 29));
        pushButton_2 = new QPushButton(centralwidget);
        pushButton_2->setObjectName("pushButton_2");
        pushButton_2->setGeometry(QRect(140, 220, 93, 29));
        tableView = new QTableView(centralwidget);
        tableView->setObjectName("tableView");
        tableView->setGeometry(QRect(340, 0, 316, 451));
        MainWindow->setCentralWidget(centralwidget);
        menubar = new QMenuBar(MainWindow);
        menubar->setObjectName("menubar");
        menubar->setGeometry(QRect(0, 0, 800, 26));
        MainWindow->setMenuBar(menubar);
        statusbar = new QStatusBar(MainWindow);
        statusbar->setObjectName("statusbar");
        MainWindow->setStatusBar(statusbar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "MainWindow", nullptr));
        label->setText(QCoreApplication::translate("MainWindow", "\320\237\320\276\321\201\321\202\320\276\321\217\320\275\320\275\320\260\321\217 \320\262\320\265\320\273\320\270\321\207\320\270\320\275\320\260", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\244\320\276\321\200\320\274\321\203\320\273\320\260 \320\270\320\273\320\270 \320\276\320\261\320\276\320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\247\320\270\321\201\320\273\320\276\320\262\320\276\320\265 \320\267\320\275\320\260\321\207\320\265\320\275\320\270\320\265", nullptr));
        pushButton->setText(QCoreApplication::translate("MainWindow", "\320\236\321\207\320\270\321\201\321\202\320\270\321\202\321\214", nullptr));
        pushButton_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\276\320\261\320\260\320\262\320\270\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
