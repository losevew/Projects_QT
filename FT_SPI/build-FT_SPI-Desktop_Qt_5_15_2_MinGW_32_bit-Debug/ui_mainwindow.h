/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonExit;
    QLabel *lblNumDev;
    QLabel *lblNameDev;
    QPushButton *pushButtonConnect;
    QPushButton *pushButtonDisconnect;
    QLineEdit *lineEditData;
    QComboBox *comboBoxBaudRate;
    QLineEdit *lineEditSendByt;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QPushButton *pushButtonSend;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(437, 210);
        QIcon icon;
        icon.addFile(QString::fromUtf8("ICON_1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1.000000000000000);
        MainWindow->setIconSize(QSize(32, 32));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        pushButtonExit = new QPushButton(centralWidget);
        pushButtonExit->setObjectName(QString::fromUtf8("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(320, 150, 101, 31));
        pushButtonExit->setCheckable(false);
        pushButtonExit->setChecked(false);
        lblNumDev = new QLabel(centralWidget);
        lblNumDev->setObjectName(QString::fromUtf8("lblNumDev"));
        lblNumDev->setGeometry(QRect(110, 4, 241, 31));
        lblNumDev->setFrameShape(QFrame::NoFrame);
        lblNumDev->setFrameShadow(QFrame::Sunken);
        lblNumDev->setLineWidth(4);
        lblNumDev->setTextFormat(Qt::AutoText);
        lblNameDev = new QLabel(centralWidget);
        lblNameDev->setObjectName(QString::fromUtf8("lblNameDev"));
        lblNameDev->setGeometry(QRect(110, 46, 351, 31));
        lblNameDev->setFrameShape(QFrame::NoFrame);
        lblNameDev->setFrameShadow(QFrame::Raised);
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QString::fromUtf8("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(10, 10, 75, 23));
        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName(QString::fromUtf8("pushButtonDisconnect"));
        pushButtonDisconnect->setGeometry(QRect(10, 50, 75, 23));
        lineEditData = new QLineEdit(centralWidget);
        lineEditData->setObjectName(QString::fromUtf8("lineEditData"));
        lineEditData->setGeometry(QRect(140, 110, 71, 20));
        comboBoxBaudRate = new QComboBox(centralWidget);
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->addItem(QString());
        comboBoxBaudRate->setObjectName(QString::fromUtf8("comboBoxBaudRate"));
        comboBoxBaudRate->setGeometry(QRect(10, 110, 111, 22));
        comboBoxBaudRate->setEditable(true);
        comboBoxBaudRate->setMaxVisibleItems(5);
        comboBoxBaudRate->setFrame(true);
        lineEditSendByt = new QLineEdit(centralWidget);
        lineEditSendByt->setObjectName(QString::fromUtf8("lineEditSendByt"));
        lineEditSendByt->setGeometry(QRect(230, 110, 191, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(11, 89, 100, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));
        label_2->setGeometry(QRect(142, 88, 40, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(234, 88, 110, 16));
        pushButtonSend = new QPushButton(centralWidget);
        pushButtonSend->setObjectName(QString::fromUtf8("pushButtonSend"));
        pushButtonSend->setGeometry(QRect(140, 150, 75, 31));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonExit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "FT Spi", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonExit->setToolTip(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\266\320\260\321\202\321\214 \320\264\320\273\321\217 \320\262\321\213\321\205\320\276\320\264\320\260 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonExit->setText(QCoreApplication::translate("MainWindow", "&\320\222\321\213\321\205\320\276\320\264", nullptr));
        lblNumDev->setText(QCoreApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\275\321\213\321\205 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262: ", nullptr));
        lblNameDev->setText(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\275\320\276\320\263\320\276 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260 :", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonConnect->setToolTip(QCoreApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260 ", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonConnect->setText(QCoreApplication::translate("MainWindow", "&\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonDisconnect->setToolTip(QCoreApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonDisconnect->setText(QCoreApplication::translate("MainWindow", "&\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214", nullptr));
#if QT_CONFIG(tooltip)
        lineEditData->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205 \320\264\320\273\321\217 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270 \320\262 \321\210\320\265\321\201\321\202\320\275\320\260\320\264\321\206\320\260\321\202\320\270\321\200\320\270\321\207\320\275\320\276\320\274 \321\204\320\276\321\200\320\274\320\260\321\202\320\265", nullptr));
#endif // QT_CONFIG(tooltip)
        comboBoxBaudRate->setItemText(0, QCoreApplication::translate("MainWindow", "1000", nullptr));
        comboBoxBaudRate->setItemText(1, QCoreApplication::translate("MainWindow", "2000", nullptr));
        comboBoxBaudRate->setItemText(2, QCoreApplication::translate("MainWindow", "5000", nullptr));
        comboBoxBaudRate->setItemText(3, QCoreApplication::translate("MainWindow", "10000", nullptr));
        comboBoxBaudRate->setItemText(4, QCoreApplication::translate("MainWindow", "20000", nullptr));
        comboBoxBaudRate->setItemText(5, QCoreApplication::translate("MainWindow", "50000", nullptr));
        comboBoxBaudRate->setItemText(6, QCoreApplication::translate("MainWindow", "100000", nullptr));
        comboBoxBaudRate->setItemText(7, QCoreApplication::translate("MainWindow", "150000", nullptr));
        comboBoxBaudRate->setItemText(8, QCoreApplication::translate("MainWindow", "1000000", nullptr));

#if QT_CONFIG(tooltip)
        comboBoxBaudRate->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270 \320\262 \320\263\320\265\321\200\321\206\320\260\321\205", nullptr));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(tooltip)
        lineEditSendByt->setToolTip(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264\320\270\320\274\320\260\321\217 \320\277\320\276\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\261\320\270\321\202", nullptr));
#endif // QT_CONFIG(tooltip)
        label->setText(QCoreApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270", nullptr));
        label_2->setText(QCoreApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264\320\270\320\274\321\213\320\265 \320\261\320\270\321\202\321\213", nullptr));
#if QT_CONFIG(tooltip)
        pushButtonSend->setToolTip(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\266\320\260\321\202\321\214 \320\264\320\273\321\217 \320\262\321\213\320\262\320\276\320\264\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", nullptr));
#endif // QT_CONFIG(tooltip)
        pushButtonSend->setText(QCoreApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\264\320\260\321\202\321\214", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
