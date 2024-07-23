#ifndef STORYTELLER_H
#define STORYTELLER_H

#include <vector>
#include "Hero.h" 

class Storyteller {
public:
    Storyteller();

    void createWaveOfHeroes();
    void simulateHeroActions();
    bool isWaveDefeated();

private:
    std::vector<Hero> waveOfHeroes;
    bool waveDefeated;
};

#endif // STORYTELLER_H
