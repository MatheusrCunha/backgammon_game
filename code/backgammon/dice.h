#ifndef DICE_H
#define DICE_H

class Dice {
public:
    Dice();  // Construtor
    int rollDice();  // Rola o dado
    int getDice();  // último valor
    void printDice();  // valor do dado

private:
    int roll = 0;  // Valor do dado
};

#endif // DICE_H
