#ifndef PLAYER_H
#define PLAYER_H

#include "piece.h"
#include <QGraphicsSceneMouseEvent>

class Player {
public:
    Player();
    void setSelectedPiece(Piece *piece); // qual peça
    void movePiece(int x, int y);        // Move a peça

private:
    Piece *selectedPiece;  // Peça que o jogador está movendo -- ponteiro para um objeto Piece
};

#endif // PLAYER_H
