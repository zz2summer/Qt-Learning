#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->webView,SIGNAL(urlChanged(QUrl)),this,SLOT(setURLSlot(QUrl)));
    QObject::connect(ui->lineEdit,SIGNAL(returnPressed()),this,SLOT(setWebViewSlot()));
    QObject::connect(ui->webView,SIGNAL(titleChanged(QString)),this,SLOT(setWindowTitleSlot(QString)));
    QObject::connect(ui->webView,SIGNAL(linkClicked(QUrl)),this,SLOT(linkClickSlot(QUrl)));
    QObject::connect(ui->webView,SIGNAL(loadProgress(int)),this,SLOT(setProgressSlot(int)));
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::setURLSlot(QUrl url)
{
    ui->lineEdit->setText(url.toString());
}

void MainWindow::setWebViewSlot()
{
    ui->webView->setUrl(QUrl(ui->lineEdit->text()));

}

void MainWindow::setWindowTitleSlot(QString title)
{
    this->setWindowTitle(title);
}

void MainWindow::linkClickSlot(QUrl url)
{
    ui->webView->setUrl(url);
}

void MainWindow::setProgressSlot(int progress)
{
    ui->progressBar->setValue(progress);
}
