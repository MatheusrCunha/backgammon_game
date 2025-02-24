#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "board.h"
#include "piece.h"

// Classe que representa a janela principal do jogo de Gamão
class GameWindow : public QGraphicsView {
    Q_OBJECT  // Macro necessária para suportar sinais e slots no Qt

public:

    explicit GameWindow(QWidget *parent = nullptr); // Construtor da classe, recebe um ponteiro opcional para um widget pai

    ~GameWindow();

     //Eles são herdados da classe QGraphicsView, que os define como protected.
     //O Qt os chama automaticamente, então não faz sentido torná-los public

protected:

    void mousePressEvent(QMouseEvent *event) override; // Evento acionado quando o usuário pressiona o botão do mouse

    void mouseMoveEvent(QMouseEvent *event) override; // Evento acionado quando o usuário move o mouse com um botão pressionado

    void mouseReleaseEvent(QMouseEvent *event) override;  // Evento acionado quando o usuário solta o botão do mouse

private:
    QGraphicsScene *scene; // Cena
    Board *board;          // Objeto do tabuleiro de Gamão
    Piece *piece;          // Objeto representando uma peça do jogo
};

#endif // GAMEWINDOW_H
