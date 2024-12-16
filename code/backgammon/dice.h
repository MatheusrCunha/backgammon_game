#ifndef DICE_H
#define DICE_H

#include <QObject.h>


class Dice
{

    QObject;

private:


public:
    Dice();
    ~Dice();

    int rollDice();
    int faceValue();

};

#endif // DICE_H
