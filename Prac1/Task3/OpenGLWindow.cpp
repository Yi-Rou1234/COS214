#include "OpenGLWindow.h"
#include <sstream>
#include <iostream>
#include <string>
using namespace std;

void OpenGLWindow::addPrimitive(Primitive* primitive) {
    if (primitiveCount < maxPrimitives) {
        primitives.push_back(dynamic_cast<OpenGLPrimitive*>(primitive));
        primitiveCount++;
    } else {
        std::cout << "Reached maximum number of primitives for OpenGLWindow." << std::endl;
    }
}

string OpenGLWindow::toString() const {
    stringstream ss;
    ss << "OpenGL window " << screenwidth << "x" << screenheight << ":\n";
    
    for (const auto& primitive : primitives) {
        ss << primitive->toString() << "\n";
    }

    return ss.str();
}
