#include <cstdio>
#include <cmath>

/**
	The great circle distance is the distance between two points on the surface of a sphere. Let (x1, y1) and (x2, y2) be the geographical latitude and 
	longitude of two points. The great circle distance between the two points can be computed using the following formula:
			d = radius * arccos(sin(x1) * sin(x2) + cos(x1) * cos(x2) * cos(y1 - y2))
	This is a program that prompts the user to enter the latitude and longitude of two points on the earth in degrees and displays its great circle 
	distance. The average earth radius is 6,378.1 km.
*/

int main(void)
{
	// Initializes a constant variable to hold the radius of the earth.
	const float R = 6378.1f;

	// Initializes a const variable to hold the vue of PI.
	const float PI = 3.14159f;

	// Declares variables to hold the latitude and longitude of each point.
	float x1, y1, x2, y2;

	// Prompts the user to enter the latitude and longitude of the first point.
	printf("\nEnter the latitude and longitude(x1, y1) of the first point: ");
	scanf("%f %f", &x1, &y1);

	// Converts the angle from degrees to radians.
	float x1InRadians = x1 * (PI /180.0);
	float y1InRadians = y1 * (PI / 180.0);

	// Prompts the user to enter the latitude and longitude of the second point.
	printf("\nEnter the latitude and longitude(x1, y1) of the first point: ");
	scanf("%f %f", &x2, &y2);

	// Converts the angle from degrees to radians.
	float x2InRadians = x2 * (PI /180.0);
	float y2InRadians = y2 * (PI / 180.0);

	// Calculates the great circle distance.
	float greatCircleDistance = R * acos(sin(x1InRadians) * sin(x2InRadians) + cos(x1InRadians) * cos(x2InRadians) * cos(y1InRadians - y2InRadians));

	// Displays the result.
	printf("\nThe distance between the two points is: %.2f KM\n", greatCircleDistance);

	return (0);
}

