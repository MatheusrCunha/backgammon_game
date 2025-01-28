#include "board.h"

Board::Board(int width, int height)
    : boardWidth(width), boardHeight(height), boardColor(Qt::lightGray) {}

Board::~Board() {}

void Board::draw(QPainter &painter) {
    // Desenha o fundo do tabuleiro
    painter.setBrush(boardColor);
    painter.drawRect(0, 0, boardWidth, boardHeight);

    // Desenha a barra central
    drawBar(painter);
}

void Board::drawBar(QPainter &painter) {
    int barWidth = 20;                          // Largura da barra central
    int barX = boardWidth / 2 - barWidth / 2;   // Posição da barra central
    painter.setBrush(Qt::darkGray);
    painter.drawRect(barX, 0, barWidth, boardHeight);
}
