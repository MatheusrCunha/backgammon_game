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

    void draw(QPainter &painter);          // desenha o tabuleiro

    void movePiece(int newPosx, int neyPosy);       // Mover a peça

private:
    int boardWidth;                            //Largura
    int boardHeight;                           //Altura
    QColor boardColor;                        //cor do tabuleiro
    Piece piece;                              //objeto piece para a classe piece

    void drawTriangles(QPainter &painter);
    void drawBar(QPainter &painter);
};

#endif // BOARD_H

