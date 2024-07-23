#include "Lair.h"
#include <iostream>
#include <queue>

Lair::Lair() : treasureHoardDestroyed_(false) {}

void Lair::createTile(int roomNumber) {
    tiles_.emplace_back(Tile(roomNumber));
}

void Lair::connectTiles(int roomNumber1, int roomNumber2, const std::string& direction) {
    for (Tile& tile : tiles_) {
        if (tile.getRoomNumber() == roomNumber1) {
            for (Tile& otherTile : tiles_) {
                if (otherTile.getRoomNumber() == roomNumber2) {
                    tile.connectTo(otherTile, direction);
                    return;
                }
            }
        }
    }
}

bool Lair::isDefeated() const {
    return treasureHoardDestroyed_;
}

Lair::DepthFirstIterator::DepthFirstIterator(Lair& lair) : lair_(lair) {
    visited_.resize(lair_.tiles_.size(), false);
    currentTile_ = lair_.tiles_.begin();
    endTile_ = lair_.tiles_.end();
}

Lair::DepthFirstIterator& Lair::DepthFirstIterator::operator++() {
    if (currentTile_ == endTile_) {
        return *this; // Already at the end
    }

    // Perform depth-first traversal
    // ...

    return *this;
}

const Tile& Lair::DepthFirstIterator::operator*() const {
    return *currentTile_;
}

Lair::BreadthFirstIterator::BreadthFirstIterator(Lair& lair) : lair_(lair) {
    visited_.resize(lair_.tiles_.size(), false);
    currentTile_ = lair_.tiles_.begin();
    endTile_ = lair_.tiles_.end();
    // Initialize queue and perform breadth-first traversal
    // ...
}

Lair::BreadthFirstIterator& Lair::BreadthFirstIterator::operator++() {
    if (currentTile_ == endTile_) {
        return *this; // Already at the end
    }

    // Perform breadth-first traversal
    // ...

    return *this;
}

const Tile& Lair::BreadthFirstIterator::operator*() const {
    return *currentTile_;
}

// Lair::DepthFirstIterator Lair::beginDepthFirst() {
//     return DepthFirstIterator(*this);
// }

// Lair::DepthFirstIterator Lair::endDepthFirst() {
//     return DepthFirstIterator(*this);
// }

// Lair::BreadthFirstIterator Lair::beginBreadthFirst() {
//     return BreadthFirstIterator(*this);
// }

// Lair::BreadthFirstIterator Lair::endBreadthFirst() {
//     return BreadthFirstIterator(*this);
// }

int Lair::getNumTiles() const {
    return tiles_.size();
}

bool Lair::removeTile(int roomNumber) {
    auto it = std::remove_if(tiles_.begin(), tiles_.end(),
        [roomNumber](const Tile& tile) { return tile.getRoomNumber() == roomNumber; });

    if (it != tiles_.end()) {
        tiles_.erase(it, tiles_.end());
        return true;
    }

    return false;
}

bool Lair::addTrapToRoom(int roomNumber, const std::string& trapType) {
    for (Tile& tile : tiles_) {
        if (tile.getRoomNumber() == roomNumber) {
            tile.addTrap(Trap(trapType, 0)); // You can adjust the trap damage as needed
            return true;
        }
    }

    return false;
}
