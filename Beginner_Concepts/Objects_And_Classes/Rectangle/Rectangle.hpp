#ifndef CIRCLE_HPP
#define CIRCLE_HPP

/**
 * The type Rectangle.
 */
class Rectangle
{
	public:
		// Attributes of a Rectangle
		double width, height;
		
		// Un-parameterized and parameterized constructors.
		Rectangle();
		Rectangle(double newWidth, double newHeight);

		double getArea();  // Returns the area of a Rectangle.

		double getPerimeter();  // Returns the perimeter of a Rectangle.
};

#endif /* CIRCLE_HPP */
