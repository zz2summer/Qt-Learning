#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    this->setWindowTitle("Caculator");
    this->setFixedSize(298,277);
    this->init();    //对所有元素进行初始化
}

MainWindow::~MainWindow()
{
    delete ui;
}

//初始化所有数据
void MainWindow::init()
{
    number1 = 0;
    number2 = 0;
    result = 0;
    op = 0;
    equationEdit = "";
    isOperator = false;
}

//计算
void MainWindow::cal()
{
    switch(op){
    case 1 :
    {
        //幂运算
        result = qPow(number1, number2);
        break;
    }
    case 2 :
     {
         result = number1 + number2;
         break;
     }
    case 3 :
     {
         result = number1 - number2;
         break;
     }
    case 4 :
     {
         result = number1 * number2;
         break;
     }
    case 5 :
     {
         result = number1 / number2;
         break;
     }
    case 6 :
     {
         result = number1 % number2;
         break;
     }
    default : break;
    }
    number1 = result;
    number2 = 0; 
    op = 0;
    ui->inputEdit->setText(equationEdit);
    ui->resultEdit->setText(QString("%1").arg(result));	
} 

//CE 清除第一行中的算式，保留第二行中的结果，对除result外的数据进行初始化
void MainWindow::on_m11Button_clicked()
{
    ui->resultEdit->setText(QString("%1").arg(result));
    ui->inputEdit->clear();
    number1 = 0;
    number2 = 0;
    op = 0;
    equationEdit = "";
    isOperator = false;
}

//C 清空第一行和第二行中的数据，对所有数据初始化
void MainWindow::on_m12Button_clicked()
{
    this->init();
    ui->inputEdit->clear();
    ui->resultEdit->clear();
}

//sin
void MainWindow::on_m13Button_clicked()
{
    equationEdit = "sin" + equationEdit;
    if(op!=0)
    {
        result = qAsin(number2);
        number2 = result;
    }
    else
    {
        result = qAsin(number1);
        number1 = result;
    }
    ui->inputEdit->setText(equationEdit);
    ui->resultEdit->setText(QString("%1").arg(result));
}

//cos
void MainWindow::on_m14Button_clicked()
{
    equationEdit = "cos" + equationEdit;
    if(op!=0)
    {
        result = qAcos(number2);
        number2 = result;
    }
    else
    {
        result = qAcos(number1);
        number1 = result;
    }
    ui->inputEdit->setText(equationEdit);
    ui->resultEdit->setText(QString("%1").arg(result));
}

void MainWindow::on_m15Button_clicked()
{
    equationEdit = "tan" + equationEdit;
    if(op!=0)
    {
        result = qAtan(number2);
        number2 = result;
    }
    else
    {
        result = qAtan(number1);
        number1 = result;
    }
    ui->inputEdit->setText(equationEdit);
    ui->resultEdit->setText(QString("%1").arg(result));
}

//指数运算
void MainWindow::on_m21Button_clicked()
{
    equationEdit += "^";
    if(op!=0)
    {
        this->cal();
    }
    op = 1;
    isOperator = true;
    ui->inputEdit->setText(equationEdit);
}

//e的指数运算
void MainWindow::on_m22Button_clicked()
{
    equationEdit = "e^" + equationEdit;
    if(op!=0)
    {
        result = qPow(2.71828,number2);
        number2 = result;
    }
    else
    {
        result = qPow(2.71828,number1);
        number1 = result;
    }
    ui->inputEdit->setText(equationEdit);
    ui->resultEdit->setText(QString("%1").arg(result));
}

//ln 对数运算
void MainWindow::on_m23Button_clicked()
{
    equationEdit = "ln" + equationEdit;
    if(op!=0)
    {
        result = qLn(number2);
        number2 = result;
    }
    else
    {
        result = qLn(number1);
        number1 = result;
    }
    ui->inputEdit->setText(equationEdit);
    ui->resultEdit->setText(QString("%1").arg(result));
}

//加法+
void MainWindow::on_m24Button_clicked()
{
    equationEdit += "+";
    if(op!=0)
    {
        this->cal();
    }
    op = 2;
    isOperator = true;
    ui->inputEdit->setText(equationEdit);
}

//减法-
void MainWindow::on_m25Button_clicked()
{
    equationEdit += "-";
    if(op!=0)
    {
        this->cal();
    }
    op = 3;
    isOperator = true;
    ui->inputEdit->setText(equationEdit);
}

//数字7
void MainWindow::on_m31Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+7;
    else
        number1 = number1*10+7;

    equationEdit += "7";
    ui->inputEdit->setText(equationEdit);
}

//数字8
void MainWindow::on_m32Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+8;
    else
        number1 = number1*10+8;

    equationEdit += "8";
    ui->inputEdit->setText(equationEdit);
}

//数字9
void MainWindow::on_m33Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+9;
    else
        number1 = number1*10+9;

    equationEdit += "9";
    ui->inputEdit->setText(equationEdit);
}

//乘法*
void MainWindow::on_m34Button_clicked()
{
    equationEdit += "*";
    if(op!=0)
    {
        this->cal();
    }
    op = 4;
    isOperator = true;
    ui->inputEdit->setText(equationEdit);
}

//除法/
void MainWindow::on_m35Button_clicked()
{
    equationEdit += "/";
    if(op!=0)
    {
        this->cal();
    }
    op = 5;
    isOperator = true;
    ui->inputEdit->setText(equationEdit);
}


//数字4
void MainWindow::on_m41Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+4;
    else
        number1 = number1*10+4;

    equationEdit += "4";
    ui->inputEdit->setText(equationEdit);
}

//数字5
void MainWindow::on_m42Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+5;
    else
        number1 = number1*10+5;

    equationEdit += "5";
    ui->inputEdit->setText(equationEdit);
}

//数字6
void MainWindow::on_m43Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+6;
    else
        number1 = number1*10+6;

    equationEdit += "6";
    ui->inputEdit->setText(equationEdit);
}

//取余%
void MainWindow::on_m44Button_clicked()
{
    equationEdit += "%";
    if(op!=0)
    {
        this->cal();
    }
    op = 6;
    isOperator = true;
    ui->inputEdit->setText(equationEdit);
}

//√ 开根号
void MainWindow::on_m45Button_clicked()
{
    equationEdit = "ln" + equationEdit;
    if(op!=0)
    {
        result = qPow(number2,0.5);
        number2 = result;
    }
    else
    {
        result = qPow(number1,0.5);
        number1 = result;
    }
    ui->inputEdit->setText(equationEdit);
    ui->resultEdit->setText(QString("%1").arg(result));
}

//数字1
void MainWindow::on_m51Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+1;
    else
        number1 = number1*10+1;

    equationEdit += "1";
    ui->inputEdit->setText(equationEdit);
}

//数字2
void MainWindow::on_m52Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+2;
    else
        number1 = number1*10+2;

    equationEdit += "2";
    ui->inputEdit->setText(equationEdit);
}

//数字3
void MainWindow::on_m53Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+3;
    else
        number1 = number1*10+3;

    equationEdit += "3";
    ui->inputEdit->setText(equationEdit);
}

//数字0
void MainWindow::on_m54Button_clicked()
{
    if(isOperator)//输入过操作符
        number2 = number2*10+0;
    else
        number1 = number1*10+0;

    equationEdit += "0";
    ui->inputEdit->setText(equationEdit);
}

//等于=
void MainWindow::on_m55Button_clicked()
{
    this->cal();
}


