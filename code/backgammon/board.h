#ifndef BOARD_H
#define BOARD_H

#include <QGraphicsItem>
#include <QPainter>
#include <QColor>
#include "piece.h"

class Board : public QGraphicsItem {
public:
    Board(int width = 800, int height = 400);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;

private:
    int boardWidth;
    int boardHeight;
    QColor boardColor;
    void drawTriangles(QPainter &painter);
    void drawBar(QPainter &painter);

    Piece *selectedPiece = nullptr; // Ponteiro para a peça selecionada
};

#endif // BOARD_H
