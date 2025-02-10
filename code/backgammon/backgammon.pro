TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        board.cpp \
        dice.cpp \
        gamewindow.cpp \
        main.cpp \
        piece.cpp \
        player.cpp

HEADERS += \
    board.h \
    dice.h \
    gamewindow.h \
    piece.h \
    player.h

QT += widgets
