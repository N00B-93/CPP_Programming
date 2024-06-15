#include <iostream>

/**
	In a right triangle, the square of the length of one side is equal to the sum of the squares of the lengths of the other two sides. 
	This is a program that prompts the user to enter the lengths of three sides of a triangle and then outputs a message indicating whether 
	the triangle is a right triangle.
*/

using namespace std;

int main(void)
{
	// Declares variables to hold the sides of the triangle.
	float side1, side2, side3;

	// Prompts the user to enter the sides of the triangle.
	cout << "\nEnter the three sides of the triangle: ";
	cin >> side1 >> side2 >> side3;

	// Displays an error message and terminates the program if any of the triangle's side is invalid.
	if (std::cin.fail() || side1 <= 0 || side2 <= 0 || side3 <= 0)
	{
		std::cout << "\nError: The sides of the triangle must be > 0, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Checks if the triangle is a right angled triangle.
	bool isRightAngled = (side1 * side1 == side2 * side2 + side3 * side3) || (side2 * side2 == side1 * side1 + side3 * side3) || 
	(side3 * side3 == side1 * side1 + side2 * side2);

	// Displays whether the triangle is right-angled or not.
	if (isRightAngled)
		cout << "\nThe triangle is a right angle triangle" << endl;
	else
		cout << "\nThe triangle is not a right angle triangle." << endl;

	return (0);
}

