#include "OpenGLPrimitive.h"
#include <sstream> 
#include <string>

using namespace std;

string OpenGLPrimitive::toString() const {
    stringstream ss;
    ss << "OpenGL " << shape << ":\nX coordinate: " << xcoord
       << "\nY coordinate: " << ycoord;

    return ss.str();
}

void OpenGLPrimitive::setxcoord(int x) {
    xcoord = x;
}

void OpenGLPrimitive::setycoord(int y) {
    ycoord = y;
}


int OpenGLPrimitive::getxcoord() const {
    return xcoord;
}

int OpenGLPrimitive::getycoord() const {
    return ycoord;
}