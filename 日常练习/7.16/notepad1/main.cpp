#include <QtGui/QApplication>
#include "mainwindow.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QTextCodec::setCodecForTr(QTextCodec::codecForName("GB2312"));   //支持中文
    QTextCodec::setCodecForCStrings(QTextCodec::codecForName("GB2312"));  //数组直接支持中文

    MainWindow w;
    w.show();

    return a.exec();
}
