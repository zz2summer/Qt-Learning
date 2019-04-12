#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLineEdit>
#include <QPushButton>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QWidget>
#include <QString>
#include <QtCore/qmath.h>

namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private:
    Ui::MainWindow *ui;

public:
    int number1;
    int number2;
    int result;   //算式中的三个数据
    QString equationEdit;  //输入行中的字符串,算式编辑
    int op;      //操作符标志
    bool isOperator;  //判断是否输入过操作符，0为没有，1为有

    void init(); //初始化 
    void cal();  //计算 

private slots:
    void on_m11Button_clicked();
    void on_m12Button_clicked();
    void on_m13Button_clicked();
    void on_m14Button_clicked();
    void on_m15Button_clicked();
    void on_m21Button_clicked();
    void on_m22Button_clicked();
    void on_m23Button_clicked();
    void on_m24Button_clicked();
    void on_m25Button_clicked();
    void on_m31Button_clicked();
    void on_m32Button_clicked();
    void on_m33Button_clicked();
    void on_m34Button_clicked();
    void on_m35Button_clicked();
    void on_m41Button_clicked();
    void on_m42Button_clicked();
    void on_m43Button_clicked();
    void on_m44Button_clicked();
    void on_m45Button_clicked();
    void on_m51Button_clicked();
    void on_m52Button_clicked();
    void on_m53Button_clicked();
    void on_m54Button_clicked();
    void on_m55Button_clicked();
};

#endif // MAINWINDOW_H
