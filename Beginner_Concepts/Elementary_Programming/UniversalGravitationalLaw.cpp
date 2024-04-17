#include <iostream>
#include <iomanip>
#include <stdio.h>

using namespace std;

/**
	This is a program that prompts the user to enter the masses of two objects and the distance separating them and then calculates and displays the
	force of attraction between the two objects using the formular;
			F = GM1M2 / r^2, where G is a constant with value 6.67 * 10 ^ -11.
*/

int main(void)
{
	// Constant variable to hold the value of the universal gravitational constant, G.
	const double G = 6.67 * pow(10, -11);

	// Initialize variables to hold the masses and distance between the objects.
	double mass1(0.0), mass2(0.0), distance(0.0);

	// Prompts the user to enter the mass of the first Object.
	printf("\nEnter the size of the first mass in kg: ");
	scanf("%lf", &mass1);

	// Prompts the user to enter the mass of the second Object.
	printf("\nEnter the size of the second mass in kg: ");
	scanf("%lf", &mass2);

	// Prompts the user to enter the distance between the objects.
	printf("\nEnter the distance separating the objects in meters: ");
	scanf("%lf", &distance);

	// Calculates the force of attraction between the masses.
	double force = (G * mass1 * mass2) / (distance * distance);
	
	// Allows the output to be displayed in scientific format using 5 digits after the decimal point.
	cout << scientific;
	cout << setprecision(5);

	// Displays the force of attraction between the objects.
	cout << "\nThe force of attraction between the objects is: "
	     << force
	     << " N"
	     << endl;

	return (0);
}

