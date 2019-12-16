#-------------------------------------------------
#
# Project created by QtCreator 2015-10-14T21:46:00
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = FT_SPI
TEMPLATE = app

LIBS += ftd2xx.lib

SOURCES += main.cpp\
        mainwindow.cpp

HEADERS  += mainwindow.h \
    ftd2xx.h

FORMS    += mainwindow.ui
