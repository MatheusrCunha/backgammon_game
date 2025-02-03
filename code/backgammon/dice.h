#ifndef DICE_H
#define DICE_H

class dice
{
public:
    dice(void);
    ~dice(void);

    int rollDice();
    int getDice();
    void printDice();

private:
    int roll;
};

#endif // DICE_H
