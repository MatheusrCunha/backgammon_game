#include "gamewindow.h"

GameWindow::GameWindow(QWidget *parent)
    : QWidget(parent){
    _board = new Board(800, 400);
    setWindowTitle("Gamão");
    resize(800, 400);
}

GameWindow::~GameWindow() {
    delete _board;  // Libera a memória
}

void GameWindow::paintEvent(QPaintEvent *event) {
     QPainter painter(this);
    _board->draw(painter);
}


