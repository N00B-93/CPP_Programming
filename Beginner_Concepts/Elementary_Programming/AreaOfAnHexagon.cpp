#include <iostream>
#include <stdio.h>

using namespace std;

/**
	The is a program that prompts the user to enter the length of a side of an
	hexagon and then displays the area of the hexagon.
*/

int main(void)
{
	// Initialize a variable to hold the length of a side of the hexagon.
	float lengthOfSide(0.0);

	// Prompts the user to enter the length of a side.
	printf("\nEnter the length of a side of the hexagon: ");
	cin >> lengthOfSide;
	
	// Calculates the area of the hexagon 
	float area = (0.5 * 3 * pow(3, 0.5)) * pow(lengthOfSide, 2);

	// Displays the area of the hexagon.
	printf("\nThe area of the hexagon is: %.2f\n", area);

	return (0);
}

