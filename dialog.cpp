#include "dialog.h"
#include "ui_dialog.h"

Dialog::Dialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::Dialog)
{
    ui->setupUi(this);
    this->setStyleSheet("#label_2 { color: green; }  #label { color: green; } ");
}

Dialog::~Dialog()
{
    delete ui;
}
