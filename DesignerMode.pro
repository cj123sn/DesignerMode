#-------------------------------------------------
#
# Project created by QtCreator 2018-11-30T08:57:36
#
#-------------------------------------------------

QT       += core gui

CONFIG += c++11

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = DesignerMode
TEMPLATE = app


SOURCES += main.cpp\
        MainUi.cpp \
    AdapterMode/RussiaSocker.cpp \
    AdapterMode/OwnCharger.cpp \
    AdapterMode/PowerAdapter.cpp \
    singletonMode/Singleton.cpp \
    AbstractFactory/JProduct.cpp \
    AbstractFactory/ConcreteProduct.cpp \
    AbstractFactory/AbstractFactory.cpp \
    AbstractFactory/ConcreteFactory.cpp

HEADERS  += MainUi.h \
    AdapterMode/RussiaSocker.h \
    AdapterMode/OwnCharger.h \
    AdapterMode/PowerAdapter.h \
    singletonMode/Singleton.h \
    AbstractFactory/JProduct.h \
    AbstractFactory/ConcreteProduct.h \
    AbstractFactory/AbstractFactory.h \
    AbstractFactory/ConcreteFactory.h

FORMS    += MainUi.ui
