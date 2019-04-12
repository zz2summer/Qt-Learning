#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("梦马音乐");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//模块一：主体界面模块
//用户登录、退出
void MainWindow::on_registerExitButton_clicked()
{
    registerForm *rg = new registerForm;
    rg->setWindowTitle("用户登录/退出");
    rg->show();
}
