#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Caculator");
    this->setFixedSize(263,291);
}

MainWindow::~MainWindow()
{
    delete ui;
}
