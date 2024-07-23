#ifndef LAIR_H
#define LAIR_H

#include <vector>
#include <queue>
#include "Tile.h"

class Lair {
public:
    Lair();

    void createTile(int roomNumber);
    void connectTiles(int roomNumber1, int roomNumber2, const std::string& direction);
    bool isDefeated() const;
    int getNumTiles() const;
    bool removeTile(int roomNumber);
    bool addTrapToRoom(int roomNumber, const std::string& trapType);

    class DepthFirstIterator {
    public:
        DepthFirstIterator(Lair& lair);
        DepthFirstIterator& operator++(); // Pre-increment operator
        const Tile& operator*() const;
        bool operator!=(const DepthFirstIterator& other) const;

    private:
        Lair& lair_;
        std::vector<bool> visited_;
        std::vector<Tile>::const_iterator currentTile_;
        std::vector<Tile>::const_iterator endTile_;
    };

    class BreadthFirstIterator {
    public:
        BreadthFirstIterator(Lair& lair);
        BreadthFirstIterator& operator++(); // Pre-increment operator
        const Tile& operator*() const;
        bool operator!=(const BreadthFirstIterator& other) const;

    private:
        Lair& lair_;
        std::vector<bool> visited_;
        std::vector<Tile>::const_iterator currentTile_;
        std::vector<Tile>::const_iterator endTile_;
        std::queue<std::vector<Tile>::const_iterator> queue_;
    };

    DepthFirstIterator beginDepthFirst() {
        return DepthFirstIterator(*this);
    }

    DepthFirstIterator endDepthFirst() {
        return DepthFirstIterator(*this);
    }

    BreadthFirstIterator beginBreadthFirst() {
        return BreadthFirstIterator(*this);
    }

    BreadthFirstIterator endBreadthFirst() {
        return BreadthFirstIterator(*this);
    }

private:
    std::vector<Tile> tiles_;
    bool treasureHoardDestroyed_;
};

#endif // LAIR_H
