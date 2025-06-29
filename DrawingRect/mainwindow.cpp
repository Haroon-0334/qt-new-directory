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
    QPainter painter(this);
    painter.setBrush(Qt::FDiagPattern);

    QPen pen;
    pen.setColor(Qt::red);
    pen.setWidth(6);

    painter.setPen(pen);

    painter.drawRect(QRect(80, 120, 200, 100));
}
