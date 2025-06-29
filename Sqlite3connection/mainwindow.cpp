#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase sqlitedb = QSqlDatabase::addDatabase("QSQLITE");
    sqlitedb.setDatabaseName("C:/Users/Hp/Documents/Qt new directory/db/mydb.sqlite");
    if(!sqlitedb.open()){
        QMessageBox::information(this, "Not Connected", "Database Not Connected");
    }
    else{
        QMessageBox::information(this, "Connected", "Database Connected Sucessfully");
    }

}

