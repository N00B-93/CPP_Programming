#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

/**
	This is a program that prompts the user to enter the coefficients of the quadratic equation;
			ax^2 + bx + c = 0
	and displays the the root(s) if they exist or informs the user that the equation has no root.
*/

int main(void)
{
	// Declares variable used to store the coefficients of the equation.
	float a, b, c;

	// Prompts the user to enter the coefficients of the equation.
	cout << "\nEnter the coefficients a, b, c separated by space: ";
	cin >> a >> b >> c;

	// Displays an error message and terminates the program if the user input(s) is invalid.
	if (std::cin.fail())
	{
		std::cout << "\nError: Use real numeric values only, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Calculates the discriminant of the equation.
	float discriminant = b * b - (4 * a * c);
	
	// Informs the user that the equation has imaginary root(no real root) and terminates the program.
	if (discriminant < 0)
	{
		cout << "\nThe equation has imaginary roots.\n";
		return (1);
	}
	
	// Calculates the two roots of the quadratic equation.
	float root1 = (-b + pow(discriminant, 0.5)) / (2 * a);
	float root2 = (-b - pow(discriminant, 0.5)) / (2 * a);
	
	if (root1 == root2)
		cout << setprecision(4) << "\nThe root is: "
		     << root1 << endl;

	else
		cout << setprecision(4) << "\nThe roots are: "
		     << root1
		     << " and "
		     << root2 << endl;

	return (0);
}

