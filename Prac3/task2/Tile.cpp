#include "Tile.h"

Tile::Tile(int roomNumber) : roomNumber_(roomNumber) {}

void Tile::connectTo(Tile& otherTile, const std::string& direction) {
    connectedTiles_.push_back(&otherTile);
}

int Tile::getRoomNumber() const {
    return roomNumber_;
}

const std::vector<Tile*>& Tile::getConnectedTiles() const {
    return connectedTiles_;
}
