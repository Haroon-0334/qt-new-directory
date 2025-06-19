#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QMessageBox>

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

void MainWindow::on_actionquit_triggered()
{
    QApplication::quit();
}


void MainWindow::on_actionAbout_triggered()
{
    QMessageBox::information(this, "About", "This is me");
}


void MainWindow::on_actionAbout_Qt_triggered()
{
    QApplication::aboutQt();
}


void MainWindow::on_actionPrint_triggered()
{
    QPrinter printer;
    QPrintDialog dialog(&printer,this);
    dialog.setWindowTitle("Print Document");
    if(ui->textEdit->textCursor().hasSelection())
        dialog.setOption(QAbstractPrintDialog::PrintSelection);

    if(dialog.exec() != QDialog::Accepted){
        return;
    }
}


void MainWindow::on_actionfont_triggered()
{
    bool ok;
    QFont font = QFontDialog::getFont(&ok, QFont("helvetica[Cronxyx]", 15),this);

    if(ok ){
        ui->textEdit->setFont(font);
    }
}


void MainWindow::on_actionColor_triggered()
{
    bool ok ;
    QColor color = QColorDialog::getColor(Qt::yellow,this);

    if (&ok){
        ui->textEdit->setTextColor(color);
    }
}


void MainWindow::on_actionopen_triggered()
{
    QString filename = QFileDialog::getOpenFileName(this, "Open a file", "C://");
    ui->textEdit->setText(filename);
}

