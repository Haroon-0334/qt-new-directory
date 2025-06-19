#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    database = QSqlDatabase::addDatabase("QMYSQL");
    database.setHostName("localhost");
    database.setUserName("root");
    database.setPassword("");
    database.setDatabaseName("qt6register");

    if(database.open()){
        querymodel = new QSqlQueryModel();
        querymodel->setQuery("SELECT * FROM users");
        ui->tableView->setModel(querymodel);
    }
    else{
        QMessageBox::information(this, "Database Failed", "Connection Failed");
    }
}

Dialog::~Dialog()
{
    delete ui;
}
