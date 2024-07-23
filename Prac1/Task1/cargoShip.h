#ifndef CARGOSHIP_H
#define CARGOSHIP_H

#include "ship.h"
#include "cargoMemento.h"

#include <vector>
#include <iostream>
#include <string>
using namespace std;

class CargoShip : public Ship {
    private:
        int capacity;
        int currentLoad;
        vector<string> items;

    public:
        CargoShip(string name, int id, int cap);
        int getCapacity() const;
        void setCapacity(int cap);
        int getCurrentLoad() const;
        void setCurrentLoad(int load);
        const vector<string>& getItems() const;
        void addItem(const string& item);
        void deleteItem(int index);
        Ship* clone() const override;
        string toString() const override;
        CargoMemento save(int saveId) const;
        void restore(const CargoMemento& restorePoint);
};

#endif 
