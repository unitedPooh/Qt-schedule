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
    splitter->setStyleSheet("*{"
                            "border-image:url(E:/絵/ミク.png);"
                            "font-size:20}");
    QListWidget * list = new QListWidget;
    //左边
    splitter->addWidget(list);
    list->addItem("课程表");
    list->addItem("setting");
    //右边
    //QLabel * label = new QLabel("test");
    //left_layout->addWidget(label,1,Qt::AlignCenter);
    MainWindow * main_item = new MainWindow(splitter);
//    splitter->addWidget(main_item);
    QObject::connect(list,SIGNAL(currentRowChanged(int)),main_item->stack, SLOT(setCurrentIndex(int)));
    splitter->show();
    return a.exec();
}
