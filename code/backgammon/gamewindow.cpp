#include "gamewindow.h"

GameWindow::GameWindow(QWidget *parent) : QGraphicsView(parent) {
    setWindowTitle("Tabuleiro de Gamão");

    scene = new QGraphicsScene(this);
    setScene(scene);

    board = new Board(800, 400);
    scene->addItem(board);

    // Criando uma peça e adicionando à cena
    Piece *piece = new Piece(100, 100, Qt::white);
    scene->addItem(piece);
}

GameWindow::~GameWindow() {
    delete scene;
}
