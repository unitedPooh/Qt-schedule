#include "mainwindow.h"
#include "./ui_mainwindow.h"
#include "schedule.h"
#include "setting.h"
MainWindow::MainWindow(QWidget *parent)
    : QWidget(parent)
//    , ui(new Ui::MainWindow)
{
    stack = new QStackedWidget(this);
    stack->setFrameStyle(QFrame::Panel | QFrame::Raised);
    schedule * sche = new schedule;
    setting * set = new setting;
    stack->addWidget(sche);
    stack->addWidget(set);
    QGridLayout * widget = new QGridLayout(this);
    widget->addWidget(stack);
}

MainWindow::~MainWindow()
{
//    delete ui;
}

