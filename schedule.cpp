#include "schedule.h"

schedule::schedule(QWidget * parent):QWidget(parent)
{
    layout = new QGridLayout(this);
    lesson_1to2 = new QLabel("一二节课");
    lesson_3to4 = new QLabel("三四节课");
    lesson_5to6 = new QLabel("五六节课");
    lesson_7to8 = new QLabel("七八节课");
    lesson_9to10 = new QLabel("九十节课");
    lunch = new QLabel("午餐");
    dinner = new QLabel("晚餐");
    monday = new QLabel("星期一");
    tuesday = new QLabel("星期二");
    wednesday = new QLabel("星期三");
    thursday = new QLabel("星期四");
    friday = new QLabel("星期五");
    saturday = new QLabel("星期六");
    sunday =  new QLabel("星期天");
    layout->addWidget(lesson_1to2,1,0,Qt::AlignCenter);
    layout->addWidget(lesson_3to4,2,0,Qt::AlignCenter);
    layout->addWidget(lunch,3,0,Qt::AlignCenter);
    layout->addWidget(lesson_5to6,4,0,Qt::AlignCenter);
    layout->addWidget(lesson_7to8,5,0,Qt::AlignCenter);
    layout->addWidget(dinner,6,0,Qt::AlignCenter);
    layout->addWidget(lesson_9to10,7,0,Qt::AlignCenter);
    layout->addWidget(monday,0,1,Qt::AlignCenter);
    layout->addWidget(tuesday,0,2,Qt::AlignCenter);
    layout->addWidget(wednesday,0,3,Qt::AlignCenter);
    layout->addWidget(thursday,0,4,Qt::AlignCenter);
    layout->addWidget(friday,0,5,Qt::AlignCenter);
    layout->addWidget(saturday,0,6,Qt::AlignCenter);
    layout->addWidget(sunday,0,7,Qt::AlignCenter);
    layout->setSpacing(10);
}
schedule::~schedule(){}
