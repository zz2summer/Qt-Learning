#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->claButton,SIGNAL(clicked()),
                     this,SLOT(calSlot()));
    this->setMaximumSize(483,122);
    this->setMinimumSize(483,122);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::calSlot()
{
    int first=ui->firstLineEdit->text().toInt();
    int second=ui->secondLineEdit->text().toInt();
    int result;
    QMessageBox msgBox;

    if(ui->comboBox->currentIndex()==0)
    {
        result=first+second;


        msgBox.setText("the Result is "+QString::number(result));
        msgBox.exec();
       }
    if(ui->comboBox->currentIndex()==1)
    {

        result=first-second;
        //QMessageBox::Information(this,"Result",QString::number(result));
    }
    if(ui->comboBox->currentIndex()==2)
    {

       result=first*second;
       //QMessageBox::Information(this,"Result",QString::number(result));
    }
    if(ui->comboBox->currentIndex()==3)
    {
        if (second==0)
        {
            result=999999;
           // QMessageBox::Critical(this,"Result",QString::number(result));

        }
        else
        {
           result=first/second;
           //QMessageBox::Information(this,"Result",QString::number(result));
        }
    }

    ui->resultLineEdit->setText(QString::number(result));

}

