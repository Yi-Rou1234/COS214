#ifndef HERO_H
#define HERO_H

#include <string>
#include "Lair.h" 

class Hero {
public:
    Hero(const std::string& name, int health, int damage);
    int getHealth() const;
    void setHealth(int newHealth);

    void traverseLairDepthFirst(Lair::DepthFirstIterator& iterator);
    void traverseLairBreadthFirst(Lair::BreadthFirstIterator& iterator);

private:
    std::string heroName;
    int heroHealth;
    int heroDamage;
};

#endif // HERO_H
