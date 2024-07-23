#ifndef OPENGL_FACTORY_H
#define OPENGL_FACTORY_H

#include "Factory.h"
#include "OpenGLWindow.h"  
#include "OpenGLPrimitive.h" 

class OpenGLFactory : public Factory {
public:
    Window* createWindow() override;
    Primitive* createPrimitive() override;
};

#endif  


// +createWindow(): window*
// +createPrimitive(): primitive*