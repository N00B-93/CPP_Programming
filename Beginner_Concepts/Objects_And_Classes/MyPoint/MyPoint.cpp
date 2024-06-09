#include <cmath>
#include "MyPoint.hpp"

/**
 * Instantiates a new MyPoint Object with default values.
*/
MyPoint::MyPoint()
{
    xCoord = 0.0;
    yCoord = 0.0;
}

/**
 * Instantiates a MyPoint Object.
 * 
 * @param x The x coordinate of the MyPoint Object.
 * @param y The y coordinate of the MyPoint Object.
*/
MyPoint::MyPoint(double x, double y)
{
    xCoord = x;
    yCoord = y;
}

/**
 * This determines the distance between two MyPoint Objects.
 * 
 * @param myPoint2 The second MyPoint Object.
 * @return The distance between the current MyPoint instance and the second point.
*/
double MyPoint::getDistance(MyPoint myPoint2)
{
    return sqrt(pow(xCoord - myPoint2.xCoord, 2) + pow(yCoord - myPoint2.yCoord, 2));
}
