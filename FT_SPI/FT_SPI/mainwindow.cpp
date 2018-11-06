#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <windows.h>
#include <QMessageBox>
#include "ftd2xx.h"


FT_STATUS ftStatus;
DWORD numDevs;
DWORD devIndex = 0; // первое устройство
DWORD dwModemStatus = 0;
char strDevDescript[256]; // описание устройства
char strSerialNum[16];  // серийный номер устройства
FT_HANDLE ftHandle;  // описатель устройства
DWORD TxBytes;
DWORD BytesWritten;
DWORD BytesReceived;
UCHAR Mask = 0xff;
UCHAR Mode = 1;  // Set asynchronous bit-bang mode
UCHAR BitMode;

QString lst, str, tmp, dataout;
bool IsOpen = false;


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui->pushButtonDisconnect->setEnabled(0);
    ui->pushButtonSend->setEnabled(0);
    ui->lineEditData->setEnabled(0);
    ui->lineEditData->setMaxLength(8);
    ui->lineEditSendByt->setReadOnly(1);
    ui->lineEditSendByt->setEnabled(0);
    ui->comboBoxBaudRate->setEnabled(0);
    ui->lblNumDev->setText(ui->lblNumDev->text() + " 0");
    ui->lblNameDev->setText(ui->lblNameDev->text() + " не подключено");
    ui->statusBar->showMessage("Подключенных устройств нет");


}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButtonConnect_clicked()
{

    ftStatus = FT_ListDevices(&numDevs,NULL,FT_LIST_NUMBER_ONLY);
    if (ftStatus == FT_OK) {


        lst.setNum(numDevs,10);
        ui->lblNumDev->setText("Количество подключенных устройств: " + lst);

    }
    ftStatus = FT_ListDevices((PVOID)devIndex,strDevDescript,FT_LIST_BY_INDEX|FT_OPEN_BY_DESCRIPTION);
    if (ftStatus == FT_OK) {

        ui->lblNameDev->setText("Название подключенного устройства: " + QString(strDevDescript) );
        ui->statusBar->showMessage("Подключенное устройство - " + QString(strDevDescript));
        ui->pushButtonDisconnect->setEnabled(1);

    }
    else {

        QMessageBox::critical(0,
                              "Ошибка",
                              "Ошибка при вызове функции FT_ListDevices\n"
                              "Подключенных устройств нет ",
                              QMessageBox::Ok
                              );
        return;


    }

    ftStatus = FT_OpenEx(strDevDescript,FT_OPEN_BY_DESCRIPTION, &ftHandle);
    if (ftStatus == FT_OK) {

        ftStatus = FT_SetBitMode(ftHandle, Mask, Mode);
        if (ftStatus == FT_OK) {
            ftStatus = FT_SetBaudRate(ftHandle, 187); // Установка скорости по умолчаню 187 бод
            if (ftStatus == FT_OK) {
                ui->pushButtonSend->setEnabled(1);
                ui->lineEditData->setEnabled(1);
                ui->lineEditSendByt->setEnabled(1);
                ui->comboBoxBaudRate->setEnabled(1);
                IsOpen = true;
                // FT_SetBaudRate OK
            }
            else {
                QMessageBox::critical(0,
                                      "Ошибка",
                                      "Ошибка установки скорости передачи ",
                                      QMessageBox::Ok
                                      );
                return;
                // FT_SetBaudRate Failed
            }

            // 0xff written to device
        }
        else {
            QMessageBox::critical(0,
                                  "Ошибка",
                                  "Ошибка при вызове функции FT_SetBitMode ",
                                  QMessageBox::Ok
                                  );
            return;
        }

    }
    else {

        QMessageBox::critical(0,
                              "Ошибка",
                              "Ошибка при открытии устройства FT232R ",
                              QMessageBox::Ok
                              );
        return;
    }


}

void MainWindow::on_pushButtonDisconnect_clicked()
{
    ftStatus =  FT_Close(ftHandle);
    if (ftStatus != FT_OK) {

        QMessageBox::critical(0,
                              "Ошибка",
                              "Ошибка при закрытии устройства FT232R ",
                              QMessageBox::Ok
                              );
        return;
    }
    ui->pushButtonSend->setEnabled(0);
    ui->lineEditData->clear();
    ui->lineEditData->setEnabled(0);
    ui->lineEditSendByt->clear();
    ui->lineEditSendByt->setEnabled(0);
    ui->comboBoxBaudRate->setEnabled(0);
    ui->pushButtonDisconnect->setEnabled(0);
    ui->lblNumDev->setText("Количество подключенных устройств: 0");
    ui->statusBar->showMessage("Подключенных устройств нет");
    ui->lblNameDev->setText("Название подключенного устройства: не подключено");
    IsOpen = false;
    ui->comboBoxBaudRate->setCurrentIndex(0);
}

void MainWindow::on_pushButtonSend_clicked()
{
    unsigned int data;
    unsigned char databyt;
    bool ok;
    int k, l;


    str = ui->lineEditData->text();
    data = str.toUInt(&ok,16);
    databyt = 0;

    l=str.length();
    char TxBuffer[l*12+1];

    str.clear();
    tmp.clear();
    dataout.clear();


    for (k=0; k<l*4;k++)
    {
        if (data & (0x08<<4*(l-1))){
            
            str += "1";
            databyt = 0x01 << SDA;
            TxBuffer[3*k] = databyt;
            databyt |= 0x01 << SCL;
            TxBuffer[3*k+1] = databyt;
            databyt ^= 0x01 << SCL;
            TxBuffer[3*k+2] = databyt;

            
        }else{
            
            str += "0";
            databyt = 0x00 << SDA;
            TxBuffer[3*k] = databyt;
            databyt |= 0x01 << SCL;
            TxBuffer[3*k+1] = databyt;
            databyt ^= 0x01 << SCL;
            TxBuffer[3*k+2] = databyt;
        }
        data = data<<1;
    }
    ui->lineEditSendByt->setText(str);
    TxBuffer[l*12] = 0x00;

    ftStatus = FT_Write(ftHandle, TxBuffer, sizeof(TxBuffer), &BytesWritten);
    if (ftStatus != FT_OK) {
        QMessageBox::critical(0,
                              "Ошибка",
                              "Ошибка  передачи данных",
                              QMessageBox::Ok
                              );
        return;

    }

}

void MainWindow::on_comboBoxBaudRate_currentIndexChanged(const QString &arg1)
{
    if(IsOpen){
        // QMessageBox::information(0,"Информация","Мы здесь");

        ftStatus = FT_SetBaudRate(ftHandle, arg1.toULong()/16*3);
        if (ftStatus != FT_OK) {
            QMessageBox::critical(0,
                                  "Ошибка",
                                  "Ошибка Установки скорости передачи ",
                                  QMessageBox::Ok
                                  );
            return;

        }

    }

}



