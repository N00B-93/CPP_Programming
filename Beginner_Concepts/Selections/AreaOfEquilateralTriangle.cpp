#include <iostream>
#include <cmath>
#include <iomanip>

/**
	This is a program that prompts the user to enter the coordinates of the edges of an equilateral triangle and then
	calculates and displays the area of the equilateral triangle.
*/

int main(void)
{
	// Declares variables to hold the x and y coordinates of the edges of tye triangle.
	float x1, y1, x2, y2, x3, y3;

	// Reads in the coordinate of the first vertex.
	std::cout << "\nEnter the (x, y) coordinate of the first vertex: ";
	std::cin >> x1 >> y1;

	// Reads in the coordinate of the second vertex.
	std::cout << "\nEnter the (x, y) coordinate of the second vertex: ";
	std::cin >> x2 >> y2;
	
	// Reads in the coordinate of the third vertex.
	std::cout << "\nEnter the (x, y) coordinate of the third vertex: ";
	std::cin >> x3 >> y3;
	
	// Calculates the length of the three side.
	float side1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	float side2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	float side3 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));

	std::setprecision(4);

	// Displays the area iff all sides are equal.
	if (side1 == side2 and side2 == side3)
		std::cout << "\nArea = " << side1 * side2 * side3 << "\n";
	else
		std::cout << "\nThe triangle is not equilateral.\n";

	return (0);
}

