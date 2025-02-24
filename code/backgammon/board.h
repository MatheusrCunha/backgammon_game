#ifndef BOARD_H
#define BOARD_H

#include <QGraphicsItem>   //  gráfico
#include <QPainter>        // Usado para desenhar o tabuleiro
#include <QColor>
#include <QGraphicsScene>

class Board : public QGraphicsItem {
public:

    Board(int width = 800, int height = 400);

    QRectF boundingRect() const override; // limite do tabuleiro

    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override; // desenha o tabuleiro na tela

    void setupInitialPieces(); // peças no tabuleiro

private:
    int boardWidth;   // Largura do tabuleiro
    int boardHeight;  // Altura do tabuleiro
    QColor boardColor; // Cor do tabuleiro

    void drawTriangles(QPainter &painter); // desenha os triângulos característicos do tabuleiro de Gamão


    void drawBar(QPainter &painter); //  desenhar a barra  do tabuleiro

    //int currentPlayer; // Guarda o jogador atual
};

#endif
