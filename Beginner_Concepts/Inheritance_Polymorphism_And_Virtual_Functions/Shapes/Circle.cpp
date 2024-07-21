#include "Circle.hpp"
#define PI 3.14159

// No-arg constructor.
Circle::Circle(){};

/**
 * Instantiates a new Circle.
 * 
 * @param xCoord The x-coordinate of the center of the Circle.
 * @param yCoord The y-coordinate of the center of the Circle.
 * @param radius The radius of the circle.
 */
Circle::Circle(double xCoord, double yCoord, double rad): centerX(xCoord), centerY(yCoord), radius(rad)
{
    calcArea();
};

/**
 * Calculates the area of the Circle.
 */
void Circle::calcArea()
{
    area = PI * this->radius * this->radius;
}

/**
 * This returns the x coordinate of the Circle's center.
 * 
 * @return The x coordinate of the Circle's center.
 */
double Circle::getCenterX() const
{
    return this->centerX;
}

/**
 * This returns the y coordinate of the Circle's center.
 * 
 * @return The y coordinate of the Circle's center.
 */
double Circle::getCenterY() const
{
    return this->centerY;
}

/**
 * This returns the radius of the Circle.
 * 
 * @return The radius of the Circle.
 */
double Circle::getRadius() const
{
    return this->radius;
}
