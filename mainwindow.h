#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QMainWindow>
#include <QStackedWidget>
//QT_BEGIN_NAMESPACE
//namespace Ui { class MainWindow; }
//QT_END_NAMESPACE

class MainWindow : public QWidget
{
    Q_OBJECT
public:
    MainWindow(QWidget * parent = nullptr);
    ~MainWindow();
    QStackedWidget * stack;
private:
//    Ui::MainWindow *ui;
};
#endif // MAINWINDOW_H
