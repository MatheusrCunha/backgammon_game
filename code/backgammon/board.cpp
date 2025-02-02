#include "board.h"

Board::Board(int width, int height)
    : boardWidth(width), boardHeight(height), boardColor(Qt::lightGray),
      piece(width / 2, height / 2, Qt::white, 1) {}

Board::~Board() {}

void Board::draw(QPainter &painter) {
    // Desenha o fundo do tabuleiro
    painter.setBrush(boardColor);
    painter.drawRect(0, 0, boardWidth, boardHeight);

    // Desenha a barra central
    drawBar(painter);

    QPolygon triangle; //classe do qt que define pontos
    triangle << QPoint(boardWidth / 4, boardHeight / 4)    // Topo
             << QPoint(boardWidth / 4 - 30, boardHeight / 2)  // Base esquerda
             << QPoint(boardWidth / 4 + 30, boardHeight / 2); // Base direita

    painter.setBrush(Qt::blue);  // Define a cor do triângulo
    painter.drawPolygon(triangle);
    piece.draw(painter);
}

void Board::drawBar(QPainter &painter) {
    int barWidth = 20;                          // Largura da barra central
    int barX = boardWidth / 2 - barWidth / 2;   // Posição da barra central
    painter.setBrush(Qt::darkGray);             // Cor da barra
    painter.drawRect(barX, 0, barWidth, boardHeight); //desenha um retangulo
}
