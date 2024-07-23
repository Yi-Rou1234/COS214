#include "ship.h"

#include <iostream>
#include <string>
using namespace std;

Ship::Ship(string name, int id) : shipName(name), shipId(id) {

}

string Ship::getShipName() const {
    return shipName;
}

void Ship::setShipName(const string& name) {
    shipName = name;
}

int Ship::getShipId() const {
    return shipId;
}

void Ship::setShipId(int id) {
    shipId = id;
}
