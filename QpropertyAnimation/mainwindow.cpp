#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);

    animation = new QPropertyAnimation(ui->pushButton, "geometry");

    animation->setDuration(10000);

    animation->setStartValue(ui->pushButton->geometry());

    animation->setEndValue(QRect(200,200,100,50));

    animation->start();

    QEasingCurve curve;

    curve.setType(QEasingCurve::OutBounce);
    curve.setAmplitude(2.00);
    curve.overshoot(1.30);
    curve.period(0.50);

    animation->setLoopCount(4);

    animation->start();
}

MainWindow::~MainWindow()
{
    delete ui;
}
