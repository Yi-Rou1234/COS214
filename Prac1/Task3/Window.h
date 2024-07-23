#ifndef WINDOW_H
#define WINDOW_H

#include <vector>
#include "Primitive.h"  // Include the Primitive header

class Window {
public:
    int screenheight;
    int screenwidth;
    int primitiveCount;
    int primitiveCapacity;
    vector<Primitive*> primitives;
    virtual void addPrimitive(Primitive* primitive) = 0 ;
    virtual ~Window() {}
    virtual string toString() const = 0;

    int getScreenHeight() const;
    int getScreenWidth() const;
    int getPrimitiveCount() const;
    int getPrimitiveCapacity() const;

    void setScreenHeight(int height);
    void setScreenWidth(int width);
    void setPrimitiveCount(int count);
    void setPrimitiveCapacity(int capacity);
};

#endif 

