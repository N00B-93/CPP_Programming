#include <cmath>
#include "MyPoint.hpp"

/**
 * Intsantiates a new MyPoint Object with default values.
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
 * @param myPoint1 The first MyPoint Object.
 * @param myPoint2 the second MyPoint Object.
 * @return The distance between myPoint1 and myPoint2.
*/
double MyPoint::getDistance(MyPoint mypoint1, MyPoint myPoint2)
{
    return sqrt(pow(mypoint1.xCoord - myPoint2.xCoord, 2) + pow(mypoint1.yCoord - myPoint2.yCoord, 2));
}
