#include <stdio.h>
#include <math.h>

/**
	This is a program that prompts the user to enter the coordinate of the three 
	vertices of a triangle and displays the area of the triangle using the formular;
			s = (side1 + side2 + side3) / 2
			area = √(s(s - side1) * (s - side2) * (s - side3))
*/

int main(void)
{
	// Initialize variables to hold the x and y coordinates of each vertex.
	float x1(0.0), y1(0.0), x2(0.0), y2(0.0), x3(0.0), y3(0.0);

	// Prompts the user to enter the x and y coordinate of the first vertex.
	printf("\nEnter the x and y coordinate of the first vertex separated by space: ");
	scanf("%f %f", &x1, &y1);

	// Prompts the user to enter the x and y coordinate of the second vertex.
	printf("\nEnter the x and y coordinate of the second vertex separated by space: ");
	scanf("%f %f", &x2, &y2);

	// Prompts the user to enter the x and y coordinate of the third vertex.
	printf("\nEnter the x and y coordinate of the third vertex separated by space: ");
	scanf("%f %f", &x3, &y3);

	// Calculates the distance between each vertex.
	float side1 = sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));
	float side2 = sqrt(pow(x1 - x3, 2) + pow(y1 - y3, 2));
	float side3 = sqrt(pow(x2 - x3, 2) + pow(y2 - y3, 2));

	// Determines the value of s.
	float s = (side1 + side2 + side3) / 2;

	// Calculates the area of the triangle.
	float area = sqrt(s * (s - side1) * (s - side2) * (s - side3));

	// Displays the area.
	printf("\nThe area of a triangle with sides %.2f, %.2f, %.2f is: %.2f\n", side1, side2, side3, area);

	return (0);
}

