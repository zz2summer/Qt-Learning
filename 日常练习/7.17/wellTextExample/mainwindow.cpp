#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui(::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

bool MainWindow::eventFilter(QObject *obj, QEvent *e)
{
    if(ui->textEdit == obj)
    {
        if(e->type() == QEvent::Wheel)
        {
            QWheelEvent *w = static_cast<QWheelEvent*>(e);
            if(w->delta() > 0)
            {
                ui->textEdit->zoomOut();
            }
            else
            {
                ui->textEdit->zoomIn();
            }
            return true;
        }
        else
            return false;
    }
    else
    {
        return MainWindow.eventFilter(obj,e);
    }
}

