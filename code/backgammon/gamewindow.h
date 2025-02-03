#ifndef GAMEWINDOW_H
#define GAMEWINDOW_H

#include <QWidget>
#include <QPainter>
#include "board.h"

class GameWindow : public QWidget {  //gamewindow herda qwidget
    Q_OBJECT

public:
     GameWindow(QWidget *parent = nullptr);
    ~GameWindow();

protected:
    void paintEvent(QPaintEvent *event) override;

private:
    Board * _board;
};

#endif // GAMEWINDOW_H
