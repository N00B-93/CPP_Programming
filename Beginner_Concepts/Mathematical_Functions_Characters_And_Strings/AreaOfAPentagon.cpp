#include <cstdio>
#include <cmath>

/**
	This is a program that prompts the user to enter the length from the center of a pentagon to a vertex and computes the area of the pentagon.
	The area of a pentagon is calculated using the formular;
			area = 5 * s^2 / (4 * tan(π / 5))
		where s = 2rsin(π / 5), r being the length of a vertex from the center of the pentagon.
*/

int main(void)
{
	// Defines a constant variable to hold the value of π.
	const float PI = 3.14159;

	// Declares a variable to hold the length of a vertex from the center of the pentagon.
	float length;

	// Prompts the user to enter the length from a vertex to the pentagon's center.
	printf("\nEnter the length from the center to a vertex: ");
	scanf("%f", &length);
	
	// Displays an error message and terminates the program if the user enters an invalid number for the length.
	if (length <= 0)
	{
		printf("\nError: Use positive integers > 0, Try again.\n");
		return (1);
	}

	// Calculates the length of a side.
	float side = 2 * length * sin(PI / 5);

	// Calculates the area of the pentagon.
	float area = 5 * pow(side, 2) / (4 * tan(PI / 5));

	// Displays the result.
	printf("\nThe area of the polygon is: %.2f\n", area);

	return (0);
}

