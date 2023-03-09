#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    db = QSqlDatabase::addDatabase("QSQLITE");
    db.setDatabaseName("./lab1DB.db");
    if(db.open())
    {
        qDebug("Open! :3");
    }
    else
    {
        qDebug("Error! :(");
    }

    query = new QSqlQuery(db);
    query->exec("CREATE TABLE var(const TEXT, form TEXT, value TEXT);");

    model = new QSqlTableModel(this, db);
    model->setTable("var");
    model->select();

    ui->tableView->setModel(model);
    ui->tableView->show();

}


MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::on_pushButton_clicked()
{
    foreach(QLineEdit *widget, this->findChildren<QLineEdit*>())
    {
        widget->clear();
    }

}



void MainWindow::on_pushButton_2_clicked()
{
    query->prepare("INSERT INTO var( const, form, value ) VALUES( :const, :form, :value );");
    query->bindValue( ":const", ui->constEdit->text() );
    query->bindValue( ":form", ui->formulaEdit->text() );
    query->bindValue(":value", ui->valueEdit->text() );

    qDebug("Successfully!");
    query->exec();

    model->setTable("var");
    model->select();

    ui->tableView->setModel(model);
    ui->tableView->show();

}

void MainWindow::keyPressEvent(QKeyEvent *e)
{
    if (e->key()==Qt::Key_Return)
    {
        query->prepare("INSERT INTO var( const, form, value ) VALUES( :const, :form, :value );");
        query->bindValue( ":const", ui->constEdit->text() );
        query->bindValue( ":form", ui->formulaEdit->text() );
        query->bindValue(":value", ui->valueEdit->text() );

        query->exec();

        model->setTable("var");
        model->select();

        ui->tableView->setModel(model);
        ui->tableView->show();
    }
}






