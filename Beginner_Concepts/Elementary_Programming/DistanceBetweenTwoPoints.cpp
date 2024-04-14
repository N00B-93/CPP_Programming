#include <iostream>
#include <stdio.h>
#include <math.h>

using namespace std;

/**
 	This is a program that prompts the user to enter the x and y coordinates of
	two point and then displays the distance between the points.
*/

int main(void)
{
	// Initialize variables to hold the x and y coordinates of the two points.
	float x1(0.0), y1(0.0), x2(0.0), y2(0.0);

	// Prompts the user to enter the coordinates of the first point.
	printf("\nEnter the x and y coordinates of the first point separated by space: ");
	cin >> x1 >> y1;

	// Prompts the user to enter the coordinates of the second point.
	printf("\nEnter the x and y coordinates of the second point separated by space: ");
	cin >> x2 >> y2;

	// Calculates the distance between the two points.
	float distance = sqrt(pow(x1 -x2, 2) + pow(y1 - y2, 2));

	// Displays the distance between the points.
	printf("\nThe distance between (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", x1, y1, x2, y2, distance);

	return (0);
}

