/********************************************************************************
** Form generated from reading UI file 'widget.ui'
**
** Created: Wed Jul 11 11:03:17 2018
**      by: Qt User Interface Compiler version 4.7.3
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_WIDGET_H
#define UI_WIDGET_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QSpacerItem>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_Widget
{
public:
    QWidget *layoutWidget;
    QHBoxLayout *horizontalLayout;
    QSpacerItem *horizontalSpacer;
    QPushButton *submitButton;
    QPushButton *cancelButton;
    QPushButton *browserButton;
    QWidget *layoutWidget1;
    QHBoxLayout *horizontalLayout_2;
    QLabel *cmdLabel;
    QLineEdit *cmdLineEdit;
    QWidget *layoutWidget2;
    QVBoxLayout *verticalLayout;
    QLabel *infoLabel;

    void setupUi(QWidget *Widget)
    {
        if (Widget->objectName().isEmpty())
            Widget->setObjectName(QString::fromUtf8("Widget"));
        Widget->resize(400, 180);
        layoutWidget = new QWidget(Widget);
        layoutWidget->setObjectName(QString::fromUtf8("layoutWidget"));
        layoutWidget->setGeometry(QRect(20, 120, 378, 25));
        horizontalLayout = new QHBoxLayout(layoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        submitButton = new QPushButton(layoutWidget);
        submitButton->setObjectName(QString::fromUtf8("submitButton"));

        horizontalLayout->addWidget(submitButton);

        cancelButton = new QPushButton(layoutWidget);
        cancelButton->setObjectName(QString::fromUtf8("cancelButton"));

        horizontalLayout->addWidget(cancelButton);

        browserButton = new QPushButton(layoutWidget);
        browserButton->setObjectName(QString::fromUtf8("browserButton"));

        horizontalLayout->addWidget(browserButton);

        layoutWidget1 = new QWidget(Widget);
        layoutWidget1->setObjectName(QString::fromUtf8("layoutWidget1"));
        layoutWidget1->setGeometry(QRect(20, 80, 378, 35));
        horizontalLayout_2 = new QHBoxLayout(layoutWidget1);
        horizontalLayout_2->setSpacing(6);
        horizontalLayout_2->setContentsMargins(11, 11, 11, 11);
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalLayout_2->setContentsMargins(0, 0, 0, 0);
        cmdLabel = new QLabel(layoutWidget1);
        cmdLabel->setObjectName(QString::fromUtf8("cmdLabel"));

        horizontalLayout_2->addWidget(cmdLabel);

        cmdLineEdit = new QLineEdit(layoutWidget1);
        cmdLineEdit->setObjectName(QString::fromUtf8("cmdLineEdit"));

        horizontalLayout_2->addWidget(cmdLineEdit);

        layoutWidget2 = new QWidget(Widget);
        layoutWidget2->setObjectName(QString::fromUtf8("layoutWidget2"));
        layoutWidget2->setGeometry(QRect(20, 10, 380, 79));
        verticalLayout = new QVBoxLayout(layoutWidget2);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        infoLabel = new QLabel(layoutWidget2);
        infoLabel->setObjectName(QString::fromUtf8("infoLabel"));

        verticalLayout->addWidget(infoLabel);


        retranslateUi(Widget);

        QMetaObject::connectSlotsByName(Widget);
    } // setupUi

    void retranslateUi(QWidget *Widget)
    {
        Widget->setWindowTitle(QApplication::translate("Widget", "Widget", 0, QApplication::UnicodeUTF8));
        submitButton->setText(QApplication::translate("Widget", "\347\241\256\345\256\232", 0, QApplication::UnicodeUTF8));
        cancelButton->setText(QApplication::translate("Widget", "\345\217\226\346\266\210", 0, QApplication::UnicodeUTF8));
        browserButton->setText(QApplication::translate("Widget", "\346\265\217\350\247\210", 0, QApplication::UnicodeUTF8));
        cmdLabel->setText(QApplication::translate("Widget", "\346\211\223\345\274\200(&O)", 0, QApplication::UnicodeUTF8));
        infoLabel->setText(QApplication::translate("Widget", "\344\270\272\346\202\250\346\211\223\345\274\200\347\250\213\345\272\217\343\200\201\346\226\207\344\273\266\345\244\271\343\200\201\346\226\207\346\241\243\346\210\226Internet\345\206\205\345\256\271\357\274\232", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class Widget: public Ui_Widget {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_WIDGET_H
