#include "piece.h"

Piece::Piece(int x, int y, QColor color)
    : color(color) {
    setPos(x, y);  //  Define a posição inicial diretamente no `QGraphicsItem`
}

void Piece::setPosition(int x, int y) {
    setPos(x, y);  // Atualiza a posição da peça
}

QRectF Piece::boundingRect() const {
    return QRectF(-radius, -radius, 2 * radius, 2 * radius);
}

void Piece::paint(QPainter *painter, const QStyleOptionGraphicsItem *, QWidget *) {
    painter->setBrush(color);
    painter->drawEllipse(QPointF(0, 0), radius, radius);  // Desenha no centro do item
}
