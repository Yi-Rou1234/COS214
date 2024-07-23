#ifndef BANK_H
#define BANK_H

class Bank {
public:
    Bank();
    Bank(int initialGold);

    int getCurrentGold() const;
    bool spendGold(int amount);
    void earnGold(int amount);
    bool isOutOfGold() const;

private:
    int goldReserves;
};

#endif // BANK_H