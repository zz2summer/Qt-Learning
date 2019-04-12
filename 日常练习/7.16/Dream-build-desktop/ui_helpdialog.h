/********************************************************************************
** Form generated from reading UI file 'helpdialog.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELPDIALOG_H
#define UI_HELPDIALOG_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QTextEdit>

QT_BEGIN_NAMESPACE

class Ui_helpDialog
{
public:
    QTextEdit *textEdit;

    void setupUi(QDialog *helpDialog)
    {
        if (helpDialog->objectName().isEmpty())
            helpDialog->setObjectName(QString::fromUtf8("helpDialog"));
        helpDialog->resize(551, 355);
        textEdit = new QTextEdit(helpDialog);
        textEdit->setObjectName(QString::fromUtf8("textEdit"));
        textEdit->setGeometry(QRect(40, 30, 421, 271));

        retranslateUi(helpDialog);

        QMetaObject::connectSlotsByName(helpDialog);
    } // setupUi

    void retranslateUi(QDialog *helpDialog)
    {
        helpDialog->setWindowTitle(QApplication::translate("helpDialog", "Dialog", 0, QApplication::UnicodeUTF8));
        textEdit->setHtml(QApplication::translate("helpDialog", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'SimSun'; font-size:9pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:12pt;\">\345\270\256\345\212\251</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">1.\345\246\202\344\275\225\345\210\207\346\215\242\346\255\214\346\233\262\357\274\237</span></p>\n"
"<p style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:10pt;\">2.\345\246\202\344\275\225\346\211\223\345\274\200\346\255\214\350\257\215"
                        "\357\274\237</span></p></body></html>", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class helpDialog: public Ui_helpDialog {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELPDIALOG_H
