#include <iostream>
#include <iomanip>
#include "Circle2D.hpp"

int main(int argc, char* const argv[])
{
    // Creating Circle2D objects
    Circle2D c1(2, 2, 5.5);
    Circle2D c2(2, 2, 5.5);
    Circle2D c3(4, 5, 10.5);

    // Displaying c1's area and perimeter
    std::cout << std::fixed << std::setprecision(2) << "\nc1's area: " << c1.getArea() << "\n";
    std::cout << std::fixed << std::setprecision(2) << "\nc1's perimeter: " << c1.getPerimeter() << "\n";

    // Testing c1.contains(3, 3)
    std::cout << "\nc1 contains (3, 3): " << std::boolalpha << c1.contains(3, 3) << "\n";

    // Testing c1.contains(c2)
    std::cout << "\nc1 contains c2: " << std::boolalpha << c1.contains(c2) << "\n";

    // Testing c1.overlaps(c3)
    std::cout << "\nc1 overlaps c3: " << std::boolalpha << c1.overlaps(c3) << "\n";

    return (0);
}
