#include "board.h"

Board::Board(int width, int height)
    : boardWidth(width), boardHeight(height), boardColor(Qt::lightGray) {}

QRectF Board::boundingRect() const {
    return QRectF(0, 0, boardWidth, boardHeight);
}

void Board::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *) {
    painter->setBrush(boardColor);
    painter->drawRect(0, 0, boardWidth, boardHeight);

    drawBar(*painter);
    drawTriangles(*painter);
}

void Board::drawBar(QPainter &painter) {
    int barWidth = 20;
    int barX = boardWidth / 2 - barWidth / 2;
    painter.setBrush(Qt::darkGray);
    painter.drawRect(barX, 0, barWidth, boardHeight);
}

void Board::drawTriangles(QPainter &painter) {
    QPolygon triangle;
    int triangleWidth = boardWidth / 12; // Cada triângulo ocupa 1/12 do tabuleiro
    int triangleHeight = boardHeight / 3; // Altura dos triângulos

    // Desenhar os 12 triângulos superiores
    for (int i = 0; i < 12; i++) {
        int xBase = i * triangleWidth;
        triangle.clear();
        triangle << QPoint(xBase, 0)
                 << QPoint(xBase + triangleWidth / 2, triangleHeight)
                 << QPoint(xBase + triangleWidth, 0);

        // Alternando entre vermelho e preto
        painter.setBrush((i % 2 == 0) ? Qt::red : Qt::black);
        painter.drawPolygon(triangle);
    }

    // Desenhar os 12 triângulos inferiores
    for (int i = 0; i < 12; i++) {
        int xBase = i * triangleWidth;
        triangle.clear();
        triangle << QPoint(xBase, boardHeight)
                 << QPoint(xBase + triangleWidth / 2, boardHeight - triangleHeight)
                 << QPoint(xBase + triangleWidth, boardHeight);

        // Alternando entre vermelho e preto
        painter.setBrush((i % 2 == 0) ? Qt::red : Qt::black);
        painter.drawPolygon(triangle);
    }
}

