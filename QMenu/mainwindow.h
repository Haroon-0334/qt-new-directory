#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QPrinter>
#include <QPrintDialog>
#include <QFontDialog>
#include <QColorDialog>
#include <QFileDialog>

QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_actionquit_triggered();

    void on_actionAbout_triggered();

    void on_actionAbout_Qt_triggered();

    void on_actionPrint_triggered();

    void on_actionfont_triggered();

    void on_actionColor_triggered();

    void on_actionopen_triggered();

private:
    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
