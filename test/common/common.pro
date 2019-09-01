#-------------------------------------------------
#
# Project created by QtCreator 2019-09-01T18:06:29
#
#-------------------------------------------------

QT       += testlib

QT       -= gui

TARGET = common
TEMPLATE = lib

DEFINES += COMMON_LIBRARY

# The following define makes your compiler emit warnings if you use
# any feature of Qt which has been marked as deprecated (the exact warnings
# depend on your compiler). Please consult the documentation of the
# deprecated API in order to know how to port your code away from it.
DEFINES += QT_DEPRECATED_WARNINGS

# You can also make your code fail to compile if you use deprecated APIs.
# In order to do so, uncomment the following line.
# You can also select to disable deprecated APIs only up to a certain version of Qt.
#DEFINES += QT_DISABLE_DEPRECATED_BEFORE=0x060000    # disables all the APIs deprecated before Qt 6.0.0

SOURCES += \
        qt_unit_test.cpp

HEADERS += \
        common_global.h  \
        go_test_main.h \
        go_unit_test.h \
        qt_test_collector.h \
        qt_unit_test.h

include($$top_srcdir/test/common/gtest_dependency.pri)

unix {
    target.path = /usr/lib
    INSTALLS += target
}
