#include "VulkanPrimitive.h"

#include <string>
#include <sstream> 

using namespace std;


string VulkanPrimitive::toString() const {
    stringstream ss;
    ss << "Vulkan " << shape << ":\nX coordinate: " << xcoord
       << "\nY coordinate: " << ycoord;

    return ss.str();
}

void VulkanPrimitive::setxcoord(float x) {
    xcoord = x;
}

void VulkanPrimitive::setycoord(float y) {
    ycoord = y;
}

float VulkanPrimitive::getxcoord() const {
    return xcoord;
}

float VulkanPrimitive::getycoord() const {
    return ycoord;
}