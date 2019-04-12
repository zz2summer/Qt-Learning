#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextCodec>
#include <registerform.h>


namespace Ui {
    class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    //模块一：主体界面模块
    void on_registerExitButton_clicked();   //用户登录、退出

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
