#-------------------------------------------------
#
# Project created by QtCreator 2018-12-19T17:20:26
#
#-------------------------------------------------

QT       += core gui sql multimedia

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = TimeTask
TEMPLATE = app

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
        main.cpp \
        mainwindow.cpp \
    showwindow.cpp \
    addwindow.cpp \
    deletewindow.cpp \
    aboutwindow.cpp \
    addplans.cpp \
    changeplans.cpp \
    deleteplan.cpp \
    changewindow.cpp \
    usertime.cpp \
    connectiondb.cpp \
    messages.cpp \
    sounds.cpp \
    jsondb.cpp

HEADERS += \
        mainwindow.h \
    showwindow.h \
    addwindow.h \
    deletewindow.h \
    aboutwindow.h \
    addplans.h \
    changeplans.h \
    deleteplan.h \
    changewindow.h \
    usertime.h \
    connectiondb.h \
    messages.h \
    sounds.h \
    jsondb.h

FORMS += \
        mainwindow.ui \
    showwindow.ui \
    addwindow.ui \
    deletewindow.ui \
    aboutwindow.ui \
    addplans.ui \
    changeplans.ui \
    deleteplan.ui \
    changewindow.ui

RESOURCES += \
    logo.qrc

