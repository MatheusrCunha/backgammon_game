#include "piece.h"
#include <QBrush>

Piece::Piece(int x, int y, QColor color, QGraphicsItem *parent)
    : QGraphicsEllipseItem(0, 0, 40, 40, parent), pieceCor(color), _count(1) {
    setBrush(QBrush(pieceCor)); // Define a cor inicial da peça
    setPos(x, y); // Define a posição inicial
}

void Piece::setColor(QColor color) {
    pieceCor = color;
    setBrush(QBrush(pieceCor));
}

void Piece::setCount(int count) {
    this->_count = count;
}
