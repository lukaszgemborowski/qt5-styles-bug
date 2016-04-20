#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "dialog.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setStyleSheet("QLabel { color: red; }");
    connect(ui->pushButton, SIGNAL(released()), this, SLOT(ASD()));

}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::ASD()
{
    Dialog *f = new Dialog(this);
    f->show();
}
