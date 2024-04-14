#include <stdio.h>

/**
	This is a program that prompts the user to enter two points on a straight line
	and the displays the slope(gradient) of the line.
*/

int main(void)
{
	// Initialize variable to hold the coordinate of the points.
	float x1(0.0), y1(0.0), x2(0.0), y2(0.0);

	// Prompts the user to enter the coordinates of the first point.
	printf("\nEnter the x and y coordinate of the first point separated by space: ");
	scanf("%f %f", &x1, &y1);

	// Prompts the user to enter the coordinates of the second point.
	printf("\nEnter the x and y coordinate of the second point separated by space: ");
	scanf("%f %f", &x2, &y2);

	// Calculates the slope.
	float slope = (y2 - y1) / (x2 - x1);

	// Displays the slope.
	printf("\nThe slope of the points (%.2f, %.2f) and (%.2f, %.2f) is: %.2f\n", x1, y1, x2, y2, slope);

	return (0);
}

