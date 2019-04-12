#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    QObject::connect(ui->newAction,SIGNAL(triggered()),this,SLOT(newFileSlot()));
    QObject::connect(ui->openAction,SIGNAL(triggered()),this,SLOT(openFileSlot()));
    QObject::connect(ui->saveAction,SIGNAL(triggered()),this,SLOT(saveFileSlot()));
    QObject::connect(ui->saveAsAction,SIGNAL(triggered()),this,SLOT(saveAsFileSlot()));
    QObject::connect(ui->exitAction,SIGNAL(triggered()),this,SLOT(exitFileSlot()));
    QObject::connect(ui->undoAction,SIGNAL(triggered()),this,SLOT(undoEditSlot()));
    QObject::connect(ui->cutAction,SIGNAL(triggered()),this,SLOT(cutEditSlot()));
    QObject::connect(ui->copyAction,SIGNAL(triggered()),this,SLOT(copyEditSlot()));
    QObject::connect(ui->pasteAction,SIGNAL(triggered()),this,SLOT(pasteEditSlot()));
    QObject::connect(ui->deleteAction,SIGNAL(triggered()),this,SLOT(deleteEditSlot()));
    QObject::connect(ui->fontAction,SIGNAL(triggered()),this,SLOT(setFontSlot()));
    QObject::connect(ui->colorAction,SIGNAL(triggered()),this,SLOT(setColorSlot()));
    QObject::connect(ui->dateTimeAction,SIGNAL(triggered()),this,SLOT(setDateTimeSlot()));
    QObject::connect(ui->qtHelpAction,SIGNAL(triggered()),qApp,SLOT(aboutQt()));
    QObject::connect(ui->aboutBossAction,SIGNAL(triggered()),this,SLOT(aboutWebSiteSlot()));
    this->setWindowTitle("Untitled - NotePad");
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::newFileSlot()
{
    if(ui->textEdit->document()->isModified())
    {
        qDebug()<<"current is modified !";
    }
    else
    {
        //qDebug("is not modified");
        ui->textEdit->clear();
        this->setWindowTitle("untitled - CSU");
    }
}

void MainWindow::openFileSlot()
{
    /*
 QString fileName = QFileDialog::getOpenFileName(this, tr("Open File"),
                                                 "/home",
                                                 tr("Images (*.png *.xpm *.jpg)"));
    */
    QString filename = QFileDialog::getOpenFileName(this,"Open file",QDir::currentPath());
    if(filename.isEmpty())
    {
        QMessageBox::information(this,"Error mesage","Please input correct filename");
    }
    QFile *file = new QFile;
    file->setFileName(filename);
    this->setWindowTitle(filename);
    bool ok = file->open(QIODevice::ReadOnly);//read file with readonly mode
    if(ok)
    {
        QTextStream in(file);  //将文件文本流继续关联
        ui->textEdit->setText(in.readAll());    //read all file to stream
        file->close();
        delete file;
    }
    else
    {
        QMessageBox::information(this,"Error message","File open error"+file->errorString());

    }
    return;
}

void MainWindow::saveFileSlot()
{
    if(saveFileName.isEmpty())
    {
        this->saveAsFileSlot();
    }
    else
    {
        QFile *file = new QFile;
        file->setFileName(saveFileName);
        this->setWindowTitle(saveFileName);
        bool ok = file->open(QIODevice::WriteOnly);
        if(ok)
        {
            QTextStream out(file);
            out<<ui->textEdit->toPlainText();
        }
        file->close();
        delete file;
    }

}

void MainWindow::saveAsFileSlot()
{
    saveFileName = QFileDialog::getSaveFileName(this,"Save file",QDir::currentPath());
    if(saveFileName.isNull())
     {
         QMessageBox::information(this,"Filename not exist","File save error");
     }
    QFile *file = new QFile;
    file->setFileName(saveFileName);
    this->setWindowTitle(saveFileName);
    bool ok = file->open(QIODevice::WriteOnly);
    if(ok)
    {
        QTextStream out(file);   //将文件与stream关联
        out<<ui->textEdit->toPlainText();  //取出textEdit中的纯文本
    }
    file->close();
    delete file;
}

void MainWindow::exitFileSlot()
{
    close();
}

void MainWindow::undoEditSlot()
{
    ui->textEdit->undo();
}

void MainWindow::cutEditSlot()
{
    ui->textEdit->cut();
}

void MainWindow::copyEditSlot()
{
    ui->textEdit->copy();
}

void MainWindow::pasteEditSlot()
{
    ui->textEdit->paste();
}

void MainWindow::deleteEditSlot()
{
    ui->textEdit->deleteLater();
}

void MainWindow::setFontSlot()
{
    //bool ok;
    //QFont font = QFontDialog::getFont(&ok, QFont("Helvetica [Cronyx]", 10), this);
    bool ok;
    QFont font = QFontDialog::getFont(&ok, this);
    if (ok)
    {
        ui->textEdit->setFont(font);
    }
    else
    {
        QMessageBox::information(this,"Error message","Font not set!");
        return;
    }
}

void MainWindow::setColorSlot()
{
    //QColor color = QColorDialog::getColor(&ok,this);
    QColor color = QColorDialog::getColor(Qt::blue,this);
    if(color.isValid())
    {
        ui->textEdit->setTextColor(color);
    }
    else
    {
        QMessageBox::warning(this,"Error","Color not select");
        //QMessageBox::information(this,"Error message","Color not select!");
        return;
    }
}

void MainWindow::setDateTimeSlot()
{
    QDateTime currenDateTime = QDateTime::currentDateTime();
    ui->textEdit->append(currenDateTime.toString("yyyy/MM/dd HH:mm"));
}

void MainWindow::aboutWebSiteSlot()
{
    const QUrl regUrl (QLatin1String("http://www.csu.edu.cn"));
    QDesktopServices::openUrl(QUrl(regUrl));
}























