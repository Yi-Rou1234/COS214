#include "VulkanWindow.h"
#include <sstream> 
#include <string>
#include <iostream>
using namespace std; 

void VulkanWindow::addPrimitive(Primitive* primitive) {
    if (primitiveCount < maxPrimitives) {
        // Convert Primitive* to VulkanPrimitive* before adding to the vector
        primitives.push_back(dynamic_cast<VulkanPrimitive*>(primitive));
        primitiveCount++;
    } else {
        cout << "Reached maximum number of primitives for VulkanWindow." << endl;
    }
}

string VulkanWindow::toString() const {
    stringstream ss;
    ss << "Vulkan window " << screenwidth << "x" << screenheight << ":\n";
    
    for (const auto& primitive : primitives) {
        ss << primitive->toString() << "\n";
    }

    return ss.str();
}
