#-------------------------------------------------
#
# Project created by QtCreator 2017-12-03T21:40:31
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = test3
TEMPLATE = app

INCLUDEPATH += D:/opencv/opencv3.1.0/build/include
LIBS += -LD:/opencv/opencv3.1.0/build/x64/vc12/lib -lopencv_world310

SOURCES += main.cpp\
        mainwindow.cpp \
    transactionthread.cpp \
    mymessagebox.cpp \
    camera.cpp \
    log.cpp

HEADERS  += mainwindow.h \
    transactionthread.h \
    include/image_select.h \
    mymessagebox.h \
    camera.h \
    common.h \
    log.h

FORMS    += mainwindow.ui \
    groupboxforlocation.ui \
    groupboxforonline.ui \
    widgetforopensource.ui \
    widgetforsavesource.ui

RESOURCES += \
    res.qrc

win32: LIBS += -L$$PWD/lib/ -lcontainer_select_dll

INCLUDEPATH += $$PWD/include
DEPENDPATH += $$PWD/include
