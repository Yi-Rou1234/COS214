#include "Factory.h"
#include "OpenGLFactory.h"
#include "VulkanFactory.h"

#include <iostream>
using namespace std;

int main() {
    // Create an OpenGL factory
    Factory* openglFactory = new OpenGLFactory();
    Window* openglWindow = openglFactory->createWindow();
    Primitive* openglPrimitive = openglFactory->createPrimitive();

    // Set values for the OpenGL primitive
    openglPrimitive->shape = "Triangle";
    static_cast<OpenGLPrimitive*>(openglPrimitive)->xcoord = 100;
    static_cast<OpenGLPrimitive*>(openglPrimitive)->ycoord = 200;

    // Create a Vulkan factory
    Factory* vulkanFactory = new VulkanFactory();
    Window* vulkanWindow = vulkanFactory->createWindow();
    Primitive* vulkanPrimitive = vulkanFactory->createPrimitive();

    // Set values for the Vulkan primitive
    vulkanPrimitive->shape = "Circle";
    static_cast<VulkanPrimitive*>(vulkanPrimitive)->xcoord = 300;
    static_cast<VulkanPrimitive*>(vulkanPrimitive)->ycoord = 400;

    // Populate and display OpenGL window and primitives
    openglWindow->primitives.push_back(openglPrimitive);
    openglWindow->screenwidth = 800;
    openglWindow->screenheight = 600;
    std::cout << "\nan openGL primitive:\n\n" << openglWindow->toString();

    cout << "OpenGL Primitive:\n"
         << "Shape: " << openglPrimitive->shape << "\n"
         << "X coordinate: " << static_cast<OpenGLPrimitive*>(openglPrimitive)->xcoord << "\n"
         << "Y coordinate: " << static_cast<OpenGLPrimitive*>(openglPrimitive)->ycoord << endl;

    // Populate and display Vulkan window and primitives
    vulkanWindow->primitives.push_back(vulkanPrimitive);
    vulkanWindow->screenwidth = 1024;
    vulkanWindow->screenheight = 768;
    std::cout << "\nand a wulkan primative:\n\n"<< vulkanWindow->toString();

    cout << "Vulkan Primitive:\n"
         << "Shape: " << vulkanPrimitive->shape << "\n"
         << "X coordinate: " << static_cast<VulkanPrimitive*>(vulkanPrimitive)->xcoord << "\n"
         << "Y coordinate: " << static_cast<VulkanPrimitive*>(vulkanPrimitive)->ycoord << endl;
    
    // Clean up
    delete openglWindow;
    delete vulkanWindow;
    delete openglFactory;
    delete vulkanFactory;

    return 0;
}


// #include "Factory.h"
// #include "OpenGLFactory.h"
// #include "VulkanFactory.h"

// #include <iostream>
// using namespace std;

// int main() {
//     // Create an OpenGL factory
//     Factory* openglFactory = new OpenGLFactory();
//     Window* openglWindow = openglFactory->createWindow();
//     Primitive* openglPrimitive = openglFactory->createPrimitive();

//     // Set values for the OpenGL primitive
//     //openglPrimitive->shape = "Triangle";
//     //static_cast<OpenGLPrimitive*>(openglPrimitive)->xcoord = 100;
//     //static_cast<OpenGLPrimitive*>(openglPrimitive)->ycoord = 200;


//     // Create a Vulkan factory
//     Factory* vulkanFactory = new VulkanFactory();
//     Window* vulkanWindow = vulkanFactory->createWindow();
//     Primitive* vulkanPrimitive = vulkanFactory->createPrimitive();
//     OpenGLPrimitive* openglPrimitive2 = new OpenGLPrimitive();

//     // Set values for the Vulkan primitive
//     vulkanPrimitive->shape = "Circle";
//     static_cast<VulkanPrimitive*>(vulkanPrimitive)->xcoord = 300;
//     static_cast<VulkanPrimitive*>(vulkanPrimitive)->ycoord = 400;

//     // Populate and display OpenGL window and primitives
//     //openglWindow->primitives.push_back(openglPrimitive);
//     openglPrimitive2->setShape("Square");
//     openglPrimitive2->setxcoord(100);
//     openglPrimitive2->setycoord(2000);

//     openglWindow->addPrimitive(openglPrimitive2);
//     openglWindow->setScreenWidth(800);
//     openglWindow->setScreenHeight(600);
    


//     std::cout << openglWindow->toString() << std::endl;

//     cout << "OpenGL Primitive:\n"
//          << "Shape: " << openglPrimitive->shape << "\n"
//          << "X coordinate: " << static_cast<OpenGLPrimitive*>(openglPrimitive)->xcoord << "\n"
//          << "Y coordinate: " << static_cast<OpenGLPrimitive*>(openglPrimitive)->ycoord << endl;

//     // Populate and display Vulkan window and primitives
//     vulkanWindow->primitives.push_back(vulkanPrimitive);
//     vulkanWindow->screenwidth = 1024;
//     vulkanWindow->screenheight = 768;
//     std::cout << vulkanWindow->toString() << std::endl;

//     cout << "Vulkan Primitive:\n"
//          << "Shape: " << vulkanPrimitive->shape << "\n"
//          << "X coordinate: " << static_cast<VulkanPrimitive*>(vulkanPrimitive)->xcoord << "\n"
//          << "Y coordinate: " << static_cast<VulkanPrimitive*>(vulkanPrimitive)->ycoord << endl;
    
//     // Clean up
//     delete openglWindow;
//     delete vulkanWindow;
//     delete openglFactory;
//     delete vulkanFactory;

//     return 0;
// }