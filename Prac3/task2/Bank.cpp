#include "Bank.h"
Bank::Bank() {
}

Bank::Bank(int initialGold)
    : goldReserves(initialGold) {
}

int Bank::getCurrentGold() const {
    return goldReserves;
}

bool Bank::spendGold(int amount) {
    if (goldReserves >= amount) {
        goldReserves -= amount;
        return true; 
    }
    return false; 
}

void Bank::earnGold(int amount) {
    goldReserves += amount;
}

bool Bank::isOutOfGold() const {
    return (goldReserves <= 0);
}
