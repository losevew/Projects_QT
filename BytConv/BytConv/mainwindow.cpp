#include "mainwindow.h"
#include "ui_mainwindow.h"

QString str, tmp, dataout ;

//char databyt;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->lineEditData->setMaxLength(4);
    ui->lineEditResultat->clear();
    ui->lineEditResultat->setReadOnly(1);
    ui->lineEditHexResultat->clear();
    ui->lineEditHexResultat->setReadOnly(1);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonConvert_clicked()
{
   unsigned int data;
   unsigned char databyt;
   bool ok;
   unsigned int k, l ;
   str = ui->lineEditData->text();
   data = str.toUInt(&ok,16);
   databyt = 0;
   l=str.length();
   char RxBuffer[l];

   str.clear();
   tmp.clear();
   dataout.clear();

   for (k=0; k<l*4;k++)
   {
       if (data & (0x08<<4*(l-1))){

           str+="1";
           databyt = 0x01 << SDA;
           dataout = dataout + tmp.setNum(databyt);
           databyt |= 0x01 << SCL;
           dataout = dataout + tmp.setNum(databyt);
           databyt ^= 0x01 << SCL;
           dataout = dataout + tmp.setNum(databyt);
           //databyt ^= 0x01 << SDA;
           //dataout = dataout + tmp.setNum(databyt);
       }else{

           str+="0";
           databyt = 0x00 << SDA;
           dataout = dataout + tmp.setNum(databyt);
           databyt |= 0x01 << SCL;
           dataout = dataout + tmp.setNum(databyt);
           databyt ^= 0x01 << SCL;
           dataout = dataout + tmp.setNum(databyt);
           //databyt = 0x00 << SDA;
           //dataout = dataout + tmp.setNum(databyt);
       }
       data = data<<1;
   }
   ui->lineEditResultat->setText(str);
   ui->lineEditHexResultat->setText(dataout);
   strncpy(RxBuffer, qPrintable(dataout), l);

}
