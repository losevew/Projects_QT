#include "mainwindow.h"
#include "ui_mainwindow.h"
//#include <QTextCodec>

KTimer  myTimer;
int Mi_n = 0;
void  MiFnct( int p);
//QTextCodec *codec = QTextCodec::codecForName("Windows-1251");

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    connect( ui->m_pushButton, SIGNAL(clicked()),SLOT(slotStart()));
    connect( ui->m_pushButton, SIGNAL(pressed()),SLOT(slotPause()));
    ui->m_lineEdit->setText("Готов");

}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::slotStart(void)
{
    QString str;


    KMyClass MyCls;
    double totalTime;

    myTimer.Start();

    for ( int i=0; i<1000000000; i++)
    {
        Mi_n=Mi_n++;
        MiFnct( i);
        MyCls.MyFn(i);
        Mi_n=--MyCls.pp;

    }
    totalTime = myTimer.GetTime();
    str.setNum(totalTime);
    ui->m_lineEdit->setText(str);

}

void MainWindow::slotPause(void)
{
    QString str;
    str = "Идет подсчет" ;
    ui->m_lineEdit->setText(str);
}

void  MiFnct( int p)
{
    Mi_n=Mi_n+p;
    return ;
}
