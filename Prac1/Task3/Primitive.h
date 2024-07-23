#ifndef PRIMITIVE_H
#define PRIMITIVE_H

#include <string>

using namespace std;

class Primitive {
public:
    string shape;
    void setShape(string shape);
    string getShape();
    virtual string toString() const = 0;
};

#endif  

// +shape: string
// #toString(): string