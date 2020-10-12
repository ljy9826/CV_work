#-------------------------------------------------
#
# Project created by QtCreator 2020-10-06T16:17:58
#
#-------------------------------------------------

QT       += core gui

greaterThan(QT_MAJOR_VERSION, 4): QT += widgets

TARGET = cvwork1
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

CONFIG += c++11

SOURCES += \
        cvio.cpp \
        firstwork.cpp \
        img_color.cpp \
        main.cpp \
        mainwindow.cpp

HEADERS += \
        cvio.h \
        firstwork.h \
        img_color.h \
        mainwindow.h

FORMS += \
        firstwork.ui \
        mainwindow.ui

# Default rules for deployment.
qnx: target.path = /tmp/$${TARGET}/bin
else: unix:!android: target.path = /opt/$${TARGET}/bin
!isEmpty(target.path): INSTALLS += target

INCLUDEPATH+=C:/Users/LJY/ProgramFiles/opencv/opencv/build/include \
                C:/Users/LJY/ProgramFiles/opencv/opencv/build/include/opencv \
                C:/Users/LJY/ProgramFiles/opencv/opencv/build/include/opencv2

LIBS+=C:/Users/LJY/ProgramFiles/opencv/opencv/build/x64/vc14/lib/opencv_world346d.lib
LIBS+=C:/Users/LJY/ProgramFiles/opencv/opencv/build/x64/vc14/lib/opencv_world346.lib
LIBS+=C:/Users/LJY/ProgramFiles/opencv/opencv/build/x64/vc15/lib/opencv_world346d.lib
LIBS+=C:/Users/LJY/ProgramFiles/opencv/opencv/build/x64/vc15/lib/opencv_world346.lib
