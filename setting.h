#ifndef SETTING_H
#define SETTING_H
#include <QWidget>
#include <QLabel>
#include <QGridLayout>

class setting:public QWidget
{
public:
    setting(QWidget * parent = nullptr);
    ~setting();
private:
    QWidget * widget;
    QGridLayout * layout;
    QLabel * label;
};

#endif // SETTING_H
