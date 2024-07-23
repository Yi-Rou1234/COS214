#ifndef CARGOMEMENTO_H
#define CARGOMEMENTO_H

#include <string>
#include <vector>
using namespace std;

class CargoMemento {
    private:
        string shipName;
        int shipId;
        int capacity;
        int currentLoad;
        vector<string> items;
        int version;

    public:
        CargoMemento(string name, int id, int cap, int load, const vector<string>& cargoItems);
        string getShipName() const;
        int getShipId() const;
        int getCapacity() const;
        int getCurrentLoad() const;
        int getVersion() const;
        const vector<string>& getItems() const;
        string toString() const; // Added toString method
};

#endif
