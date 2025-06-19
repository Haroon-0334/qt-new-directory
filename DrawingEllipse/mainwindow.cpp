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

void MainWindow::paintEvent(QPaintEvent *event)
{
    QPainter ellipsePainter(this);

    QPen pen;
    pen.setWidth(10);
    pen.setBrush(Qt::SolidPattern);
    ellipsePainter.setPen(pen);

    ellipsePainter.drawEllipse(QRect(20,20, 100,100));
}
