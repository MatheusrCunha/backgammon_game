TEMPLATE = app
CONFIG += console c++17
CONFIG -= app_bundle

SOURCES += \
        board.cpp \
        dice.cpp \
        form.cpp \
        gamewindow.cpp \
        main.cpp \
        piece.cpp

HEADERS += \
    board.h \
    dice.h \
    form.h \
    gamewindow.h \
    piece.h

QT += widgets

FORMS += \
    form.ui \
    mainwindow.ui
