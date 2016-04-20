#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("QLabel { color: red; }");
    Dialog *f = new Dialog(this);
    f->show();

}

MainWindow::~MainWindow()
{
    delete ui;
}
