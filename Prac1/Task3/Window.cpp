#include "Window.h"

#include <iostream>

int Window::getScreenHeight() const
{
    return screenheight;
}

int Window::getScreenWidth() const
{
    return screenwidth;
}

void Window::setScreenHeight(int height)
{
    screenheight = height;
}

void Window::setScreenWidth(int width)
{
    screenwidth = width;
}

int Window::getPrimitiveCapacity() const
{
    return primitiveCapacity;
}

void Window::setPrimitiveCapacity(int capacity)
{
    primitiveCapacity = capacity;
}

int Window::getPrimitiveCount() const
{
    return primitiveCount;
}

void Window::setPrimitiveCount(int count)
{
    primitiveCount = count;
}