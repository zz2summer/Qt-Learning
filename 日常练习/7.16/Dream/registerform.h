#ifndef REGISTERFORM_H
#define REGISTERFORM_H

#include <QWidget>

namespace Ui {
    class registerForm;
}

class registerForm : public QWidget
{
    Q_OBJECT

public:
    explicit registerForm(QWidget *parent = 0);
    ~registerForm();

private:
    Ui::registerForm *ui;
};

#endif // REGISTERFORM_H
