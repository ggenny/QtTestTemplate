QT += testlib
QT -= gui

CONFIG += qt console warn_on depend_includepath testcase
CONFIG -= app_bundle

include($$top_srcdir/test/common/common.pri)

TEMPLATE = app

SOURCES += \
    tst_main.cpp \
    tst_functest1.cpp \
    tst_functest2.cpp
