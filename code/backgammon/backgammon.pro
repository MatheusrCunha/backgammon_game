TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        board.cpp \
        gamewindow.cpp \
        main.cpp \
        piece.cpp

HEADERS += \
    board.h \
    gamewindow.h \
    piece.h

QT += widgets
