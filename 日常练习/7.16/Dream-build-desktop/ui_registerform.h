/********************************************************************************
** Form generated from reading UI file 'registerform.ui'
**
** Created by: Qt User Interface Compiler version 4.8.7
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_REGISTERFORM_H
#define UI_REGISTERFORM_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_registerForm
{
public:
    QVBoxLayout *verticalLayout_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout;
    QPushButton *nameButton;
    QLineEdit *nameLineEdit;
    QHBoxLayout *horizontalLayout_2;
    QPushButton *accountButton;
    QLineEdit *accoutLineEdit;
    QHBoxLayout *horizontalLayout_3;
    QPushButton *passwordButton;
    QLineEdit *passwordLineEdit;
    QHBoxLayout *horizontalLayout_4;
    QPushButton *registerButton;
    QPushButton *exitButton;

    void setupUi(QWidget *registerForm)
    {
        if (registerForm->objectName().isEmpty())
            registerForm->setObjectName(QString::fromUtf8("registerForm"));
        registerForm->resize(268, 155);
        verticalLayout_2 = new QVBoxLayout(registerForm);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout = new QVBoxLayout();
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        nameButton = new QPushButton(registerForm);
        nameButton->setObjectName(QString::fromUtf8("nameButton"));

        horizontalLayout->addWidget(nameButton);

        nameLineEdit = new QLineEdit(registerForm);
        nameLineEdit->setObjectName(QString::fromUtf8("nameLineEdit"));

        horizontalLayout->addWidget(nameLineEdit);


        verticalLayout->addLayout(horizontalLayout);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        accountButton = new QPushButton(registerForm);
        accountButton->setObjectName(QString::fromUtf8("accountButton"));

        horizontalLayout_2->addWidget(accountButton);

        accoutLineEdit = new QLineEdit(registerForm);
        accoutLineEdit->setObjectName(QString::fromUtf8("accoutLineEdit"));

        horizontalLayout_2->addWidget(accoutLineEdit);


        verticalLayout->addLayout(horizontalLayout_2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        passwordButton = new QPushButton(registerForm);
        passwordButton->setObjectName(QString::fromUtf8("passwordButton"));

        horizontalLayout_3->addWidget(passwordButton);

        passwordLineEdit = new QLineEdit(registerForm);
        passwordLineEdit->setObjectName(QString::fromUtf8("passwordLineEdit"));

        horizontalLayout_3->addWidget(passwordLineEdit);


        verticalLayout->addLayout(horizontalLayout_3);

        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        registerButton = new QPushButton(registerForm);
        registerButton->setObjectName(QString::fromUtf8("registerButton"));

        horizontalLayout_4->addWidget(registerButton);

        exitButton = new QPushButton(registerForm);
        exitButton->setObjectName(QString::fromUtf8("exitButton"));

        horizontalLayout_4->addWidget(exitButton);


        verticalLayout->addLayout(horizontalLayout_4);


        verticalLayout_2->addLayout(verticalLayout);


        retranslateUi(registerForm);

        QMetaObject::connectSlotsByName(registerForm);
    } // setupUi

    void retranslateUi(QWidget *registerForm)
    {
        registerForm->setWindowTitle(QApplication::translate("registerForm", "Form", 0, QApplication::UnicodeUTF8));
        nameButton->setText(QApplication::translate("registerForm", "\347\224\250\346\210\267\345\220\215", 0, QApplication::UnicodeUTF8));
        accountButton->setText(QApplication::translate("registerForm", "\350\264\246\345\217\267", 0, QApplication::UnicodeUTF8));
        passwordButton->setText(QApplication::translate("registerForm", "\345\257\206\347\240\201", 0, QApplication::UnicodeUTF8));
        registerButton->setText(QApplication::translate("registerForm", "\347\231\273\345\275\225", 0, QApplication::UnicodeUTF8));
        exitButton->setText(QApplication::translate("registerForm", "\351\200\200\345\207\272", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class registerForm: public Ui_registerForm {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_REGISTERFORM_H
