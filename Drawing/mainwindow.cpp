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
    QPainter mytext(this);
    mytext.setFont(QFont("Times", 26, QFont::Bold));
    mytext.drawText(QPoint(20, 30), "Qt6 Text Drawing");



    QTextDocument document;
    QRect rect(0,0, 250, 250);
    mytext.translate(100,50);

    document.setHtml("<b>Hello</b><font color = 'red' size = '30'>Qt6 C++</font>");
    document.drawContents(&mytext,rect);

    QPainter myline(this);

    QPen linePen(Qt::green);
    linePen.setWidth(14);
    myline.setPen(linePen);

    myline.drawLine(50,50, 200,200);
}
