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

    QLinearGradient lineraGradient(QPointF(100,100),QPointF(200,200));
    lineraGradient.setColorAt(0, Qt::red);
    lineraGradient.setColorAt(0.5, Qt::green);
    lineraGradient.setColorAt(1, Qt::yellow);

    QRect linearRect(50,50, 200,200);
    painter.fillRect(linearRect, lineraGradient);


    QRadialGradient radialGradient(QPoint(400,150), 100);
    radialGradient.setColorAt(0, Qt::red);
    radialGradient.setColorAt(0.5, Qt::gray);
    radialGradient.setColorAt(1, Qt::yellow);

    QRect radialRect(300,50, 200,200);
    painter.fillRect(radialRect, radialGradient);

    QConicalGradient conicalGradient(QPoint(650,150), 90);
    conicalGradient.setColorAt(0, Qt::red);
    conicalGradient.setColorAt(0.5, Qt::blue);
    conicalGradient.setColorAt(1, Qt::yellow);

    QRect conicalRect(550,50, 200,200);
    painter.fillRect(conicalRect, conicalGradient);
}
