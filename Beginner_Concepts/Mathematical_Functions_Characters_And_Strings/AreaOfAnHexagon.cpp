#include <cstdio>
#include <cmath>

/**
	This is a program that prompts the user to enter the length of the side of an Hexagon and computes the area of the Hexagon.
	The area of a Hexagon is calculated using the formular;
			area = 6 * s^2 / (4 * tan(π / 6))
*/

int main(void)
{
	// Defines a constant variable to hold the value of π.
	const float PI = 3.14159;

	// Declares a variable to hold the length of a side of the Hexagon.
	float length;

	// Prompts the user to enter the length of the side of the Hexagon.
	printf("\nEnter the length of the side of an Hexagon: ");
	scanf("%f", &length);
	
	// Displays an error message and terminates the program if the user enters an invalid number for the length.
	if (length <= 0)
	{
		printf("\nError: Use positive integers > 0, Try again.\n");
		return (1);
	}

	// Calculates the area of the pentagon.
	float area = 6 * pow(length, 2) / (4 * tan(PI / 6));

	// Displays the result.
	printf("\nThe area of the Hexagon is: %.2f\n", area);

	return (0);
}

