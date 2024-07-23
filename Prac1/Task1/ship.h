#ifndef SHIP_H
#define SHIP_H

#include <iostream>
#include <string>
using namespace std;

class Ship {
protected:
    string shipName;
    int shipId;

public:
    Ship(string name, int id);
    string getShipName() const;
    void setShipName(const string& name);
    int getShipId() const;
    void setShipId(int id);
    virtual Ship* clone() const = 0;
    virtual string toString() const = 0;
};

#endif // SHIP_H
