# Task 3: Abstract Factory 

This repository demonstrates the implementation of the Abstract Factory design pattern in C++. The code provides a framework for creating windows and primitives in different graphics APIs, specifically `OpenGL` and `Vulkan`. The Abstract Factory pattern allows you to create families of related objects without specifying their concrete classes, promoting flexibility and modularity in your codebase.

## Directory Structure
The repository is organized as follows:

- `Factory.cpp` and `Factory.h`: Defines the base Factory class with abstract methods for creating windows and primitives.

- `OpenGLFactory.cpp` and `OpenGLFactory.h`: Implements the OpenGLFactory class, which derives from Factory and provides concrete methods for creating OpenGL windows and primitives.

- `VulkanFactory.cpp` and `VulkanFactory.h`: Implements the VulkanFactory class, similar to OpenGLFactory, for creating Vulkan windows and primitives.

- `Primitive.cpp` and `Primitive.h`: Defines the Primitive class, which serves as the base class for various types of primitives.

- `OpenGLPrimitive.cpp` and `OpenGLPrimitive.h`: Implements the OpenGLPrimitive class, which derives from Primitive and represents OpenGL-specific primitives.

- `VulkanPrimitive.cpp` and `VulkanPrimitive.h`: Implements the VulkanPrimitive class, similar to OpenGLPrimitive, for Vulkan-specific primitives.

- `Window.cpp` and `Window.h`: Defines the Window class, which represents a graphical window and contains a collection of primitives.

- `OpenGLWindow.cpp` and `OpenGLWindow.h`: Implements the OpenGLWindow class, which derives from Window and represents an OpenGL-specific window.

- `VulkanWindow.cpp` and `VulkanWindow.h`: Implements the VulkanWindow class, similar to OpenGLWindow, for Vulkan-specific windows.

## How to Build and Run
To compile and run the code, follow these steps:

1. Clone the Repository: Clone this repository to your local machine.

2. Navigate to the Source Directory: Open a terminal/command prompt and navigate to the directory containing the source code.

3. Compile the Code: Use a C++ compiler to compile the code. For example:

    ```
    g++ -o main Factory.cpp OpenGLFactory.cpp VulkanFactory.cpp Primitive.cpp OpenGLPrimitive.cpp VulkanPrimitive.cpp Window.cpp OpenGLWindow.cpp VulkanWindow.cpp main.cpp
    ```

Replace g++ with your preferred compiler and adjust the filenames accordingly.

4. Run the Executable: Execute the compiled binary:

    ```
    ./main
    ```

This will run the program and demonstrate the creation of windows and primitives using both OpenGL and Vulkan factories.

## Credits

Cherry Cheung 21524892
Yi-Rou Hung 22561154
