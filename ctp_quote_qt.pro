#-------------------------------------------------
#
# Project created by QtCreator 2014-10-28T12:56:37
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = ctp_quote_qt
TEMPLATE = app


SOURCES += main.cpp\
	mainwindow.cpp \
    gpp_qt/bar/bar.cpp \
    gpp_qt/bar/bars.cpp \
    gpp_qt/bar/bars_manage.cpp \
    gpp_qt/cfg/cfg.cpp \
    gpp_qt/wfunction/wfunction.cpp \
    gpp_qt/wtimer/wtimer.cpp \
    ctp_quote.cpp

HEADERS  += mainwindow.h \
    ctp/ThostFtdcMdApi.h \
    ctp/ThostFtdcTraderApi.h \
    gpp_qt/bar/bar.h \
    gpp_qt/bar/bars.h \
    gpp_qt/bar/bars_manage.h \
    gpp_qt/cfg/cfg.h \
    gpp_qt/wfunction/wfunction.h \
    gpp_qt/wtimer/wtimer.h \
    ctp_quote.h \

FORMS    += mainwindow.ui

CONFIG += console


