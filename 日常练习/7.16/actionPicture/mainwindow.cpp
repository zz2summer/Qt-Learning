#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QPixmap pixmap("D:\Qt\7.16\actionPicture\images\action.gif");
    ui->displayLabel->setPixmap(pixmap);
    ui->displayLabel->show();
}

MainWindow::~MainWindow()
{
    delete ui;
}
