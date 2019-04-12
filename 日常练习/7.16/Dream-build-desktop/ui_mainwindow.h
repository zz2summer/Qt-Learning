/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFrame>
#include <QtGui/QGridLayout>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QSlider>
#include <QtGui/QSpacerItem>
#include <QtGui/QStatusBar>
#include <QtGui/QTextEdit>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include <QtWebKit/QWebView>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QFrame *frame;
    QGridLayout *gridLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *registerExitButton;
    QSpacerItem *horizontalSpacer;
    QPushButton *setButton;
    QPushButton *aboutButton;
    QPushButton *helpButton;
    QPushButton *changeAppperaButton;
    QTextEdit *textEdit_2;
    QVBoxLayout *verticalLayout_5;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *pushButton_9;
    QLineEdit *lineEdit;
    QPushButton *pushButton_8;
    QPushButton *pushButton_7;
    QPushButton *pushButton_6;
    QWebView *webView;
    QVBoxLayout *verticalLayout_4;
    QTextEdit *textEdit_3;
    QSpacerItem *horizontalSpacer_6;
    QHBoxLayout *horizontalLayout_3;
    QVBoxLayout *verticalLayout_2;
    QSlider *horizontalSlider_2;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_3;
    QSpacerItem *horizontalSpacer_2;
    QSpacerItem *horizontalSpacer_5;
    QSpacerItem *horizontalSpacer_3;
    QVBoxLayout *verticalLayout;
    QComboBox *comboBox;
    QPushButton *pushButton_5;
    QPushButton *pushButton_4;
    QSpacerItem *verticalSpacer;
    QSlider *verticalSlider;
    QSpacerItem *horizontalSpacer_4;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(839, 509);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        frame = new QFrame(centralWidget);
        frame->setObjectName(QString::fromUtf8("frame"));
        frame->setFrameShape(QFrame::StyledPanel);
        frame->setFrameShadow(QFrame::Raised);
        gridLayout = new QGridLayout(frame);
        gridLayout->setSpacing(6);
        gridLayout->setContentsMargins(11, 11, 11, 11);
        gridLayout->setObjectName(QString::fromUtf8("gridLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        registerExitButton = new QPushButton(frame);
        registerExitButton->setObjectName(QString::fromUtf8("registerExitButton"));

        horizontalLayout->addWidget(registerExitButton);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        setButton = new QPushButton(frame);
        setButton->setObjectName(QString::fromUtf8("setButton"));

        horizontalLayout->addWidget(setButton);

        aboutButton = new QPushButton(frame);
        aboutButton->setObjectName(QString::fromUtf8("aboutButton"));

        horizontalLayout->addWidget(aboutButton);

        helpButton = new QPushButton(frame);
        helpButton->setObjectName(QString::fromUtf8("helpButton"));

        horizontalLayout->addWidget(helpButton);

        changeAppperaButton = new QPushButton(frame);
        changeAppperaButton->setObjectName(QString::fromUtf8("changeAppperaButton"));

        horizontalLayout->addWidget(changeAppperaButton);


        gridLayout->addLayout(horizontalLayout, 0, 0, 1, 2);

        textEdit_2 = new QTextEdit(frame);
        textEdit_2->setObjectName(QString::fromUtf8("textEdit_2"));

        gridLayout->addWidget(textEdit_2, 1, 0, 1, 1);

        verticalLayout_5 = new QVBoxLayout();
        verticalLayout_5->setSpacing(6);
        verticalLayout_5->setObjectName(QString::fromUtf8("verticalLayout_5"));
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setSpacing(6);
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        pushButton_9 = new QPushButton(frame);
        pushButton_9->setObjectName(QString::fromUtf8("pushButton_9"));

        horizontalLayout_4->addWidget(pushButton_9);

        lineEdit = new QLineEdit(frame);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));

        horizontalLayout_4->addWidget(lineEdit);

        pushButton_8 = new QPushButton(frame);
        pushButton_8->setObjectName(QString::fromUtf8("pushButton_8"));

        horizontalLayout_4->addWidget(pushButton_8);

        pushButton_7 = new QPushButton(frame);
        pushButton_7->setObjectName(QString::fromUtf8("pushButton_7"));

        horizontalLayout_4->addWidget(pushButton_7);

        pushButton_6 = new QPushButton(frame);
        pushButton_6->setObjectName(QString::fromUtf8("pushButton_6"));

        horizontalLayout_4->addWidget(pushButton_6);


        verticalLayout_5->addLayout(horizontalLayout_4);

        webView = new QWebView(frame);
        webView->setObjectName(QString::fromUtf8("webView"));
        webView->setUrl(QUrl(QString::fromUtf8("about:blank")));

        verticalLayout_5->addWidget(webView);


        gridLayout->addLayout(verticalLayout_5, 1, 1, 1, 1);

        verticalLayout_4 = new QVBoxLayout();
        verticalLayout_4->setSpacing(6);
        verticalLayout_4->setObjectName(QString::fromUtf8("verticalLayout_4"));
        textEdit_3 = new QTextEdit(frame);
        textEdit_3->setObjectName(QString::fromUtf8("textEdit_3"));

        verticalLayout_4->addWidget(textEdit_3);

        horizontalSpacer_6 = new QSpacerItem(668, 13, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_4->addItem(horizontalSpacer_6);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setSpacing(6);
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        horizontalSlider_2 = new QSlider(frame);
        horizontalSlider_2->setObjectName(QString::fromUtf8("horizontalSlider_2"));
        horizontalSlider_2->setOrientation(Qt::Horizontal);

        verticalLayout_2->addWidget(horizontalSlider_2);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        pushButton = new QPushButton(frame);
        pushButton->setObjectName(QString::fromUtf8("pushButton"));

        horizontalLayout_2->addWidget(pushButton);

        pushButton_2 = new QPushButton(frame);
        pushButton_2->setObjectName(QString::fromUtf8("pushButton_2"));

        horizontalLayout_2->addWidget(pushButton_2);

        pushButton_3 = new QPushButton(frame);
        pushButton_3->setObjectName(QString::fromUtf8("pushButton_3"));

        horizontalLayout_2->addWidget(pushButton_3);

        horizontalSpacer_2 = new QSpacerItem(198, 18, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer_2);


        verticalLayout_2->addLayout(horizontalLayout_2);

        horizontalSpacer_5 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        verticalLayout_2->addItem(horizontalSpacer_5);


        horizontalLayout_3->addLayout(verticalLayout_2);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_3);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        comboBox = new QComboBox(frame);
        comboBox->setObjectName(QString::fromUtf8("comboBox"));

        verticalLayout->addWidget(comboBox);

        pushButton_5 = new QPushButton(frame);
        pushButton_5->setObjectName(QString::fromUtf8("pushButton_5"));

        verticalLayout->addWidget(pushButton_5);

        pushButton_4 = new QPushButton(frame);
        pushButton_4->setObjectName(QString::fromUtf8("pushButton_4"));

        verticalLayout->addWidget(pushButton_4);


        horizontalLayout_3->addLayout(verticalLayout);

        verticalSpacer = new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding);

        horizontalLayout_3->addItem(verticalSpacer);

        verticalSlider = new QSlider(frame);
        verticalSlider->setObjectName(QString::fromUtf8("verticalSlider"));
        verticalSlider->setOrientation(Qt::Vertical);

        horizontalLayout_3->addWidget(verticalSlider);

        horizontalSpacer_4 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_4);


        verticalLayout_4->addLayout(horizontalLayout_3);


        gridLayout->addLayout(verticalLayout_4, 2, 0, 1, 2);

        textEdit_2->raise();
        textEdit_2->raise();
        webView->raise();
        pushButton_6->raise();
        lineEdit->raise();
        pushButton_7->raise();
        pushButton_8->raise();
        pushButton_9->raise();
        textEdit_2->raise();

        verticalLayout_3->addWidget(frame);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 839, 23));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0, QApplication::UnicodeUTF8));
        registerExitButton->setText(QApplication::translate("MainWindow", "\347\231\273\345\275\225/\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
        setButton->setText(QApplication::translate("MainWindow", "\350\256\276\347\275\256", 0, QApplication::UnicodeUTF8));
        aboutButton->setText(QApplication::translate("MainWindow", "\345\205\263\344\272\216", 0, QApplication::UnicodeUTF8));
        helpButton->setText(QApplication::translate("MainWindow", "\345\270\256\345\212\251", 0, QApplication::UnicodeUTF8));
        changeAppperaButton->setText(QApplication::translate("MainWindow", "\345\210\207\346\215\242\347\232\256\350\202\244", 0, QApplication::UnicodeUTF8));
        pushButton_9->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_8->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_7->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton_6->setText(QApplication::translate("MainWindow", "PushButton", 0, QApplication::UnicodeUTF8));
        pushButton->setText(QApplication::translate("MainWindow", "\344\270\212\344\270\200\346\233\262", 0, QApplication::UnicodeUTF8));
        pushButton_2->setText(QApplication::translate("MainWindow", "\346\222\255\346\224\276/\346\232\202\345\201\234", 0, QApplication::UnicodeUTF8));
        pushButton_3->setText(QApplication::translate("MainWindow", "\344\270\213\344\270\200\346\233\262", 0, QApplication::UnicodeUTF8));
        comboBox->clear();
        comboBox->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "\345\215\225\346\233\262\345\276\252\347\216\257", 0, QApplication::UnicodeUTF8)
         << QApplication::translate("MainWindow", "\345\210\227\350\241\250\346\222\255\346\224\276", 0, QApplication::UnicodeUTF8)
        );
        pushButton_5->setText(QApplication::translate("MainWindow", "\345\226\234\347\210\261", 0, QApplication::UnicodeUTF8));
        pushButton_4->setText(QApplication::translate("MainWindow", "\346\255\214\350\257\215", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
