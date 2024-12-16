#ifndef BOARD_H
#define BOARD_H

#include <QWidget>

class board
{

private:



public:
    board();
    ~board();

    int movepieceBlack(int x, int y);

    int numpiecesBlack(int x);
    int numpiecesWhite(int y);
};

#endif // BOARD_H
