#ifndef OPENGL_WINDOW_H
#define OPENGL_WINDOW_H

#include "Window.h"
#include "OpenGLPrimitive.h" // Include for specific primitive class

#include <string>
#include <vector>

using namespace std;

class OpenGLWindow : public Window {
private:
    static const int maxPrimitives = 3; 
    int primitiveCount = 0; 

public:
    void addPrimitive(Primitive* primitive) override;
    vector<OpenGLPrimitive*> primitives;

    string toString() const override;
};

#endif 
