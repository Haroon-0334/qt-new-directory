#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent)
    : QDialog(parent)
    , ui(new Ui::Dialog)
{
    ui->setupUi(this);
    ui->checkBox->setChecked(true);
}

Dialog::~Dialog()
{
    delete ui;
}

void Dialog::on_pushButton_clicked()
{
    if(ui->checkBox->isChecked()){
        ui->label->setText("Yes I like Sports");
    }
    else{
        ui->label->setText("No I do not like Sports");
    }

}

