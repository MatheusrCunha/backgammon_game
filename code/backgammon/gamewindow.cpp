#include "gamewindow.h"
#include <QGraphicsSceneMouseEvent>
#include <QMouseEvent> // Adicione esta linha

using namespace std;

GameWindow::GameWindow(QWidget *parent) : QGraphicsView(parent) {
    setWindowTitle("Tabuleiro de Gamão");

    scene = new QGraphicsScene(this);
    setScene(scene);

    board = new Board(1200, 600); // Criar o tabuleiro e adicionar à cena
    scene->addItem(board);

    piece = new Piece(100, 100, Qt::white);  // Posição inicial da peça
    scene->addItem(piece);

    //Define que o item pode ser movido com o mouse dentro da cena (QGraphicsScene).
    //Faz com que o próprio Qt trate automaticamente o movimento do item quando o usuário clica e arrasta.

    piece->setFlag(QGraphicsItem::ItemIsMovable);  // Tornar a peça movível
    piece->setFlag(QGraphicsItem::ItemSendsGeometryChanges);  // Para notificar quando a posição mudar

}

GameWindow::~GameWindow() {
    delete scene;
}

void GameWindow::mousePressEvent(QMouseEvent *event) {  //clique do mouse para selecionar a peça
    QGraphicsView::mousePressEvent(event);

}

// Lidar com o movimento do mouse
void GameWindow::mouseMoveEvent(QMouseEvent *event) {
    QGraphicsView::mouseMoveEvent(event);

}
void GameWindow::mouseReleaseEvent(QMouseEvent *event) {
    QGraphicsView::mouseReleaseEvent(event);
}
