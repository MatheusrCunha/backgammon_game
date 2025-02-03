#include "piece.h"

Piece::Piece(int x, int y, QColor color, int count)
    : x(x), y(y), color(color), count(count) {}

void Piece::draw(QPainter &painter) const {

    painter.setBrush(color);
    painter.setPen(Qt::black);

    painter.drawEllipse(QPoint(x, y), radius, radius);
}
