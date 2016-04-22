#-------------------------------------------------
#
# Project created by QtCreator 2015-07-31T07:35:28
#
#-------------------------------------------------

QT += core
QT -= gui

win32: CONFIG += staticlib  #win change
TARGET = lib
TEMPLATE = lib

SOURCES += myclass.cpp

HEADERS += myclass.h


# for unit test coverage report
QMAKE_CXXFLAGS += -g -fprofile-arcs -ftest-coverage -O0
QMAKE_LFLAGS += -g -fprofile-arcs -ftest-coverage  -O0
