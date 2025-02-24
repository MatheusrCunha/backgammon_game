#include "player.h"

Player::Player() : selectedPiece(nullptr) {} //indica que nenhuma peça está selecionada inicialmente.

void Player::setSelectedPiece(Piece *piece) {
    selectedPiece = piece;
}

void Player::movePiece(int x, int y) {
    if (selectedPiece) {
        selectedPiece->setPosition(x, y);
    }
}
