#ifndef BOARD_H
#define BOARD_H

#include <QGraphicsItem>
#include <QPainter>
#include <QColor>
#include <QGraphicsScene>

class Board : public QGraphicsItem {
public:
    Board(int width = 800, int height = 400);

    QRectF boundingRect() const override;
    void paint(QPainter *painter, const QStyleOptionGraphicsItem *option, QWidget *widget) override;
    void addPieces(); // Adiciona as peças ao tabuleiro

    void movePiece(int player, int fromPoint, int toPoint);  // Move uma peça de um ponto para outro
    bool isValidMove(int player, int fromPoint, int toPoint); // Verifica se o movimento é válido
    void setupInitialPieces(); // Adiciona as peças iniciais no tabuleiro

private:
    int boardWidth;
    int boardHeight;
    QColor boardColor;
    void drawTriangles(QPainter &painter);
    void drawBar(QPainter &painter);
    int currentPlayer;
};

#endif // BOARD_H
