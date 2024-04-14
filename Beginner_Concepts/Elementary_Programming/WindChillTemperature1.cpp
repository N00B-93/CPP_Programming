#include <stdio.h>
#include <math.h>

/**
	This is a program that prompts the user to enter a temperature between 
	-58 °F and 41 °F and a wind velocity >= 2 mph and then displays the windchill index using the formular;
			wc = 35.74 + 0.6215 * t - 35.75 * v^0.16 + 0.4275 * t * v^0.16.
*/

int main(void)
{
	// Initialize variables to hold the temperature and velocity of wind.
	float temperature(0.0), windVelocity(0.0);
	
	// Prompts the user to enter a temperature between -58 °F and 41 °F.
	printf("\nEnter a temperature between -58 °F and 41 °F: ");
	scanf("%f", &temperature);

	// Prompts the user to enter a velocity >= 2 mph.
	printf("\nEnter a velocity >= 2mph: ");
	scanf("%f", &windVelocity);
	
	// Calculates the windchill index.
	float windChillIndex = 35.74 + (0.6215 * temperature) - (35.7 * pow(windVelocity, 0.16)) + (0.4275 * temperature * pow(windVelocity, 0.16));

	// Displays the windchill index.
	printf("\nThe wind chill index is: %.4f\n", windChillIndex);

	return (0);
}

