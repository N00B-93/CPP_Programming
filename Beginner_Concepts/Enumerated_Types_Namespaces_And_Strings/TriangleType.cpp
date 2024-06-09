#include <iostream>

/**
	This is a program that prompts the user to enter the three sides of a triangle and then 
	displays whether it is equilateral, isosceles, scalene or not a triangle.
 */

enum TriangleType {SCALENE, ISOSCELES, EQUILATERAL, NOT_TRIANGLE};  // User defined type representing a triangle.

TriangleType triangleShape(const float side1, const float side2, const float side3);  // Prototype of the triangleShape function.

int main(int argc, char** argv)
{
	// Variable to hold the three sides of a triangle.
	float side1, side2, side3;

	// Prompts the user to enter the three sides of a triangle.
	std::cout << "\nEnter the three sides of a triangle: ";
	std::cin >> side1 >> side2 >> side3;

	// Displays an error message and terminates the program if the user input is invalid.
	if (std::cin.fail() || side1 <= 0 || side2 <= 0 || side3 <= 0)
	{
		std::cout << "\nError: Use positive floating point values only, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
	// Determines the shape of the triangle.
	TriangleType triangle = triangleShape(side1, side2, side3);

	switch (triangle)
	{
		case SCALENE:
			std::cout << "\nThe triangle is Scalene.\n";
			break;
		case ISOSCELES:
			std::cout << "\nThe triangle is Isosceles.\n";
			break;
		case EQUILATERAL:
			std::cout << "\nThe triangle is Equilateral.\n";
			break;
		case NOT_TRIANGLE:
			std::cout << "\nThis is not a triangle.\n";
			break;
	}

	return (0);
}

/**
 * Determines the shape of a triangle given it's three sides.
 *
 * @param side1 The first side.
 * @param side2 The second side.
 * @param side3 The third side.
 * @return A value of triangleType that represent whether a triangle is scalene, isosceles, equilateral or not a triangle.
 */
TriangleType triangleShape(const float side1, const float side2, const float side3)
{
	TriangleType shape;

	if (side1 + side2 <= side3 || side1 + side3 <= side2 || side2 + side3 <= side1)
		shape = NOT_TRIANGLE;
	else if (side1 == side2 && side2 == side3)
		shape = EQUILATERAL;
	else if (side1 != side2 && side1 != side3 && side2 != side3)
		shape = SCALENE;
	else if (side1 == side2 || side1 == side3 || side2 == side3)
		shape = ISOSCELES;
	return shape;
}

