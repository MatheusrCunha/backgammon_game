#ifndef BOARD_H
#define BOARD_H

#include <QPainter> //desenha widgets
#include <QColor>   //Cores
#include <QMouseEvent>
#include "piece.h"

class Board {

public:
    Board(int width = 800, int height = 400);  // Construtor
    ~Board();                                  // Destrutor

    void draw(QPainter &painter);              // desenha o tabuleiro, painter é passado como referência

private:
    int boardWidth;                            // Largura
    int boardHeight;                           // Altura
    QColor boardColor;                        // cor do tabuleiro
    Piece piece;

    void drawTriangles(QPainter &painter); //desenha tabuleiro
    void drawBar(QPainter &painter);  // desenha barra
};

#endif // BOARD_H

