#include "Dice.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

using namespace std;

// Construtor
Dice::Dice() {
    // Inicializa o valor com zero, mas NÃO chama srand aqui.
}

// Função para rolar o dado
int Dice::rollDice() {
    roll = (std::rand() % 6) + 1; // Gera um número entre 1 e 6
    return roll;
}

// Retorna o último valor rolado
int Dice::getDice() const {
    return roll;
}

// Exibe o valor do dado
void Dice::printDice() const {
    if (roll > 0) {
        cout << "O dado rolou: " << roll << endl;
    } else {
        cout << "O dado ainda não foi rolado." << endl;
    }
}
