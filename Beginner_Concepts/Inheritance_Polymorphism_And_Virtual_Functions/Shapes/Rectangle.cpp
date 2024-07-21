#include "Rectangle.hpp"

// No-arg constructor
Rectangle::Rectangle(){};

/**
 * Instantiates a new Rectangle.
 * 
 * @param len The length of the Triangle.
 * @param wid The width of the Triangle.
 */
Rectangle::Rectangle(double len, double wid): length(len), width(wid)
{
    this->calcArea();
};

/**
 * Calculates the area of a Triangle.
 */
void Rectangle::calcArea()
{
    area = this->getLength() * this->getWidth();
}

/**
 * This returns the length of a Rectangle.
 * 
 * @return The length of a Rectangle.
 */
double Rectangle::getLength() const
{
    return this->length;
}

/**
 * This returns the width of a Rectangle.
 * 
 * @return The width of a Rectangle.
 */
double Rectangle::getWidth() const
{
    return this->width;
}
