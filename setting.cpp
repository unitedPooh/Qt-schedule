#include "setting.h"

setting::setting(QWidget * parent):QWidget(parent)
{
    widget = new QWidget(this);
    layout = new QGridLayout(widget);
    label = new QLabel("test");
    layout->addWidget(label,0,0);
}
setting::~setting(){}
