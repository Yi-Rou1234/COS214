#include <iostream>
#include "Bank.h"
#include "Trap.h"
#include "ResearchLab.h"
#include "PlayerInteraction.h"
#include "Lair.h"

int main() {
    // Initialize game components
    Lair lair;
    std::vector<Trap> traps;
    Bank bank(1000); 
    ResearchLab researchLab(bank);
    PlayerInteraction playerInteraction(bank, researchLab, lair, traps);
    std::string trapType; 

    // Create and connect Tiles
    lair.createTile(1);
    lair.createTile(2);
    lair.createTile(3);
    lair.createTile(4);

    lair.connectTiles(1, 2, "North");
    lair.connectTiles(2, 3, "East");
    lair.connectTiles(3, 4, "South");
    lair.connectTiles(4, 1, "West");

    // std::cout << "Depth-First Traversal:" << std::endl;
    // for (const Tile& tile : lair.beginDepthFirst(), lair.endDepthFirst()) {
    // std::cout << "Room " << tile.getRoomNumber() << std::endl;
    // }


    // std::cout << "Breadth-First Traversal:" << std::endl;
    // for (const Tile& tile : lair.beginBreadthFirst(), lair.endBreadthFirst()) {
    //     std::cout << "Room " << tile.getRoomNumber() << std::endl;
    // }

    // damage trap 
    researchLab.startResearch("DamageTrap", 100, 50);

    // Main game loop
while (true) {
    playerInteraction.displayMenu();
    int choice;
    std::cin >> choice;

    switch (choice) {
        case 1:
            std::cout << "Enter trap type to research: ";
            std::cin >> trapType;
            std::cout << "Enter research cost: ";
            int researchCost;
            std::cin >> researchCost;
            if (researchCost < bank.getCurrentGold()) {
                researchLab.queueResearch(trapType);
                bank.spendGold(researchCost);
            } else {
                bank.spendGold(researchCost);
                std::cout << "\nGame over! Insufficient funds for research." << std::endl;
                return 0;
            }
            std::cout << std::endl;
            break;
        case 2:
            {
                const std::vector<std::string>& queuedResearch = researchLab.getQueuedResearch();
                if (queuedResearch.empty()) {
                    std::cout << "No research tasks in the queue." << std::endl << std::endl;
                } else {
                    std::cout << "Research Queue:" << std::endl;
                    for (const std::string& trap : queuedResearch) {
                        std::cout << "- " << trap << std::endl << std::endl;
                    }
                }
            }
            break;
        case 3:
            std::cout << "Current gold reserves: " << bank.getCurrentGold() << std::endl << std::endl;
            break;
        case 4:
            std::cout << "Enter the amount of gold to earn: ";
            int earnGoldAmount;
            std::cin >> earnGoldAmount;
            bank.earnGold(earnGoldAmount);
            std::cout << "You earned " << earnGoldAmount << " gold. Current gold reserves: " << bank.getCurrentGold() << std::endl << std::endl;
            break;
        case 5:
            playerInteraction.createTile();
            break;
        case 6:
            playerInteraction.removeTile();
            break;
        case 7:
            playerInteraction.addTrapToRoom();
            break;
        case 8:
            std::cout << "Exiting the game.\n" << std::endl;
            return 0;
        default:
            std::cout << "Invalid choice. Please try again.\n" << std::endl;
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            break;
    }
}


    return 0;
}
