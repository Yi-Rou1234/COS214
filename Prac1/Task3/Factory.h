#ifndef FACTORY_H
#define FACTORY_H

class Window;
class Primitive;

class Factory {
public:
    virtual Window* createWindow() = 0;
    virtual Primitive* createPrimitive() = 0;
    virtual ~Factory() {}
};

#endif


// +createWindow(): window*
// +createPrimitive(): primitive*