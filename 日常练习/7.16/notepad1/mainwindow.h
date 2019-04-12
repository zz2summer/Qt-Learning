#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QtDebug>
#include <QMessageBox>
#include <QFile>
#include <QFileDialog>
#include <QDir>
#include <QTextStream>  //ÎÄ±¾Á÷

#include <QFont>
#include <QFontDialog>
#include <QColor>
#include <QColorDialog>
#include <QDateTime>
#include <QTime>
#include <Qt>
#include <QUrl>
#include <QDesktopServices>

#include <QTextCodec>
#include <about.h>

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
    QString saveFileName;

private slots:
    void newFileSlot();
    void openFileSlot();
    void saveFileSlot();
    void saveAsFileSlot();
    void exitFileSlot();

    void undoEditSlot();
    void cutEditSlot();
    void copyEditSlot();
    void pasteEditSlot();
    void deleteEditSlot();
    void setDateTimeSlot();

    void setFontSlot();
    void setColorSlot();

    void aboutWebSiteSlot();
//    void aboudMeSlot();

    void on_aboutMeAction_triggered();
};

#endif // MAINWINDOW_H
