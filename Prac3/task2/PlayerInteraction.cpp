#include "PlayerInteraction.h"
#include "Lair.h"
#include <iostream>

PlayerInteraction::PlayerInteraction(Bank& bank, ResearchLab& researchLab, Lair& lair, std::vector<Trap>& traps)
    : playerBank(&bank), lab(&researchLab), playerLair(&lair), playerTraps(&traps) {
}

void PlayerInteraction::displayMenu() {
    std::cout << "Menu Options:" << std::endl;
    std::cout << "1. Add research task" << std::endl;
    std::cout << "2. Process research queue" << std::endl;
    std::cout << "3. Check gold reserves" << std::endl;
    std::cout << "4. Add gold that were earned" << std::endl;
    std::cout << "5. Create a new tile" << std::endl;
    std::cout << "6. Remove a tile" << std::endl;
    std::cout << "7. Add a trap to a room" << std::endl;
    std::cout << "8. Exit" << std::endl;
    std::cout << "Choose an option: ";

}

void notifyNewTrap(const std::string& trapType) {
    std::cout << "You have unlocked a new trap: " << trapType << std::endl<< std::endl;
}

void PlayerInteraction::createTile() {
    playerLair->createTile(playerLair->getNumTiles() + 1);
    std::cout << "A new tile has been created." << std::endl<< std::endl;
}

void PlayerInteraction::removeTile() {
    int roomNumber;
    std::cout << "Enter the room number to remove: ";
    std::cin >> roomNumber;

    if (playerLair->removeTile(roomNumber)) {
        std::cout << "Tile with room number " << roomNumber << " has been removed." << std::endl<< std::endl;
    } else {
        std::cout << "Tile with room number " << roomNumber << " does not exist." << std::endl<< std::endl;
    }
}

void PlayerInteraction::addTrapToRoom() {
    int roomNumber;
    std::string trapType;

    std::cout << "Enter the room number to add a trap: ";
    std::cin >> roomNumber;
    std::cout << "Enter the trap type: ";
    std::cin >> trapType;

    if (playerLair->addTrapToRoom(roomNumber, trapType)) {
        std::cout << "A " << trapType << " trap has been added to room " << roomNumber << "." << std::endl<< std::endl;
    } else {
        std::cout << "Failed to add trap. Room number " << roomNumber << " does not exist." << std::endl<< std::endl;
    }
}