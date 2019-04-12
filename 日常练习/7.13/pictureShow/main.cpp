#include <QtGui/QApplication>
#include "mainwindow.h"
#include <QLabel>
#include <QWidget>
#include <QDialog>
#include <QDebug>
#include <QColorDialog>
#include <QPixmap>
#include <QHBoxLayout>

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QLabel *label = new QLabel;
    label->setText("abkdjsalkf");
    label->setPixmap(QPixmap("D:/Temp/123.jpg"));
    label->resize(400,550);
    QWidget *w = new QWidget;
    QHBoxLayout *partLayout = new QHBoxLayout;
    partLayout->addWidget(label);
    w->setLayout(partLayout);
    w->show();

    return a.exec();
}
