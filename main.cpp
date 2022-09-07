#include "mainwindow.h"
#include <QWidget>
#include <QListWidget>
#include <QSplitter>
#include <QLabel>
#include <QApplication>
int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QSplitter * splitter = new QSplitter(Qt::Horizontal,0);
    //splitter->setWindowFlag(Qt::FramelessWindowHint);
    splitter->setMinimumSize(580,180);
    splitter->setStyleSheet(""
                            "QStackedWidget{"
                            "border-image:url(E:/絵/ev011cl.png);"
                            "border-radius: 15px;"
                            "}"
                            "QListWidget{"
                            "border-image:url(E:/絵/QQ图片20220907142121.jpg);"
                            "border:1px solid gray;"
                            "color:black;"
                            "font-size:30px;"
                            "border-radius: 15px;"
                            "}"
                            //"QListWidget::item:hover"
                            "QListWidget::item:selected{"
                            "border:2px;"
                            "background:rgba(255,255,255,0.3);"
                            "padding:0px;"
                            "margin:2px;"
                            "color:orange;"
                            "font-size:50px"
                            "}"
                            "QListWidget::item{"
                            "padding-top:20px;"
                            "padding-bottom:20px;"
                            "}"
                            "QLabel{"
                            "font-size:20px;"
                            "color:black;"
                            "backdrop-filter: blur(15px);"
                            "border-radius: 15px;"
                            "padding: 40px 30px;"
                            "box-shadow: 0 0 10px #333;         /*盒子阴影*/"
                            "background:rgba(255,255,255,0.3);"
                            "}");
    //左边
    QListWidget * list = new QListWidget;
    splitter->addWidget(list);
    QListWidgetItem * lesson = new QListWidgetItem("课程表");
    list->addItem(lesson);
    lesson->setTextAlignment(Qt::AlignCenter);
    QListWidgetItem * setting = new QListWidgetItem("setting");
    list->addItem(setting);
    setting->setTextAlignment(Qt::AlignCenter);

    list->resize(100,100);
    list->setItemAlignment(Qt::AlignCenter);
    list->setIconSize(QSize(100,50));
    //右边
    //QLabel * label = new QLabel("test");
    //left_layout->addWidget(label,1,Qt::AlignCenter);
    MainWindow * main_item = new MainWindow(splitter);
//    splitter->addWidget(main_item);
    QObject::connect(list,SIGNAL(currentRowChanged(int)),main_item->stack, SLOT(setCurrentIndex(int)));
    splitter->show();
    return a.exec();
}
