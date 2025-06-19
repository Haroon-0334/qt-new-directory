#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->radioButton->setChecked(true);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_clicked()
{
    if(ui->radioButton->isChecked()){
        ui->lineEdit->setText(ui->radioButton->text());
    }
    else if(ui->radioButton_2->isChecked()){
        ui->lineEdit->setText(ui->radioButton_2->text());
    }
    else if(ui->radioButton_3->isChecked()){
        ui->lineEdit->setText(ui->radioButton_3->text());
    }
}

