QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

include($$top_srcdir/test/common/common.pri)

TEMPLATE = app

HEADERS +=     tst_case.h
SOURCES +=     main.cpp
