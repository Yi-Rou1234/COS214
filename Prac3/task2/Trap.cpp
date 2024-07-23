#include "Trap.h"
#include "Tile.h"

// Default constructor
Trap::Trap() : trapType(""), trapDamage(0) {}

// Trap::Trap(int researchCost) {
// }

Trap::Trap(const std::string& type, int damage)
    : trapType(type), trapDamage(damage) {}

const std::string& Trap::getType() const {
    return trapType;
}

int Trap::getDamage() const {
    return trapDamage;
}

void Trap::setType(const std::string& type) {
    trapType = type;
}

void Trap::setDamage(int damage) {
    trapDamage = damage;
}

void Tile::addTrap(const Trap& trap) {
    traps_.push_back(trap);
}
