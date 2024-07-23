#ifndef TILE_H
#define TILE_H

#include <vector>
#include <string>
#include "Trap.h"

class Tile {
public:
    Tile(int roomNumber);
    void connectTo(Tile& otherTile, const std::string& direction);
    int getRoomNumber() const;
    const std::vector<Tile*>& getConnectedTiles() const;
    void addTrap(const Trap& trap);

private:
    int roomNumber_;
    std::vector<Tile*> connectedTiles_;
    std::vector<Trap> traps_;
};

#endif // TILE_H
