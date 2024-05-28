#include <iostream>
#include "Rectangle.hpp"

/**
	This program contains code that tests the functionality of the Rectangle class.
*/

void getDetails(Rectangle rectangle);  // Prototype of the getDetails function.

int main(int argc, char* argv[])
{
	// Creates two Rectangle Objects.
	Rectangle rectangle1(4, 40);
	Rectangle rectangle2(3.5, 35.9);

	// Displays the properties of each Rectangle.
	std::cout << "\n\t\tRectangle Details";
	getDetails(rectangle1);
	getDetails(rectangle2);

	return (0);
}

/**
 * Displays the properties of the Rectangle Object.
 *
 * @param rectangle A Rectangle Object.
 */
void getDetails(Rectangle rectangle)
{
	std::cout << "\nWidth: " << rectangle.width;
	std::cout << "\nHeight: " << rectangle.height;
	std::cout << "\nPerimeter: " << rectangle.getPerimeter();
	std::cout << "\nArea: " << rectangle.getArea();
	std::cout << "\n";
}

