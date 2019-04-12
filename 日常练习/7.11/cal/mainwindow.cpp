#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "QMessageBox"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->claButton,SIGNAL(clicked()),this,SLOT(calSlot()));
    this->setFixedSize(479,127);
    this->setWindowTitle("Caculator");
}

MainWindow::~MainWindow()
{
    delete ui;
}

//int dec = str.toInt(&ok, 10);  StringתΪInt

void MainWindow::calSlot()
{
    int first = ui->firstLineEdit->text().toInt();
    int second = ui->secondLineEdit->text().toInt();
    int result;
    QMessageBox mgBox;
    switch(ui->comboBox->currentIndex())
    {
        case 0 : result = first + second;
                 break;
        case 1 : result = first - second;
                 break;
        case 2 : result = first * second;
                 break;
        case 3 : {
                 if(second==0)
                     result = 999999;
                 else
                    result = first / second;
                 }
                 break;
        default: result = 999999;
                 break;
    }

    /*
    if(ui->comboBox->currentIndex()==0)
    {
        result = first + second;
    }
    if(ui->comboBox->currentIndex()==1)
    {
        result = first - second;
    }
    if(ui->comboBox->currentIndex()==2)
    {
        result = first * second;
    }
    if(ui->comboBox->currentIndex()==3)
    {
        if(second==0)
            result = 999999;
        else
           result = first / second;
    }
    */

    mgBox.setText("The result is "+QString::number(result));
    mgBox.exec();
    ui->resultLineEdit->setText(QString::number(result));
}
