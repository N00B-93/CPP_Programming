#include <iostream>
#include <iomanip>
#include "MyPoint.hpp"

/**
    This is a program that creates two MyPoint Objects, one with coordinates (0, 0) and the other with coordinates
    (10, 30.5) and then determines the distance between them.
*/

int main(int argc, char const *argv[])
{
    // Creates two MyPoints Objects.
    MyPoint point1 = MyPoint();
    MyPoint point2 = MyPoint(10, 30.5);

    // Displays the distance between the two points.
    std::cout << std::fixed << std::setprecision(2) << "\nThe distance between (" << point1.xCoord << ", " 
    << point1.yCoord << ")" << " and (" << point2.xCoord << ", " 
    << point2.yCoord << ")" << " is: " << MyPoint::getDistance(point1, point2);

    return 0;
}
