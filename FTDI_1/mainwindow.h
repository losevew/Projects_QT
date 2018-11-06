#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

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
    void on_PushButtonStart_clicked();

    void on_PushButtonStop_clicked();

    void on_CheckBoxTxD_clicked();

    void on_CheckBoxRTS_clicked();

    void on_CheckBoxDTR_clicked();



private:
    Ui::MainWindow *ui;

protected:
    void timerEvent(QTimerEvent *);

};



#endif // MAINWINDOW_H
