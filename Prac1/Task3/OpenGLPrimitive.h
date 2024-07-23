#ifndef OPENGL_PRIMITIVE_H
#define OPENGL_PRIMITIVE_H

#include "Primitive.h"

#include <string>

using namespace std; 

class OpenGLPrimitive : public Primitive {
public:
    int xcoord;
    int ycoord;

    void setxcoord(int xcoord);
    void setycoord(int ycoord);
    int getxcoord() const;
    int getycoord() const;
    string toString() const override;
};

#endif 

// +xcoord: int
// +ycoord: int