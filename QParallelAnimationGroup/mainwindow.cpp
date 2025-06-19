#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    animation1 = new QPropertyAnimation(ui->pushButton,"geometry");

    animation1->setDuration(9000);

    animation1->setStartValue(ui->pushButton->geometry());

    animation1->setEndValue(QRect(50, 200, 100, 50));

    animation2 = new QPropertyAnimation(ui->pushButton_2,"geometry");

    animation2->setDuration(9000);

    animation2->setStartValue(ui->pushButton_2->geometry());

    animation2->setEndValue(QRect(150, 200, 100, 50));

    animation3 = new QPropertyAnimation(ui->pushButton_3,"geometry");

    animation3->setDuration(9000);

    animation3->setStartValue(ui->pushButton_3->geometry());

    animation3->setEndValue(QRect(250, 200, 100, 50));

    animationGroup = new QParallelAnimationGroup;
    animationGroup->addAnimation(animation1);
    animationGroup->addAnimation(animation2);
    animationGroup->addAnimation(animation3);

    animationGroup->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
