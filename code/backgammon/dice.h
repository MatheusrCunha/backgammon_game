#ifndef DICE_H
#define DICE_H

#include <cstdlib>
#include <ctime>

using namespace std;

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
