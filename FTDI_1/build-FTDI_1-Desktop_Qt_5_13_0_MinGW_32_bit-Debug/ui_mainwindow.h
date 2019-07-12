/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.13.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QIcon>
#include <QtWidgets/QApplication>
#include <QtWidgets/QCheckBox>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QListWidget>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QWidget *verticalLayoutWidget;
    QVBoxLayout *verticalLayout;
    QListWidget *LoggerList;
    QWidget *horizontalLayoutWidget;
    QHBoxLayout *horizontalLayout;
    QLineEdit *DeviceName;
    QSpacerItem *horizontalSpacer;
    QPushButton *PushButtonStart;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *PushButtonStop;
    QSpacerItem *horizontalSpacer_3;
    QPushButton *PushButtonExit;
    QLineEdit *lineEditCTS;
    QLineEdit *lineEditDSR;
    QLineEdit *lineEditDCD;
    QLineEdit *lineEditRI;
    QLabel *label_3;
    QLabel *label_4;
    QLabel *label_5;
    QLabel *label_6;
    QGroupBox *groupBox;
    QGroupBox *groupBox_2;
    QCheckBox *CheckBoxTxD;
    QCheckBox *CheckBoxRTS;
    QCheckBox *CheckBoxDTR;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(630, 400);
        MainWindow->setMinimumSize(QSize(630, 400));
        MainWindow->setMaximumSize(QSize(630, 400));
        QIcon icon;
        icon.addFile(QString::fromUtf8("Ftdi.ico"), QSize(), QIcon::Normal, QIcon::Off);
        MainWindow->setWindowIcon(icon);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayoutWidget = new QWidget(centralWidget);
        verticalLayoutWidget->setObjectName(QString::fromUtf8("verticalLayoutWidget"));
        verticalLayoutWidget->setGeometry(QRect(10, 10, 591, 201));
        verticalLayout = new QVBoxLayout(verticalLayoutWidget);
        verticalLayout->setSpacing(6);
        verticalLayout->setContentsMargins(11, 11, 11, 11);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(0, 0, 0, 0);
        LoggerList = new QListWidget(verticalLayoutWidget);
        LoggerList->setObjectName(QString::fromUtf8("LoggerList"));
        LoggerList->setEnabled(true);
        QFont font;
        font.setPointSize(12);
        LoggerList->setFont(font);

        verticalLayout->addWidget(LoggerList);

        horizontalLayoutWidget = new QWidget(centralWidget);
        horizontalLayoutWidget->setObjectName(QString::fromUtf8("horizontalLayoutWidget"));
        horizontalLayoutWidget->setGeometry(QRect(9, 330, 611, 51));
        horizontalLayout = new QHBoxLayout(horizontalLayoutWidget);
        horizontalLayout->setSpacing(6);
        horizontalLayout->setContentsMargins(11, 11, 11, 11);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(0, 0, 0, 0);
        DeviceName = new QLineEdit(horizontalLayoutWidget);
        DeviceName->setObjectName(QString::fromUtf8("DeviceName"));
        DeviceName->setFont(font);

        horizontalLayout->addWidget(DeviceName);

        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer);

        PushButtonStart = new QPushButton(horizontalLayoutWidget);
        PushButtonStart->setObjectName(QString::fromUtf8("PushButtonStart"));
        QFont font1;
        font1.setPointSize(10);
        font1.setBold(true);
        font1.setWeight(75);
        PushButtonStart->setFont(font1);

        horizontalLayout->addWidget(PushButtonStart);

        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_2);

        PushButtonStop = new QPushButton(horizontalLayoutWidget);
        PushButtonStop->setObjectName(QString::fromUtf8("PushButtonStop"));
        PushButtonStop->setFont(font1);

        horizontalLayout->addWidget(PushButtonStop);

        horizontalSpacer_3 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout->addItem(horizontalSpacer_3);

        PushButtonExit = new QPushButton(horizontalLayoutWidget);
        PushButtonExit->setObjectName(QString::fromUtf8("PushButtonExit"));
        PushButtonExit->setFont(font1);

        horizontalLayout->addWidget(PushButtonExit);

        horizontalLayout->setStretch(0, 3);
        horizontalLayout->setStretch(1, 1);
        lineEditCTS = new QLineEdit(centralWidget);
        lineEditCTS->setObjectName(QString::fromUtf8("lineEditCTS"));
        lineEditCTS->setGeometry(QRect(60, 250, 21, 20));
        QFont font2;
        font2.setPointSize(12);
        font2.setBold(true);
        font2.setWeight(75);
        lineEditCTS->setFont(font2);
        lineEditDSR = new QLineEdit(centralWidget);
        lineEditDSR->setObjectName(QString::fromUtf8("lineEditDSR"));
        lineEditDSR->setGeometry(QRect(100, 250, 21, 20));
        lineEditDSR->setFont(font2);
        lineEditDCD = new QLineEdit(centralWidget);
        lineEditDCD->setObjectName(QString::fromUtf8("lineEditDCD"));
        lineEditDCD->setGeometry(QRect(140, 250, 21, 20));
        lineEditDCD->setFont(font2);
        lineEditRI = new QLineEdit(centralWidget);
        lineEditRI->setObjectName(QString::fromUtf8("lineEditRI"));
        lineEditRI->setGeometry(QRect(180, 250, 21, 20));
        lineEditRI->setFont(font2);
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QString::fromUtf8("label_3"));
        label_3->setGeometry(QRect(60, 280, 31, 16));
        label_3->setFont(font1);
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QString::fromUtf8("label_4"));
        label_4->setGeometry(QRect(100, 280, 31, 16));
        label_4->setFont(font1);
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QString::fromUtf8("label_5"));
        label_5->setGeometry(QRect(140, 280, 31, 16));
        label_5->setFont(font1);
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QString::fromUtf8("label_6"));
        label_6->setGeometry(QRect(180, 280, 21, 16));
        label_6->setFont(font1);
        groupBox = new QGroupBox(centralWidget);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setGeometry(QRect(40, 219, 181, 91));
        groupBox->setFont(font2);
        groupBox->setAlignment(Qt::AlignCenter);
        groupBox_2 = new QGroupBox(centralWidget);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setGeometry(QRect(330, 220, 251, 91));
        groupBox_2->setFont(font2);
        groupBox_2->setAlignment(Qt::AlignCenter);
        CheckBoxTxD = new QCheckBox(groupBox_2);
        CheckBoxTxD->setObjectName(QString::fromUtf8("CheckBoxTxD"));
        CheckBoxTxD->setGeometry(QRect(10, 40, 51, 17));
        CheckBoxTxD->setFont(font1);
        CheckBoxTxD->setIconSize(QSize(24, 24));
        CheckBoxRTS = new QCheckBox(groupBox_2);
        CheckBoxRTS->setObjectName(QString::fromUtf8("CheckBoxRTS"));
        CheckBoxRTS->setGeometry(QRect(100, 40, 51, 17));
        CheckBoxRTS->setFont(font1);
        CheckBoxDTR = new QCheckBox(groupBox_2);
        CheckBoxDTR->setObjectName(QString::fromUtf8("CheckBoxDTR"));
        CheckBoxDTR->setGeometry(QRect(180, 40, 51, 17));
        CheckBoxDTR->setFont(font1);
        MainWindow->setCentralWidget(centralWidget);
        groupBox->raise();
        verticalLayoutWidget->raise();
        horizontalLayoutWidget->raise();
        lineEditCTS->raise();
        lineEditDSR->raise();
        lineEditDCD->raise();
        lineEditRI->raise();
        label_3->raise();
        label_4->raise();
        label_5->raise();
        label_6->raise();
        groupBox_2->raise();

        retranslateUi(MainWindow);
        QObject::connect(PushButtonExit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "FTDI_1", nullptr));
        DeviceName->setText(QCoreApplication::translate("MainWindow", "FT232R USB UART", nullptr));
        PushButtonStart->setText(QCoreApplication::translate("MainWindow", "\320\241 \320\242 \320\220 \320\240 \320\242", nullptr));
        PushButtonStop->setText(QCoreApplication::translate("MainWindow", "\320\241 \320\242 \320\236 \320\237", nullptr));
        PushButtonExit->setText(QCoreApplication::translate("MainWindow", "\320\222 \320\253 \320\245 \320\236 \320\224", nullptr));
        label_3->setText(QCoreApplication::translate("MainWindow", "CTS", nullptr));
        label_4->setText(QCoreApplication::translate("MainWindow", "DSR", nullptr));
        label_5->setText(QCoreApplication::translate("MainWindow", "DCD", nullptr));
        label_6->setText(QCoreApplication::translate("MainWindow", "RI", nullptr));
#if QT_CONFIG(tooltip)
        groupBox->setToolTip(QCoreApplication::translate("MainWindow", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\262\321\205\320\276\320\264\320\276\320\262", nullptr));
#endif // QT_CONFIG(tooltip)
        groupBox->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\205\320\276\320\264\321\213", nullptr));
#if QT_CONFIG(tooltip)
        groupBox_2->setToolTip(QCoreApplication::translate("MainWindow", "\320\243\321\201\321\202\320\260\320\275\320\276\320\262\320\272\320\260 \320\270 \321\201\320\261\321\200\320\276\321\201 \320\262\321\213\321\205\320\276\320\264\320\276\320\262", "\320\241\320\276\321\201\321\202\320\276\321\217\320\275\320\270\320\265 \320\262\321\213\321\205\320\276\320\264\320\276\320\262"));
#endif // QT_CONFIG(tooltip)
#if QT_CONFIG(statustip)
        groupBox_2->setStatusTip(QCoreApplication::translate("MainWindow", "\320\220\320\272\321\202\320\270\320\262\320\265\320\275", nullptr));
#endif // QT_CONFIG(statustip)
        groupBox_2->setTitle(QCoreApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264\321\213", nullptr));
        CheckBoxTxD->setText(QCoreApplication::translate("MainWindow", "TxD", nullptr));
        CheckBoxRTS->setText(QCoreApplication::translate("MainWindow", "RTS", nullptr));
        CheckBoxDTR->setText(QCoreApplication::translate("MainWindow", "DTR", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
