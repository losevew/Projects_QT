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
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButtonExit;
    QPushButton *pushButtonConvert;
    QLineEdit *lineEditData;
    QLineEdit *lineEditResultat;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEditHexResultat;
    QMenuBar *menuBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(351, 151);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButtonExit = new QPushButton(centralWidget);
        pushButtonExit->setObjectName(QStringLiteral("pushButtonExit"));
        pushButtonExit->setGeometry(QRect(260, 100, 75, 23));
        pushButtonConvert = new QPushButton(centralWidget);
        pushButtonConvert->setObjectName(QStringLiteral("pushButtonConvert"));
        pushButtonConvert->setGeometry(QRect(10, 100, 91, 23));
        lineEditData = new QLineEdit(centralWidget);
        lineEditData->setObjectName(QStringLiteral("lineEditData"));
        lineEditData->setGeometry(QRect(11, 40, 49, 20));
        lineEditResultat = new QLineEdit(centralWidget);
        lineEditResultat->setObjectName(QStringLiteral("lineEditResultat"));
        lineEditResultat->setGeometry(QRect(93, 40, 241, 20));
        lineEditResultat->setReadOnly(false);
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(11, 21, 40, 16));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(93, 21, 139, 16));
        lineEditHexResultat = new QLineEdit(centralWidget);
        lineEditHexResultat->setObjectName(QStringLiteral("lineEditHexResultat"));
        lineEditHexResultat->setGeometry(QRect(93, 70, 240, 20));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 351, 21));
        MainWindow->setMenuBar(menuBar);

        retranslateUi(MainWindow);
        QObject::connect(pushButtonExit, SIGNAL(clicked()), MainWindow, SLOT(close()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "MainWindow", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonExit->setToolTip(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\260\321\202\321\214 \320\264\320\273\321\217 \320\262\321\213\321\205\320\276\320\264\320\260", 0));
#endif // QT_NO_TOOLTIP
        pushButtonExit->setText(QApplication::translate("MainWindow", "\320\222\321\213\321\205\320\276\320\264", 0));
#ifndef QT_NO_TOOLTIP
        pushButtonConvert->setToolTip(QApplication::translate("MainWindow", "\320\235\320\260\320\266\320\260\321\202\321\214 \320\264\320\273\321\217 \320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\321\217", 0));
#endif // QT_NO_TOOLTIP
        pushButtonConvert->setText(QApplication::translate("MainWindow", "\320\237\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\321\202\321\214", 0));
#ifndef QT_NO_TOOLTIP
        lineEditData->setToolTip(QApplication::translate("MainWindow", "\320\222\320\262\320\276\320\264 \321\207\320\270\321\201\320\273\320\260 \320\262 \321\210\320\265\321\201\321\202\320\275\320\260\320\264\321\206\320\260\321\202\320\270\321\200\320\270\321\207\320\275\320\276\320\274 \321\204\320\276\321\200\320\274\320\260\321\202\320\265", 0));
#endif // QT_NO_TOOLTIP
#ifndef QT_NO_TOOLTIP
        lineEditResultat->setToolTip(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\321\217 \320\262 \320\264\320\262\320\276\320\270\321\207\320\275\320\276\320\274 \321\204\320\276\321\200\320\274\320\260\321\202\320\265", 0));
#endif // QT_NO_TOOLTIP
        label->setText(QApplication::translate("MainWindow", "\320\224\320\260\320\275\320\275\321\213\320\265", 0));
        label_2->setText(QApplication::translate("MainWindow", "\320\240\320\265\320\267\321\203\320\273\321\214\321\202\320\260\321\202 \320\277\321\200\320\265\320\276\320\261\321\200\320\260\320\267\320\276\320\262\320\260\320\275\320\270\321\217", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
