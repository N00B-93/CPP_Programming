#include "Circle2D.hpp"
#include <cmath>

const double PI = M_PI;

/**
 * Instantiates a new Circle2D Object with default values.
*/
Circle2D::Circle2D()
{
    this -> radius = 0.0;
    this -> xCoord = 0.0;
    this -> yCoord = 0.0;
}

/**
 * Instantiates a new Circle2D Object.
 * 
 * @param xCoord The x-coordinate of the centre of the Circle2D.
 * @param yCoord The y-coordinate of the centre of the Circle2D.
 * @param radius The radius of the centre of the Circle2D.
*/
Circle2D::Circle2D(double xCoord, double yCoord, double radius)
{
    this -> radius = radius;
    this -> xCoord = xCoord;
    this -> yCoord = yCoord;
}

/**
 * Determines the area of a Circle2D Object.
 * 
 * @return The area of a Circle2D Object.
*/
double Circle2D::getArea()
{
    return PI * this -> radius * this -> radius;
}

/**
 * Determines the perimeter of a Circle2D Object.
 * 
 * @return The perimeter of a Circle2D Object.
*/
double Circle2D::getPerimeter()
{
    return 2 * PI * radius;
}

/**
 * Determines whether a point exists in a Circle2D.
 * 
 * @param x The x-coordinate of a point.
 * @param y The y-coordinate of a point.
 * @return true if the point exists in the Circle2D, else false.
*/
bool Circle2D::contains(double x, double y) const
{
    double distance = sqrt(pow(this -> xCoord - x, 2) + pow(this -> yCoord - y, 2));

    return distance < this -> radius;
}

/**
 * Determines whether a Circle2D exists within another Circle2D.
 * 
 * @param other A Circle2D Object.
 * @return true if the other Circle2D exists in the current instance, else false.
*/
bool Circle2D::contains(const Circle2D& other) const
{
    double distance = sqrt(pow(this -> xCoord - other.xCoord, 2) + pow(this -> yCoord - other.yCoord, 2));

    return distance <= this -> radius - other.radius;
}

/**
 * Checks if the current Circle2D instance overlaps the specified Circle2D instance.
 * 
 * @param other The other Circle2D instance.
 * @return true if the Circle2D overlaps, else false.
*/
bool Circle2D::overlaps(const Circle2D& other) const
{
    double distance = sqrt(pow(this -> xCoord - other.xCoord, 2) + pow(this -> yCoord - other.yCoord, 2));

    return this -> radius + other.radius >= distance;
}