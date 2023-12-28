// main.cpp
#include <iostream>
#include "shapes.h"

int main() {
    std::cout << "Shape Management System" << std::endl;

    // Create instances of shapes
    Circle circle(5.0);
    Rectangle rectangle(4.0, 6.0);

    // Display information about the shapes
    circle.display();
    rectangle.display();

    return 0;
}
