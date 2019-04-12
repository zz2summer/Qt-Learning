#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
   // QObject::connect(ui->showButton,SIGNAL(clicked()),this,SLOT(on_showButton_clicked()));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_showButton_clicked()
{
    QWebView *view = new QWebView;
    view->load(QUrl("http://www.whu.edu.cn"));
    view->show();
}
