#ifndef VULKAN_FACTORY_H
#define VULKAN_FACTORY_H

#include "Factory.h"
#include "VulkanWindow.h"   
#include "VulkanPrimitive.h" 

class VulkanFactory : public Factory {
public:
    Window* createWindow() override;
    Primitive* createPrimitive() override;
};

#endif 


// +createWindow(): window*
// +createPrimitive(): primitive*