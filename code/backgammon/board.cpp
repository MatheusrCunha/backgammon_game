#include "board.h"
#include <QGraphicsScene>

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
    int triangleWidth = boardWidth / 14;  // Largura do triângulo
    int triangleHeight = boardHeight / 3; // Altura do triângulo
    int barWidth = 20;                    // Largura da barra central
    int barX = boardWidth / 2 - barWidth / 2; // Posição X da barra central
    int margin = boardWidth / 28;          // Margem para alinhamento

    // Desenhar os 6 triângulos superiores (esquerda da barra)
    for (int i = 0; i < 6; i++) {
        int xBase = i * triangleWidth + margin;
        triangle.clear();
        triangle << QPoint(xBase, 0)
                 << QPoint(xBase + triangleWidth / 2, triangleHeight)
                 << QPoint(xBase + triangleWidth, 0);

        painter.setBrush((i % 2 == 0) ? Qt::red : Qt::black);
        painter.drawPolygon(triangle);
    }

    // Desenhar os 6 triângulos superiores (direita da barra)
    for (int i = 0; i < 6; i++) {
        int xBase = barX + barWidth + i * triangleWidth + margin; // Pular a barra
        triangle.clear();
        triangle << QPoint(xBase, 0)
                 << QPoint(xBase + triangleWidth / 2, triangleHeight)
                 << QPoint(xBase + triangleWidth, 0);

        painter.setBrush((i % 2 == 0) ? Qt::red : Qt::black);
        painter.drawPolygon(triangle);
    }

    // Desenhar os 6 triângulos inferiores (esquerda da barra)
    for (int i = 0; i < 6; i++) {
        int xBase = i * triangleWidth + margin;
        triangle.clear();
        triangle << QPoint(xBase, boardHeight)
                 << QPoint(xBase + triangleWidth / 2, boardHeight - triangleHeight)
                 << QPoint(xBase + triangleWidth, boardHeight);

        painter.setBrush((i % 2 == 0) ? Qt::red : Qt::black);
        painter.drawPolygon(triangle);
    }

    // Desenhar os 6 triângulos inferiores (direita da barra)
    for (int i = 0; i < 6; i++) {
        int xBase = barX + barWidth + i * triangleWidth + margin; // Pular a barra
        triangle.clear();
        triangle << QPoint(xBase, boardHeight)
                 << QPoint(xBase + triangleWidth / 2, boardHeight - triangleHeight)
                 << QPoint(xBase + triangleWidth, boardHeight);

        painter.setBrush((i % 2 == 0) ? Qt::red : Qt::black);
        painter.drawPolygon(triangle);
    }
}



