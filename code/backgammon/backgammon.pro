TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        dice.cpp \
        main.cpp

HEADERS += \
    dice.h \
    piece.h

QT += widgets
