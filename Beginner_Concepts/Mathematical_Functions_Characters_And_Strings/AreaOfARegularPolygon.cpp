#include <cstdio>
#include <cmath>

/**
	This is a program that prompts the user to enter the length of the side of a Polygon and the number of sides and computes the area of the Polygon.
	The area of a Polygon with n sides is calculated using the formular;
			area = n * s^2 / (4 * tan(π / n))
*/

int main(void)
{
	// Defines a constant variable to hold the value of π.
	const float PI = 3.14159;

	// Declares a variable to hold the length of a side of the Polygon and the number of sides.
	float length;
	int numberOfSides;

	// Prompts the user to enter the length of the side of the Polygon.
	printf("\nEnter the length of the side of an n-sided Polygon: ");
	scanf("%f", &length);

	// Prompts the user to enter the number of sides of the Polygon.
	printf("\nEnter the number of sides of the polygon: ");
	scanf("%d", &numberOfSides);
	
	// Displays an error message and terminates the program if the user enters an invalid number for the length or the number of sides is <= 0.
	if (length <= 0 or numberOfSides <= 0)
	{
		printf("\nError: Use positive integers > 0 for length and nunber of sides, Try again.\n");
		return (1);
	}

	// Calculates the area of the Polygon.
	float area = numberOfSides * pow(length, 2) / (4 * tan(PI / numberOfSides));

	// Displays the result.
	printf("\nThe area of the Polygon is: %.2f\n", area);

	return (0);
}

