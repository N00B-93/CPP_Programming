#include <iostream>
#include <iomanip>
#include "Circle.hpp"
#include "Rectangle.hpp"

int main()
{
    Circle circle(0, 0, 5.0); // Circle with center at (0, 0) and radius 5.0
    Rectangle rectangle(10, 5); // Rectangle with width 10 and length 5
    
    // Displays the properties of the Circle.
    std::cout << "\nCircle:" << std::endl;
    std::cout << "Center X: " << circle.getCenterX() << ", Center Y: " << circle.getCenterY() << std::endl;
    std::cout << "Radius: " << circle.getRadius() << std::endl;
    std::cout << "Area: " << std::fixed << std::setprecision(2) << circle.getArea() << std::endl;

    // Displays the properties of the Rectangle.
    std::cout << "\nRectangle:" << std::endl;
    std::cout << "Width: " << rectangle.getWidth() << ", Length: " << rectangle.getLength() << std::endl;
    std::cout << "Area: " << std::fixed << std::setprecision(2) << rectangle.getArea() << std::endl;

    return (0);
}
