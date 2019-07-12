#-------------------------------------------------
#
# Project created by QtCreator 2015-05-28T22:07:05
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FTDI_1
TEMPLATE = app

LIBS += ftd2xx.lib

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    ftd2xx.h

FORMS    += mainwindow.ui



INCLUDEPATH += $$PWD/.
DEPENDPATH += $$PWD/.

