#ifndef VULKAN_PRIMITIVE_H
#define VULKAN_PRIMITIVE_H

#include "Primitive.h"
#include <string>

using namespace std;

class VulkanPrimitive : public Primitive {
public:
    float xcoord;
    float ycoord;
    void setxcoord(float xcoord);
    void setycoord(float ycoord);
    float getxcoord() const;
    float getycoord() const;
    string toString() const override;
};

#endif  

// +xcoord: float
// +ycoord: float
