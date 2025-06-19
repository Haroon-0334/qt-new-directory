#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QDebug>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    qDebug() << "Available drivers:" << QSqlDatabase::drivers();
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    QSqlDatabase db = QSqlDatabase::addDatabase("QMYSQL");
    db.setHostName("127.0.0.1");
    db.setUserName("root");
    db.setPassword(""); // use the actual password if there is one
    db.setDatabaseName("qt6"); // your MySQL database name

    if (db.open()) {
        QMessageBox::information(this, "Connection", "Database Connected Successfully");
    } else {
        QMessageBox::critical(this, "Database Error", db.lastError().text());
    }
}
