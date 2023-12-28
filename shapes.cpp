// shapes.cpp
#include <iostream>
#include "shapes.h"

// Circle implementation
Circle::Circle(double r) : radius(r) {}

double Circle::area() const {
    return 3.14 * radius * radius;
}

void Circle::display() const {
    std::cout << "Circle - Radius: " << radius << ", Area: " << area() << std::endl;
}

// Rectangle implementation
Rectangle::Rectangle(double l, double w) : length(l), width(w) {}

double Rectangle::area() const {
    return length * width;
}

void Rectangle::display() const {
    std::cout << "Rectangle - Length: " << length << ", Width: " << width << ", Area: " << area() << std::endl;
}
