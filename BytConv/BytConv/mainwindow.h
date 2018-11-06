#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#define SDA  0
#define SCL  1

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
    void on_pushButtonConvert_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
