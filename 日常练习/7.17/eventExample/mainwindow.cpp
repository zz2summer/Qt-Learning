#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::closeEvent(QCloseEvent *e)
{
    if(ui->textEdit->document()->isModified())
    {
        QMessageBox msgBox;
        msgBox.setText("文档已修改");
        msgBox.setInformativeText("是否需要保存？");
        msgBox.setStandardButtons(QMessageBox::Save | QMessageBox::Discard | QMessageBox::Cancel);
        msgBox.setDefaultButton(QMessageBox::Save);
        int ret = msgBox.exec();
        switch (ret) {
           case QMessageBox::Save:
            QMessageBox::information(this,"OK","文档已保存");
               // Save was clicked
               break;
           case QMessageBox::Discard:
            e->ignore();
               // Don't Save was clicked
               break;
           case QMessageBox::Cancel:
            e->accept();
               // Cancel was clicked
               break;
           default:
               // should never be reached
               break;
         }
    }
}
