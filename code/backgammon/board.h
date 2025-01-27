#ifndef BOARD_H
#define BOARD_H

#include <QPainter>
#include <QColor>
#include <QVector>

class Board {

public:
    Board(int width = 900, int height = 400);  // Construtor
    ~Board();                                  // Destrutor

    void draw(QPainter &painter);              // Método para desenhar o tabuleiro

private:
    int boardWidth;                            // Largura
    int boardHeight;                           // Altura
    QColor boardColor;

    void drawTriangles(QPainter &painter);
    void drawBar(QPainter &painter);
};

#endif // BOARD_H

