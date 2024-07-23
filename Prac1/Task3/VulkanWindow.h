#ifndef VULKAN_WINDOW_H
#define VULKAN_WINDOW_H

#include "Window.h"
#include "VulkanPrimitive.h"
#include <string>

using namespace std;

class VulkanWindow : public Window {
private:
    static const int maxPrimitives = 9; 
    int primitiveCount = 0; 

public:
    void addPrimitive(Primitive* primitive) override;
    vector<VulkanPrimitive*> primitives;
    string toString() const override;
};

#endif 