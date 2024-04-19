#include <iostream>
#include <iomanip>

using namespace std;

/**
	This is a program that prompts the user to enter the sides of a triangle and compares them. If all sides are equal 'Equilateral Triangle'
	is displayed; if only two sides are equal, 'Isosceles Triangle' is displayed; and if none of the sides are equal, 'Scalene Triangle' is displayed.
*/

int main(void)
{
	// Declares variables to hold the sides of a triangle.
	float side1, side2, side3;

	// Reads in the sides of a triangle.
	cout << "\nEnter the three sides of a triangle: ";
	cin >> side1 >> side2 >> side3;

	// Validates the user input, program is terminated if user enters 0 or negative length.
	if (side1 <= 0 or side2 <= 0 or side3 <= 0)
	{
		cout << "\nError: Use lengths >= 0, Try again" << endl;
		return (1);
	}
	else if (side1 == side2 and side2 == side3)  // Checks whether the triangle is equilateral.
		cout << "\nEquilateral Triangle." << endl;
	else if (side1 == side2 or side1 == side3 or side2 == side3)  // Checks whether the triangle is isosceles.
		cout << "\nIsosceles Triangle." << endl;
	else if (side1 != side2 and side1 != side3 and side2 != side3)  // Checks if the triangle is scalene.
		cout << "\nScalene Triangle." << endl;

	return (0);
}

