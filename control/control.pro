#-------------------------------------------------
#
# Project created by QtCreator 2019-09-01T17:59:58
#
#-------------------------------------------------

QT       -= gui

TARGET = control
TEMPLATE = lib

DEFINES += CONTROL_LIBRARY

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
        control.cpp

HEADERS += \
        control.h \
        control_global.h 

include($$top_srcdir/model/model.pri)
include($$top_srcdir/view/view.pri)

unix {
    target.path = /usr/lib
    INSTALLS += target
}
