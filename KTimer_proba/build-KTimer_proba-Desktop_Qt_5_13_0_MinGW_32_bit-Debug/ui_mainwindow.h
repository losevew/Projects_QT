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
#include <QtWidgets/QApplication>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *m_pushButton;
    QLineEdit *m_lineEdit;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(222, 157);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        m_pushButton = new QPushButton(centralWidget);
        m_pushButton->setObjectName(QString::fromUtf8("m_pushButton"));
        m_pushButton->setGeometry(QRect(30, 110, 151, 23));
        m_lineEdit = new QLineEdit(centralWidget);
        m_lineEdit->setObjectName(QString::fromUtf8("m_lineEdit"));
        m_lineEdit->setGeometry(QRect(30, 20, 151, 31));
        MainWindow->setCentralWidget(centralWidget);

        retranslateUi(MainWindow);
        QObject::connect(m_pushButton, SIGNAL(clicked()), MainWindow, SLOT(slotStart()));
        QObject::connect(m_pushButton, SIGNAL(pressed()), MainWindow, SLOT(slotPause()));

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QCoreApplication::translate("MainWindow", "\320\237\321\200\320\276\320\261\320\260 KTimer", nullptr));
#if QT_CONFIG(tooltip)
        m_pushButton->setToolTip(QCoreApplication::translate("MainWindow", "\320\235\320\260\320\266\320\260\321\202\321\214 \320\264\320\273\321\217 \321\201\321\202\320\260\321\200\321\202\320\260", nullptr));
#endif // QT_CONFIG(tooltip)
        m_pushButton->setText(QCoreApplication::translate("MainWindow", "\320\241\321\202\320\260\321\200\321\202", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
