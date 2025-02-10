#include "player.h"

Player::Player() : selectedPiece(nullptr) {}

void Player::setSelectedPiece(Piece *piece) {
    selectedPiece = piece;
}

void Player::movePiece(int x, int y) {
    if (selectedPiece) {
        selectedPiece->setPosition(x, y);
    }
}
