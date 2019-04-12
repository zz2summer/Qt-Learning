//#pragma execution_character_set("utf-8")   //显示中文
#include <QApplication>
#include <QWidget>
#include <QLabel>
#include <QPushButton>
#include <QLineEdit>
#include <QCheckBox>
#include <QLineEdit>
#include <QHBoxLayout>
#include <QVBoxLayout>
#include <QComboBox>
//#include <QListView>

int main(int argc, char *argv[])
{
    QApplication app(argc, argv);

    //第一行窗口说明
    QLabel *useIntroduction = new QLabel;
    useIntroduction->setText("Please enter the program name");
    //第一行布局
    QHBoxLayout *useLayout = new QHBoxLayout;  
    useLayout->addWidget(useIntroduction); 

    //第二行
    QLabel *keyWord = new QLabel;
    keyWord->setText("Open");
    QLineEdit *blank = new QLineEdit;
    QComboBox *option = new QComboBox();
    //option->setStyleSheet("QComboBox{border:1px solid gray;}"
    //"QComboBox QAbstractItemView::item{height:20px;}"//下拉高度
    //"QComboBox::down-arrow{image:url(:/icon/arrowdown);}"//下拉箭头
    //"QComboBox::drop-down{border:0px;}"); 下拉按钮
    option->addItem(QWidget::tr(" "));
    option->addItem(QWidget::tr(" "));
    option->addItem(QWidget::tr(" "));

    //第二行布局
    QHBoxLayout *cmdLayout = new QHBoxLayout;
    cmdLayout->addWidget(keyWord);
    cmdLayout->addWidget(blank);
    cmdLayout->addWidget(option);

    //最后一行三个按钮
    QPushButton *submitButton = new QPushButton;
    QPushButton *cancelButton = new QPushButton;
    QPushButton *browserButton = new QPushButton;
    submitButton->setText("Submit");
    cancelButton->setText("Cancel");
    browserButton->setText("Brower"); 
    //空白标签
    QLabel *blanks = new QLabel;
    //按钮水平布局
    QHBoxLayout *buttonLayout = new QHBoxLayout;
    buttonLayout->addWidget(blanks); 
    buttonLayout->addWidget(blanks);
    buttonLayout->addWidget(blanks);
    buttonLayout->addWidget(blanks);
    buttonLayout->addWidget(blanks);       
    buttonLayout->addWidget(submitButton);
    buttonLayout->addWidget(cancelButton);
    buttonLayout->addWidget(browserButton);

    //整体界面垂直布局 
    QVBoxLayout *mainLayout = new QVBoxLayout;
    mainLayout->addLayout(useLayout);
    mainLayout->addLayout(cmdLayout);
    mainLayout->addLayout(buttonLayout);

    //左上角标题
    QWidget *widgetName = new QWidget;
    widgetName->setWindowTitle("Running");
    widgetName->setLayout(mainLayout);

    widgetName->show();
 

    return app.exec();
}