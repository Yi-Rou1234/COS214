#include "cargoShip.h"

#include <iostream>
#include <string>
using namespace std;

CargoShip::CargoShip(string name, int id, int cap) : Ship(name, id), capacity(cap), currentLoad(0) {
    
}

int CargoShip::getCapacity() const {
    return capacity;
}

void CargoShip::setCapacity(int cap) {
    capacity = cap;
}

int CargoShip::getCurrentLoad() const {
    return currentLoad;
}

void CargoShip::setCurrentLoad(int load) {
    currentLoad = load;
}

const vector<string>& CargoShip::getItems() const {
    return items;
}

void CargoShip::addItem(const string& item) {
    items.push_back(item);
}

void CargoShip::deleteItem(int index) {
    if (index >= 0 && index < items.size()) {
        items.erase(items.begin() + index);
    }
}

Ship* CargoShip::clone() const {
    CargoShip* clonedShip = new CargoShip(shipName, shipId, capacity);
    clonedShip->currentLoad = currentLoad;
    clonedShip->items = items;
    return clonedShip;
}

string CargoShip::toString() const {
    string result = "Ship " + to_string(shipId) + ": " + shipName + "\n";
    result += "Load: " + to_string(currentLoad) + "/" + to_string(capacity) + "\n";
    result += "Items:\n";
    for (size_t i = 0; i < items.size(); ++i) {
        result += "item " + to_string(i + 1) + ": " + items[i] + "\n";
    }
    return result;
}

CargoMemento CargoShip::save(int saveId) const {
    return CargoMemento(shipName, shipId, capacity, currentLoad, items);
}

void CargoShip::restore(const CargoMemento& restorePoint) {
    shipName = restorePoint.getShipName();
    shipId = restorePoint.getShipId();
    capacity = restorePoint.getCapacity();
    currentLoad = restorePoint.getCurrentLoad();
    items = restorePoint.getItems();
}
