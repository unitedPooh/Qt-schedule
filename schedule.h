#ifndef SCHEDULE_H
#define SCHEDULE_H
#include <QGridLayout>
#include <QLabel>

class schedule:public QWidget
{
public:
    schedule(QWidget * parent = nullptr);
    ~schedule();
private:
    QGridLayout * layout;
    QLabel * lesson_1to2;
    QLabel * lesson_3to4;
    QLabel * lesson_5to6;
    QLabel * lesson_7to8;
    QLabel * lesson_9to10;
    QLabel * lunch;
    QLabel * dinner;
    QLabel * monday;
    QLabel * tuesday;
    QLabel * wednesday;
    QLabel * thursday;
    QLabel * friday;
    QLabel * saturday;
    QLabel * sunday;
};

#endif // SCHEDULE_H
