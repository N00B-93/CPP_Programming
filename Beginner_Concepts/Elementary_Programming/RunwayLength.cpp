#include <iostream>
#include <stdio.h>

using namespace std;

/**
	This is a program that prompts the user to enter an airplane's acceleration
	and takoff speed and then calculates the minimum runway length needed for the plane to take off using the formula;
			length = v^2/(2*a)
*/

int main(void)
{
	// Initializes variables to hold the plane's speed and acceleration.
	float speed(0.0), acceleration(0.0);

	// Prompts the user to enter the airplane's speed.
	cout << "\nEnter the airplane's speed: ";
	cin >> speed;

	// Prompts the user to enter the airplane's acceleration.
	cout << "\nEnter the airplane's acceleration: ";
	cin >> acceleration;

	// Calculates the minimum runway length.
	float runwayLength = pow(speed, 2) / (2 * acceleration);

	// Displays the result.
	printf("\nThe minimum runway required is: %.2f\n", runwayLength);

	return (0);
}

