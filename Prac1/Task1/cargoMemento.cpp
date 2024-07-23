#include "cargoMemento.h"

#include <iostream>
#include <string>
using namespace std;

CargoMemento::CargoMemento(string name, int id, int cap, int load, const vector<string>& cargoItems)
    : shipName(name), shipId(id), capacity(cap), currentLoad(load), items(cargoItems) {
        
    }

string CargoMemento::getShipName() const {
    return shipName;
}

int CargoMemento::getShipId() const {
    return shipId;
}

int CargoMemento::getCapacity() const {
    return capacity;
}

int CargoMemento::getCurrentLoad() const {
    return currentLoad;
}

const vector<string>& CargoMemento::getItems() const {
    return items;
}

int CargoMemento::getVersion() const {
    return version;
}

string CargoMemento::toString() const {
    string result = "Ship {" + to_string(shipId) + "}: {" + shipName + "}\n"
                    + "load: {" + to_string(currentLoad) + "}/{" + to_string(capacity) + "}\n"
                    + "Items:\n";
    
    for (size_t i = 0; i < items.size(); ++i) {
        result += "item " + to_string(i + 1) + ": {" + items[i] + "}";
        if (i < items.size() - 1) {
            result += " ";
        }
    }

    return result;
}