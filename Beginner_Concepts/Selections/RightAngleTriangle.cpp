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

	// Determines whether the triangle is right-angled or not.
	if (side1 * side1 == side2 * side2 + side3 * side3)
		cout << "\nThe triangle is a right angle triangle" << endl;
	else if (side2 * side2 == side1 * side1 + side3 * side3)
		cout << "\nThe triangle is a right angle triangle" << endl;
	else if (side3 * side3 == side1 * side1 + side2 * side2)
		cout << "\nThe triangle is a right angle triangle" << endl;
	else
		cout << "\nThe triangle is not a right angle triangle." << endl;

	return (0);
}

