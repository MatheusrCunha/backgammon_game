#ifndef PIECE_H
#define PIECE_H

#include <QPainter>
#include <QColor>

class Piece {
public:
    Piece(int x, int y, QColor color, int count = 1);

    void setPosition(int x, int y); // Define a posição da peça
    void setColor(QColor color);    // Define a cor da peça
    void setCount(int count);       // Define quantas peças

    void draw(QPainter &painter) const; // Desenha a peça

    int getRadius() { return radius; }

private:
    int x, y;
    QColor color;
    int count;
    int radius = 20; // Raio da peça
};

#endif // PIECE_H
