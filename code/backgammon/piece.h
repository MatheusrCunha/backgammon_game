#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsEllipseItem>
#include <QColor>

class Piece : public QGraphicsEllipseItem {
public:
    Piece(int _x, int _y, QColor _color, QGraphicsItem *parent = nullptr);

    void setColor(QColor color);  // Define a cor da peça
    void setCount(int count);     // Define quantas peças estão empilhadas

private:
    QColor pieceCor;
    int _count;
};

#endif // PIECE_H
