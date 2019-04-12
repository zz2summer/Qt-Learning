#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Caculator");
    this->setFixedSize(295,265);

    number1 = 0;
    number2 = 0;
    result = 0;
    op = 0;
    stringInLineEdit = "";
    isOperator = false;
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::init()
{
    number1 = 0;
    number2 = 0;
    result = 0;
    op = 0;
    stringInLineEdit = "";
    isOperator = false;
}

void MainWindow::on_m22Button_clicked()
{
    ui->resultEdit->setText(QString("%1").arg(result));
    ui->inputEdit->clear();
    number1 = 0;
    number2 = 0;
    op = 0;
    stringInLineEdit = "";
    isOperator = false;
}

void MainWindow::on_m23Button_clicked()
{
    this->init();
    ui->inputEdit->clear();
    ui->resultEdit->clear();
}

void MainWindow::on_m24Button_clicked()
{
    stringInLineEdit += "+";
    op = 1;
    isOperator = true;
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m25Button_clicked()
{
    stringInLineEdit += "-";
    op = 2;
    isOperator = true;
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m31Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+7;
    else
        number1 = number1*10+7;

    stringInLineEdit += "7";
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m32Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+8;
    else
        number1 = number1*10+8;

    stringInLineEdit += "8";
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m33Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+9;
    else
        number1 = number1*10+9;

    stringInLineEdit += "9";
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m34Button_clicked()
{
    stringInLineEdit += "*";
    op = 3;
    isOperator = true;
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m35Button_clicked()
{
    stringInLineEdit += "/";
    op = 4;
    isOperator = true;
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m41Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+4;
    else
        number1 = number1*10+4;

    stringInLineEdit += "4";
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m42Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+5;
    else
        number1 = number1*10+5;

    stringInLineEdit += "5";
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m43Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+6;
    else
        number1 = number1*10+6;

    stringInLineEdit += "6";
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m44Button_clicked()
{
    stringInLineEdit += "%";
    op = 5;
    isOperator = true;
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m45Button_clicked()
{
    stringInLineEdit += "=";
    switch(op){
    case 1 :
    {
        result = number1 + number2;
        break;
    }
    case 2 :
    {
        result = number1 - number2;
        break;
    }
    case 3 :
    {
        result = number1 * number2;
        break;
    }
    case 4 :
    {
        result = number1 / number2;
        break;
    }
   case 5 :
    {
        result = number1 % number2;
        break;
    }
    default : break;
    }
    //stringInLineEdit +=  result;//QString::number(result,10,4);  //将结果转化为String类型，10表示十进制
    ui->inputEdit->setText(stringInLineEdit);
    ui->resultEdit->setText(QString("%1").arg(result));
}

void MainWindow::on_m51Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+1;
    else
        number1 = number1*10+1;

    stringInLineEdit += "1";
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m52Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+2;
    else
        number1 = number1*10+2;

    stringInLineEdit += "2";
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m53Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+3;
    else
        number1 = number1*10+3;

    stringInLineEdit += "3";
    ui->inputEdit->setText(stringInLineEdit);
}

void MainWindow::on_m54Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+0;
    else
        number1 = number1*10+0;

    stringInLineEdit += "0";
    ui->inputEdit->setText(stringInLineEdit);
}
