#include "gamewindow.h"

GameWindow::GameWindow(QWidget *parent)
    : QWidget(parent), board(900, 400) {
    setWindowTitle("Tabuleiro de Gamão");
    resize(900, 400);
}

void GameWindow::paintEvent(QPaintEvent *event) {
    Q_UNUSED(event);  // Evita warning de parâmetro não utilizado
    QPainter painter(this);
    board.draw(painter);
}
