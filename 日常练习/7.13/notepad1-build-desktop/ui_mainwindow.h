/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu Jul 12 16:20:05 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QMenu>
#include <QtGui/QMenuBar>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QAction *newAction;
    QAction *openAction;
    QAction *saveAction;
    QAction *saveAsAction;
    QAction *action_5;
    QAction *printAction;
    QAction *exitAction;
    QAction *undoAction;
    QAction *cutAction;
    QAction *copyAction;
    QAction *pasteAction;
    QAction *deleteAction;
    QAction *action_F;
    QAction *action_N;
    QAction *action_R;
    QAction *action_G;
    QAction *action_A;
    QAction *action_D;
    QAction *action_W;
    QAction *action_F_2;
    QAction *action_S;
    QAction *action_H;
    QAction *action_A_2;
    QWidget *centralWidget;
    QTextEdit *textEdit;
    QMenuBar *menuBar;
    QMenu *menu_F;
    QMenu *menu_E;
    QMenu *menu_O;
    QMenu *menu_V;
    QMenu *menu_H;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(615, 452);
        newAction = new QAction(MainWindow);
        newAction->setObjectName(QString::fromUtf8("newAction"));
        openAction = new QAction(MainWindow);
        openAction->setObjectName(QString::fromUtf8("openAction"));
        saveAction = new QAction(MainWindow);
        saveAction->setObjectName(QString::fromUtf8("saveAction"));
        saveAsAction = new QAction(MainWindow);
        saveAsAction->setObjectName(QString::fromUtf8("saveAsAction"));
        action_5 = new QAction(MainWindow);
        action_5->setObjectName(QString::fromUtf8("action_5"));
        printAction = new QAction(MainWindow);
        printAction->setObjectName(QString::fromUtf8("printAction"));
        exitAction = new QAction(MainWindow);
        exitAction->setObjectName(QString::fromUtf8("exitAction"));
        undoAction = new QAction(MainWindow);
        undoAction->setObjectName(QString::fromUtf8("undoAction"));
        cutAction = new QAction(MainWindow);
        cutAction->setObjectName(QString::fromUtf8("cutAction"));
        copyAction = new QAction(MainWindow);
        copyAction->setObjectName(QString::fromUtf8("copyAction"));
        pasteAction = new QAction(MainWindow);
        pasteAction->setObjectName(QString::fromUtf8("pasteAction"));
        deleteAction = new QAction(MainWindow);
        deleteAction->setObjectName(QString::fromUtf8("deleteAction"));
        action_F = new QAction(MainWindow);
        action_F->setObjectName(QString::fromUtf8("action_F"));
        action_N = new QAction(MainWindow);
        action_N->setObjectName(QString::fromUtf8("action_N"));
        action_R = new QAction(MainWindow);
        action_R->setObjectName(QString::fromUtf8("action_R"));
        action_G = new QAction(MainWindow);
        action_G->setObjectName(QString::fromUtf8("action_G"));
        action_A = new QAction(MainWindow);
        action_A->setObjectName(QString::fromUtf8("action_A"));
        action_D = new QAction(MainWindow);
        action_D->setObjectName(QString::fromUtf8("action_D"));
        action_W = new QAction(MainWindow);
        action_W->setObjectName(QString::fromUtf8("action_W"));
        action_F_2 = new QAction(MainWindow);
        action_F_2->setObjectName(QString::fromUtf8("action_F_2"));
        action_S = new QAction(MainWindow);
        action_S->setObjectName(QString::fromUtf8("action_S"));
        action_H = new QAction(MainWindow);
        action_H->setObjectName(QString::fromUtf8("action_H"));
        action_A_2 = new QAction(MainWindow);
        action_A_2->setObjectName(QString::fromUtf8("action_A_2"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        textEdit = new QTextEdit(centralWidget);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(3, 0, 611, 391));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 615, 23));
        menu_F = new QMenu(menuBar);
        menu_F->setObjectName(QString::fromUtf8("menu_F"));
        menu_E = new QMenu(menuBar);
        menu_E->setObjectName(QString::fromUtf8("menu_E"));
        menu_O = new QMenu(menuBar);
        menu_O->setObjectName(QString::fromUtf8("menu_O"));
        menu_V = new QMenu(menuBar);
        menu_V->setObjectName(QString::fromUtf8("menu_V"));
        menu_H = new QMenu(menuBar);
        menu_H->setObjectName(QString::fromUtf8("menu_H"));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        menuBar->addAction(menu_F->menuAction());
        menuBar->addAction(menu_E->menuAction());
        menuBar->addAction(menu_O->menuAction());
        menuBar->addAction(menu_V->menuAction());
        menuBar->addAction(menu_H->menuAction());
        menu_F->addAction(newAction);
        menu_F->addAction(openAction);
        menu_F->addAction(saveAction);
        menu_F->addAction(saveAsAction);
        menu_F->addAction(action_5);
        menu_F->addAction(printAction);
        menu_F->addAction(exitAction);
        menu_E->addAction(undoAction);
        menu_E->addAction(cutAction);
        menu_E->addAction(copyAction);
        menu_E->addAction(pasteAction);
        menu_E->addAction(deleteAction);
        menu_E->addAction(action_F);
        menu_E->addAction(action_N);
        menu_E->addAction(action_R);
        menu_E->addAction(action_G);
        menu_E->addAction(action_A);
        menu_E->addAction(action_D);
        menu_O->addAction(action_W);
        menu_O->addAction(action_F_2);
        menu_V->addAction(action_S);
        menu_H->addAction(action_H);
        menu_H->addAction(action_A_2);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        newAction->setText(QApplication::translate("MainWindow", "\346\226\260\345\273\272\357\274\210N\357\274\211", 0, QApplication::UnicodeUTF8));
        openAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\274\200\357\274\210O\357\274\211\342\200\246", 0, QApplication::UnicodeUTF8));
        saveAction->setText(QApplication::translate("MainWindow", "\344\277\235\345\255\230\357\274\210S\357\274\211", 0, QApplication::UnicodeUTF8));
        saveAsAction->setText(QApplication::translate("MainWindow", "\345\217\246\345\255\230\344\270\272\357\274\210A\357\274\211\342\200\246", 0, QApplication::UnicodeUTF8));
        action_5->setText(QApplication::translate("MainWindow", "\351\241\265\351\235\242\350\256\276\347\275\256\357\274\210U\357\274\211\342\200\246", 0, QApplication::UnicodeUTF8));
        printAction->setText(QApplication::translate("MainWindow", "\346\211\223\345\215\260\357\274\210P\357\274\211\342\200\246", 0, QApplication::UnicodeUTF8));
        exitAction->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272\357\274\210X\357\274\211", 0, QApplication::UnicodeUTF8));
        undoAction->setText(QApplication::translate("MainWindow", "\346\222\244\351\224\200\357\274\210U\357\274\211", 0, QApplication::UnicodeUTF8));
        cutAction->setText(QApplication::translate("MainWindow", "\345\211\252\345\210\207\357\274\210T\357\274\211", 0, QApplication::UnicodeUTF8));
        copyAction->setText(QApplication::translate("MainWindow", "\345\244\215\345\210\266\357\274\210C\357\274\211", 0, QApplication::UnicodeUTF8));
        pasteAction->setText(QApplication::translate("MainWindow", "\347\262\230\350\264\264\357\274\210P\357\274\211", 0, QApplication::UnicodeUTF8));
        deleteAction->setText(QApplication::translate("MainWindow", "\345\210\240\351\231\244\357\274\210L\357\274\211", 0, QApplication::UnicodeUTF8));
        action_F->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276\357\274\210F\357\274\211\342\200\246", 0, QApplication::UnicodeUTF8));
        action_N->setText(QApplication::translate("MainWindow", "\346\237\245\346\211\276\344\270\213\344\270\200\344\270\252\357\274\210N\357\274\211", 0, QApplication::UnicodeUTF8));
        action_R->setText(QApplication::translate("MainWindow", "\346\233\277\346\215\242\357\274\210R\357\274\211\342\200\246", 0, QApplication::UnicodeUTF8));
        action_G->setText(QApplication::translate("MainWindow", "\350\275\254\345\210\260\357\274\210G\357\274\211\342\200\246", 0, QApplication::UnicodeUTF8));
        action_A->setText(QApplication::translate("MainWindow", "\345\205\250\351\200\211\357\274\210A\357\274\211", 0, QApplication::UnicodeUTF8));
        action_D->setText(QApplication::translate("MainWindow", "\346\227\266\351\227\264/\346\227\245\346\234\237\357\274\210D\357\274\211", 0, QApplication::UnicodeUTF8));
        action_W->setText(QApplication::translate("MainWindow", "\342\210\232\350\207\252\345\212\250\346\215\242\350\241\214\357\274\210W\357\274\211", 0, QApplication::UnicodeUTF8));
        action_F_2->setText(QApplication::translate("MainWindow", "\345\255\227\344\275\223\357\274\210F\357\274\211\342\200\246", 0, QApplication::UnicodeUTF8));
        action_S->setText(QApplication::translate("MainWindow", "\347\212\266\346\200\201\346\240\217\357\274\210S\357\274\211", 0, QApplication::UnicodeUTF8));
        action_H->setText(QApplication::translate("MainWindow", "\346\237\245\347\234\213\345\270\256\345\212\251\357\274\210H\357\274\211", 0, QApplication::UnicodeUTF8));
        action_A_2->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216\350\256\260\344\272\213\346\234\254\357\274\210A\357\274\211", 0, QApplication::UnicodeUTF8));
        menu_F->setTitle(QApplication::translate("MainWindow", "\346\226\207\344\273\266\357\274\210F\357\274\211", 0, QApplication::UnicodeUTF8));
        menu_E->setTitle(QApplication::translate("MainWindow", "\347\274\226\350\276\221\357\274\210E\357\274\211", 0, QApplication::UnicodeUTF8));
        menu_O->setTitle(QApplication::translate("MainWindow", "\346\240\274\345\274\217\357\274\210O\357\274\211", 0, QApplication::UnicodeUTF8));
        menu_V->setTitle(QApplication::translate("MainWindow", "\346\237\245\347\234\213\357\274\210V\357\274\211", 0, QApplication::UnicodeUTF8));
        menu_H->setTitle(QApplication::translate("MainWindow", "\345\270\256\345\212\251\357\274\210H\357\274\211", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
