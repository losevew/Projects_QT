#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QTextCodec>
#include <windows.h>
#include "ftd2xx.h"


QString lst;
QTextCodec *codec = QTextCodec::codecForName("UTF-8");

FT_STATUS ftStatus;
DWORD numDevs;
DWORD devIndex = 0; // first device
DWORD dwModemStatus = 0;
char strDevDescript[256];
char strSerialNum[16];
FT_HANDLE ftHandle;
//QTimerEvent *timerevent;
bool start = false;

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->PushButtonStop->setEnabled(0);
    ui->CheckBoxTxD->setEnabled(0);
    ui->CheckBoxDTR->setEnabled(0);
    ui->CheckBoxRTS->setEnabled(0);


}

MainWindow::~MainWindow()
{
    delete ui;
}


void MainWindow::timerEvent(QTimerEvent *)
{
    if (start) {
        ftStatus = FT_GetModemStatus(ftHandle,&dwModemStatus );
        if (ftStatus== FT_OK) {
            if (dwModemStatus & 0x10) {
               ui->lineEditCTS->setText("0");
            }
            else {
               ui->lineEditCTS->setText("1");
            }

            if (dwModemStatus & 0x20) {
               ui->lineEditDSR->setText("0");
            }
            else {
               ui->lineEditDSR->setText("1");
            }

            if (dwModemStatus & 0x40) {
               ui->lineEditRI->setText("0");
            }
            else {
               ui->lineEditRI->setText("1");
            }

            if (dwModemStatus & 0x80) {
               ui->lineEditDCD->setText("0");
            }
            else {
               ui->lineEditDCD->setText("1");
            }

        }
        else {
            ui->LoggerList->addItem("Ошибка вызова: FT_GetModemStatus - не работает " );
            return;
        }
    }


}


void MainWindow::on_PushButtonStart_clicked()
{

    ui->LoggerList->clear();
    MainWindow::startTimer(30);


    ftStatus = FT_ListDevices(&numDevs,NULL,FT_LIST_NUMBER_ONLY);
        if (ftStatus == FT_OK) {

           //lst = codec->toUnicode("Количество устройств :"  );
           //ui->LoggerList->insertItem(0, lst);
           lst.setNum(numDevs,10);
           ui->LoggerList->addItem("Количество устройств - " + lst);

        }
        else {

            lst = codec->toUnicode("Ошибка вызова: FT_ListDevices - не работает");
            ui->LoggerList->addItem(lst);
            return;
        }

    ftStatus = FT_ListDevices((PVOID)devIndex,strDevDescript,FT_LIST_BY_INDEX|FT_OPEN_BY_DESCRIPTION);
        if (ftStatus == FT_OK) {

            ui->LoggerList->addItem( "Описание устройства : "+ QString(strDevDescript) );

         }
         else {

             ui->LoggerList->addItem("Ошибка вызова: FT_ListDevices - не работает");
             return;

         }

    ftStatus = FT_ListDevices((PVOID)devIndex,strSerialNum,FT_LIST_BY_INDEX|FT_OPEN_BY_SERIAL_NUMBER);
         if (ftStatus == FT_OK) {

            ui->LoggerList->addItem( "Серийный номер : " + QString(strSerialNum) );

         }
         else {

             ui->LoggerList->addItem("Ошибка вызова: FT_ListDevices - не работает");
             return;

         }


         if (ui->DeviceName->text() != strDevDescript) {

            lst = ui->DeviceName->text();
            strncpy(strDevDescript, qPrintable(lst), 255);//Здесь преобразуется QString в char[]
            ui->LoggerList->addItem("Альтернативное описание устройства " + QString(strDevDescript));

         }


     ftStatus = FT_OpenEx(strDevDescript,FT_OPEN_BY_DESCRIPTION, &ftHandle);
         if (ftStatus == FT_OK) {
           // success - device with serial number is open
             ui->LoggerList->addItem( "Устройство  " + QString(strDevDescript) +" открыто" );
             ui->PushButtonStop->setEnabled(1);
             ui->PushButtonStart->setEnabled(0);
             ui->CheckBoxTxD->setEnabled(1);
             ui->CheckBoxDTR->setEnabled(1);
             ui->CheckBoxRTS->setEnabled(1);
             if (!start) {
                 start = true;
             }

             if (ui->CheckBoxTxD->isChecked() ) {
                 FT_SetBreakOff(ftHandle);
             }
             else {
                 FT_SetBreakOn(ftHandle);
             }

             if (ui->CheckBoxRTS->isChecked() ) {
                 FT_ClrRts(ftHandle);
             }
             else {
                 FT_SetRts(ftHandle);
             }

             if (ui->CheckBoxDTR->isChecked() ) {
                 FT_ClrDtr(ftHandle);
             }
             else {
                 FT_SetDtr(ftHandle);
             }

         }
         else {
           // failure
              ui->LoggerList->addItem("Ошибка вызова: FT_OpenEx - не работает");
              return;
         }

}

void MainWindow::on_PushButtonStop_clicked()
{
    start = false;
    ftStatus =  FT_Close(ftHandle);
       if (ftStatus == FT_OK) {
        // success - device with serial number  is close
            ui->LoggerList->addItem( "Устройство  : "+ QString(strDevDescript) + " успешно закрыто" );
            ui->PushButtonStop->setEnabled(0);
            ui->PushButtonStart->setEnabled(1);
            ui->CheckBoxTxD->setEnabled(0);
            ui->CheckBoxDTR->setEnabled(0);
            ui->CheckBoxRTS->setEnabled(0);
            ui->lineEditCTS->setText(" ");
            ui->lineEditDSR->setText(" ");
            ui->lineEditRI->setText(" ");
            ui->lineEditDCD->setText(" ");
       }
       else {
          // failure
            ui->LoggerList->addItem("Ошибка вызова: FT_Close");
            return;
       }

    //MainWindow::killTimer(timerevent->timerId());

}

void MainWindow::on_CheckBoxTxD_clicked()
{
    if (ui->CheckBoxTxD->isChecked() ){
        ftStatus = FT_SetBreakOff(ftHandle);
        if (ftStatus == FT_OK){
            ui->LoggerList->addItem( "Флажок TxD установлен ");
        }

    }
    else {
        ftStatus = FT_SetBreakOn(ftHandle);
        if (ftStatus == FT_OK){
            ui->LoggerList->addItem( "Флажок TxD сброшен ");
        }
    }
}

void MainWindow::on_CheckBoxRTS_clicked()
{
    if (ui->CheckBoxRTS->isChecked() ){
        ftStatus = FT_ClrRts(ftHandle);
        if (ftStatus == FT_OK){
            ui->LoggerList->addItem( "Флажок RTS установлен ");
        }

    }
    else {
        ftStatus = FT_SetRts(ftHandle);
        if (ftStatus == FT_OK){
            ui->LoggerList->addItem( "Флажок RTS сброшен ");
        }
    }
}

void MainWindow::on_CheckBoxDTR_clicked()
{
    if (ui->CheckBoxDTR->isChecked() ){
        ftStatus = FT_ClrDtr(ftHandle);
        if (ftStatus == FT_OK){
            ui->LoggerList->addItem( "Флажок DTR установлен ");
        }

    }
    else {
        ftStatus = FT_SetDtr(ftHandle);
        if (ftStatus == FT_OK){
            ui->LoggerList->addItem( "Флажок DTR сброшен ");
        }
    }
}