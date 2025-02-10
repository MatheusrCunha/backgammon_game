#ifndef PIECE_H
#define PIECE_H

#include <QGraphicsItem>
#include <QPainter>
#include <QColor>

class Piece : public QGraphicsItem {
public:
    Piece(int x, int y, QColor color);

    void setPosition(int x, int y);  // Define a posição da peça

    QRectF boundingRect() const override;  // Define a área de desenho
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override; // Desenha a peça

private:
    QColor color;      // Cor da peça (branco ou preto)
    int radius = 20; // Raio da peça
};

#endif // PIECE_H
