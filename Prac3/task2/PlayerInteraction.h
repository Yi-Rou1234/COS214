#ifndef PLAYER_INTERACTION_H
#define PLAYER_INTERACTION_H

#include <vector>
#include <string>

// Forward declarations for classes to break circular dependencies
class Bank;
class ResearchLab;
class Lair;
class Trap;

class PlayerInteraction {
public:
    PlayerInteraction(Bank& bank, ResearchLab& researchLab, Lair& lair, std::vector<Trap>& traps);

    // Declare functions for handling player interaction
    void displayMenu();
    void notifyNewTrap(const std::string& trapType);
    void createTile();
    void removeTile();
    void addTrapToRoom();
    
private:
    Bank* playerBank;
    ResearchLab* lab;
    Lair* playerLair;
    std::vector<Trap>* playerTraps;
};

#endif // PLAYER_INTERACTION_H
