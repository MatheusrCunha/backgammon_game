#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QGraphicsView>
#include <QGraphicsScene>
#include "board.h"

class GameWindow : public QGraphicsView {
    Q_OBJECT

public:
    GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

private:
    QGraphicsScene *scene;
    Board *board;
};

#endif // GAMEWINDOW_H
