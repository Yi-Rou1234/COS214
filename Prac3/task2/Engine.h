#ifndef ENGINE_H
#define ENGINE_H

#include "Bank.h"
#include "ResearchLab.h"
#include "Trap.h"
#include "Hero.h"
#include <vector>

class Engine {
public:
    Engine(Bank& bank, ResearchLab& researchLab);

    // Function to update the game state (e.g., handle research completion, hero interactions)
    void update();

    // Function to handle hero interactions with traps
    void heroInteractWithTraps(std::vector<Hero>& heroes, std::vector<Trap>& traps);

private:
    Bank& bank;                     // Reference to the Bank class
    ResearchLab& researchLab; // Reference to the ResearchLaboratory class
};

#endif // ENGINE_H
