#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QTextCodec>
#include <QtWebKit/QtWebKit>
#include <QtWebKit/QWebFrame>
#include <QUrl>
#include <QLineEdit>
#include <QPushButton>
#include <QDebug>
#include <QString>
#include <QWidget>



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

private slots:
    void setURLSlot(QUrl url);
    void setWebViewSlot();
    void setWindowTitleSlot(QString title);
    void linkClickSlot(QUrl url);
    void setProgressSlot(int progress);
};

#endif // MAINWINDOW_H
