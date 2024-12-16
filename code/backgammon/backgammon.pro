TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        board.cpp \
        dice.cpp \
        main.cpp

HEADERS += \
    board.h \
    dice.h

QT += widgets
