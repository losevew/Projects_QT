#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>

#define SDA 0 // D0 - Вывод данных
#define SCL 1 // D1 - Вывод тактовых импульсов

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
    void on_pushButtonConnect_clicked();

    void on_pushButtonDisconnect_clicked();

    void on_pushButtonSend_clicked();

    void on_comboBoxBaudRate_currentIndexChanged(const QString &arg1);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
