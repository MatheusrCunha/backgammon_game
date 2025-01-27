#ifndef PIECE_H
#define PIECE_H

#include <QPainter>
#include <QColor>

class Piece {

public:
    Piece(int x, int y, QColor color, int count = 1);

    void setPosition(int x, int y);      // Define a posição da peça
    void setColor(QColor color);        // Define a cor da peça
    void setCount(int count);           // Define o número de peças empilhadas

    void draw(QPainter &painter) const; // Desenha a peça no tabuleiro

private:
    int x, y;         // Coordenadas da peça
    QColor color;     // Cor da peça
    int count;        // Número de peças empilhadas
    static constexpr int radius = 20; // Raio de cada peça
};

#endif // PIECE_H
