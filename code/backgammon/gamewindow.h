#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include <QGraphicsItem>
#include "board.h"
#include "piece.h"

class GameWindow : public QGraphicsView {
    Q_OBJECT

public:
    explicit GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

protected:
    void mousePressEvent(QMouseEvent *event) override;  // Declarando mousePressEvent
    void mouseMoveEvent(QMouseEvent *event) override;   // Declarando mouseMoveEvent
    void mouseReleaseEvent(QMouseEvent *event) override;

private:
    QGraphicsScene *scene;
    Board *board;
    Piece *piece;
};

#endif // GAMEWINDOW_H
