#include "board.h"
#include <QBrush>

Board::Board(int width, int height)
    : boardWidth(width), boardHeight(height), boardColor(Qt::lightGray) {
}

Board::~Board() {
    // Nada a destruir explicitamente, mas útil se futuramente usar ponteiros
}

void Board::draw(QPainter &painter){

}

void Board::drawTriangles(QPainter &painter){

}

void Board::drawBar(QPainter &painter){

}
