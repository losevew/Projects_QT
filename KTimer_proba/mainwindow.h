#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#include "KTimer.h"
#include "KMyClass.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void slotStart(void);
    void slotPause(void);

private:
    Ui::MainWindow *ui;

};

#endif // MAINWINDOW_H
