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

void MainWindow::on_registerBtn_clicked()
{
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("");
    database.setDatabaseName("qt6register");

    if(database.open()){
        QString username = ui->username->text();
        QString password = ui->password->text();
        QString email = ui->email->text();
        QString phone = ui->phone->text();

        QSqlQuery qry;
        qry.prepare("INSERT INTO users (username, password, email,phone)"
                    "VALUES (:username, :password, :email, :phone)");

        qry.bindValue(":username", username);
        qry.bindValue(":password", password);
        qry.bindValue(":email", email);
        qry.bindValue(":phone", phone);

        if(qry.exec()){
            QMessageBox::information(this, "Inserted", "Data Inserted Successfully");

        }
        else{
            QMessageBox::information(this, "Not Inserted", "Data is not Inserted");
        }
    }
    else{
        QMessageBox::information(this, "Not Connected", "Database Is Not Connected");
    }
}


void MainWindow::on_loginBtn_clicked()
{
    QSqlDatabase db ;
    db = QSqlDatabase::addDatabase("QMYSQL", "MyConnect");
    db.setHostName("localhost");
    db.setUserName("root");
    db.setPassword("");
    db.setDatabaseName("qt6register");

    QString username = ui->lineEdit->text();
    QString password = ui->lineEdit_2->text();

    if(db.open()){
       // QMessageBox::information(this, "Database Sucess", "Database Connection Sucess");

        QSqlQuery query(QSqlDatabase::database("MyConnect"));

        query.prepare(QString("SELECT * FROM users WHERE username = :username AND password = :password"));

        query.bindValue(":username", username);
        query.bindValue(":password", password);

        if(!query.exec()){
            QMessageBox::information(this, "Failed", "Query Failed To Execute");
        }
        else{
            while(query.next()){
                QString usernameFromDB = query.value(1).toString();
                QString passwordFromDB = query.value(2).toString();

                if(usernameFromDB == username && passwordFromDB == password){
                    QMessageBox::information(this, "Success", "Login Success");

                    MyDialog dialog;
                    dialog.setModal(true);
                    dialog.exec();
                }
                else{
                    QMessageBox::information(this, "Failed", "Login Failed");
                }
            }
        }
    }
    else{
        QMessageBox::information(this, "Database Failed", "Database Connection Failed");
    }
}

