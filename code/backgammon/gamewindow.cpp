#include "gamewindow.h"
#include "piece.h"
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent> // Adicione esta linha
#include "dice.h"
#include <iostream>

using namespace std;

GameWindow::GameWindow(QWidget *parent) : QGraphicsView(parent) {
    setWindowTitle("Tabuleiro de Gamão");

    scene = new QGraphicsScene(this);
    setScene(scene);

    // Criar o tabuleiro e adicionar à cena
    board = new Board(800, 400);
    scene->addItem(board);

    // Criar a peça e adicionar à cena
    piece = new Piece(100, 100, Qt::white);  // Posição inicial da peça
    scene->addItem(piece);

    // Habilitar a seleção de itens na cena
    piece->setFlag(QGraphicsItem::ItemIsMovable);  // Tornar a peça movível
    piece->setFlag(QGraphicsItem::ItemSendsGeometryChanges);  // Para notificar quando a posição mudar

    Dice d1, d2;
    int roll1 = d1.rollDice();
    int roll2 = d2.rollDice();
    std::cout << "Dados rolados: " << roll1 << " e " << roll2 << std::endl;

}

GameWindow::~GameWindow() {
    delete scene;
}

// Lidar com o clique do mouse para selecionar a peça
void GameWindow::mousePressEvent(QMouseEvent *event) {
    QGraphicsView::mousePressEvent(event);

}

// Lidar com o movimento do mouse
void GameWindow::mouseMoveEvent(QMouseEvent *event) {
    QGraphicsView::mouseMoveEvent(event);

}
