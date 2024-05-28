#include "Rectangle.hpp"

/**
 * Instantiates a new Rectangle Object with a default height and width.
 */
Rectangle::Rectangle()
{
	width = 1.0;
	height = 1.0;
}

/**
 * Instantiates a new Rectangle.
 *
 * @param newWidth The width of the Rectangle.
 * @param newHeight The height of the Rectangle.
 */
Rectangle::Rectangle(double newWidth, double newHeight)
{
	width = newWidth;
	height = newHeight;
}

/**
 * Determines the area of a Rectangle.
 *
 * @return The area of a Rectangle.
 */
double Rectangle::getArea()
{
	return width * height;
}

/**
 * Determines the perimeter of a Rectangle.
 *
 * @return The perimeter of a Rectangle.
 */
double Rectangle::getPerimeter()
{
	return 2 * (width + height);
}

