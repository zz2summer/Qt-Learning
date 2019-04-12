#include "registerform.h"
#include "ui_registerform.h"

registerForm::registerForm(QWidget *parent) :
    QWidget(parent),
    ui(new Ui::registerForm)
{
    ui->setupUi(this);
    this->setFixedSize(268,155);
}

registerForm::~registerForm()
{
    delete ui;
}
