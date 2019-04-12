#include "widget.h"
#include "ui_widget.h"

Widget::Widget(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::Widget)
{
    ui->setupUi(this);
    QObject::connect(ui->cmdLineEdit,
                     SIGNAL(returnPressed()),
                     this,SLOT(on_submitButton_clicked()));
    this->setMaximumSize(400,180);
    this->setMinimumSize(400,180);
    this->setWindowTitle("running");
}

Widget::~Widget()
{
    delete ui;
}

void Widget::on_submitButton_clicked()
{
    /*
     QProcess *myProcess = new QProcess(parent);
     myProcess->start(program, arguments);
      */
    QProcess *process = new QProcess;
    QString startProgram = ui->cmdLineEdit->text();
    process->start(startProgram.trimmed());
    ui->cmdLineEdit->clear();
    this->close();
}
