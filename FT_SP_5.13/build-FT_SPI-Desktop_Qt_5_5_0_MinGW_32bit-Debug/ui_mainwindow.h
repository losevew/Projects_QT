/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QHeaderView>
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
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(437, 210);
        QIcon icon;
        icon.addFile(QStringLiteral("ICON_1.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        MainWindow->setWindowOpacity(1);
        MainWindow->setIconSize(QSize(32, 32));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonExit = new QPushButton(centralWidget);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(320, 150, 101, 31));
        pushButtonExit->setCheckable(false);
        pushButtonExit->setChecked(false);
        lblNumDev = new QLabel(centralWidget);
        lblNumDev->setObjectName(QStringLiteral("lblNumDev"));
        lblNumDev->setGeometry(QRect(110, 4, 241, 31));
        lblNumDev->setFrameShape(QFrame::NoFrame);
        lblNumDev->setFrameShadow(QFrame::Sunken);
        lblNumDev->setLineWidth(4);
        lblNumDev->setTextFormat(Qt::AutoText);
        lblNameDev = new QLabel(centralWidget);
        lblNameDev->setObjectName(QStringLiteral("lblNameDev"));
        lblNameDev->setGeometry(QRect(110, 46, 351, 31));
        lblNameDev->setFrameShape(QFrame::NoFrame);
        lblNameDev->setFrameShadow(QFrame::Raised);
        pushButtonConnect = new QPushButton(centralWidget);
        pushButtonConnect->setObjectName(QStringLiteral("pushButtonConnect"));
        pushButtonConnect->setGeometry(QRect(10, 10, 75, 23));
        pushButtonDisconnect = new QPushButton(centralWidget);
        pushButtonDisconnect->setObjectName(QStringLiteral("pushButtonDisconnect"));
        pushButtonDisconnect->setGeometry(QRect(10, 50, 75, 23));
        lineEditData = new QLineEdit(centralWidget);
        lineEditData->setObjectName(QStringLiteral("lineEditData"));
        lineEditData->setGeometry(QRect(140, 110, 71, 20));
        comboBoxBaudRate = new QComboBox(centralWidget);
        comboBoxBaudRate->setObjectName(QStringLiteral("comboBoxBaudRate"));
        comboBoxBaudRate->setGeometry(QRect(10, 110, 111, 22));
        comboBoxBaudRate->setEditable(true);
        comboBoxBaudRate->setMaxVisibleItems(5);
        comboBoxBaudRate->setFrame(true);
        lineEditSendByt = new QLineEdit(centralWidget);
        lineEditSendByt->setObjectName(QStringLiteral("lineEditSendByt"));
        lineEditSendByt->setGeometry(QRect(230, 110, 191, 20));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 89, 100, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(142, 88, 40, 16));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(234, 88, 110, 16));
        pushButtonSend = new QPushButton(centralWidget);
        pushButtonSend->setObjectName(QStringLiteral("pushButtonSend"));
        pushButtonSend->setGeometry(QRect(140, 150, 75, 31));
        MainWindow->setCentralWidget(centralWidget);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonExit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "FT Spi", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonExit->setToolTip(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\260\321\202\321\214 \320\264\320\273\321\217 \320\262\321\213\321\205\320\276\320\264\320\260 \320\270\320\267 \320\277\321\200\320\276\320\263\321\200\320\260\320\274\320\274\321\213", 0));
#endif // QT_NO_TOOLTIP
        pushButtonExit->setText(QApplication::translate("MainWindow", "&\320\222\321\213\321\205\320\276\320\264", 0));
        lblNumDev->setText(QApplication::translate("MainWindow", "\320\232\320\276\320\273\320\270\321\207\320\265\321\201\321\202\320\262\320\276 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\275\321\213\321\205 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262: ", 0));
        lblNameDev->setText(QApplication::translate("MainWindow", "\320\235\320\260\320\267\320\262\320\260\320\275\320\270\320\265 \320\277\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\275\320\276\320\263\320\276 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260 :", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonConnect->setToolTip(QApplication::translate("MainWindow", "\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260 ", 0));
#endif // QT_NO_TOOLTIP
        pushButtonConnect->setText(QApplication::translate("MainWindow", "&\320\237\320\276\320\264\320\272\320\273\321\216\321\207\320\270\321\202\321\214", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonDisconnect->setToolTip(QApplication::translate("MainWindow", "\320\236\321\202\320\272\320\273\321\216\321\207\320\265\320\275\320\270\320\265 \321\203\321\201\321\202\321\200\320\276\320\271\321\201\321\202\320\262\320\260", 0));
#endif // QT_NO_TOOLTIP
        pushButtonDisconnect->setText(QApplication::translate("MainWindow", "&\320\236\321\202\320\272\320\273\321\216\321\207\320\270\321\202\321\214", 0));
#ifndef QT_NO_TOOLTIP
        lineEditData->setToolTip(QApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \320\264\320\260\320\275\320\275\321\213\321\205 \320\264\320\273\321\217 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270 \320\262 \321\210\320\265\321\201\321\202\320\275\320\260\320\264\321\206\320\260\321\202\320\270\321\200\320\270\321\207\320\275\320\276\320\274 \321\204\320\276\321\200\320\274\320\260\321\202\320\265", 0));
#endif // QT_NO_TOOLTIP
        comboBoxBaudRate->clear();
        comboBoxBaudRate->insertItems(0, QStringList()
         << QApplication::translate("MainWindow", "1000", 0)
         << QApplication::translate("MainWindow", "2000", 0)
         << QApplication::translate("MainWindow", "5000", 0)
         << QApplication::translate("MainWindow", "10000", 0)
         << QApplication::translate("MainWindow", "20000", 0)
         << QApplication::translate("MainWindow", "50000", 0)
         << QApplication::translate("MainWindow", "100000", 0)
         << QApplication::translate("MainWindow", "150000", 0)
         << QApplication::translate("MainWindow", "1000000", 0)
        );
#ifndef QT_NO_TOOLTIP
        comboBoxBaudRate->setToolTip(QApplication::translate("MainWindow", "\320\222\321\213\320\261\320\276\321\200 \321\201\320\272\320\276\321\200\320\276\321\201\321\202\320\270 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270 \320\262 \320\263\320\265\321\200\321\206\320\260\321\205", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEditSendByt->setToolTip(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264\320\270\320\274\320\260\321\217 \320\277\320\276\321\201\320\273\320\265\320\264\320\276\320\262\320\260\321\202\320\265\320\273\321\214\320\275\320\276\321\201\321\202\321\214 \320\261\320\270\321\202", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "\320\241\320\272\320\276\321\200\320\276\321\201\321\202\321\214 \320\277\320\265\321\200\320\265\320\264\320\260\321\207\320\270", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", 0));
        label_3->setText(QApplication::translate("MainWindow", "\320\222\321\213\320\262\320\276\320\264\320\270\320\274\321\213\320\265 \320\261\320\270\321\202\321\213", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonSend->setToolTip(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\260\321\202\321\214 \320\264\320\273\321\217 \320\262\321\213\320\262\320\276\320\264\320\260 \320\264\320\260\320\275\320\275\321\213\321\205", 0));
#endif // QT_NO_TOOLTIP
        pushButtonSend->setText(QApplication::translate("MainWindow", "\320\237\320\265\321\200\320\265\320\264\320\260\321\202\321\214", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
