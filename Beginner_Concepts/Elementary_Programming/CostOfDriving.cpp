#include <stdio.h>

/**
	This is a program that prompts the user to enter the distance to drive, 
	the fuel efficiency of the car in miles per gallon, and the price per gallon
	of fuel, and displays the cost of the trip.
*/

int main(void)
{
	// Initialize variables to hold distance to drive, fuel efficiency and price of fuel per gallon.
	float distanceToDrive(0.0), fuelEfficiency(0.0), priceOfFuelPerGallon(0.0);

	// Prompts the user to enter the distance to drive.
	printf("\nEnter the distance to drive: ");
	scanf("%f", &distanceToDrive);

	// Prompts the user to enter the fuel efficiency.
	printf("\nEnter the gallon of fuel consumed per mile: ");
	scanf("%f", &fuelEfficiency);

	// Prompts the user to enter the price per gallon of fuel.
	printf("\nEnter the price per gallon of fuel: ");
	scanf("%f", &priceOfFuelPerGallon);
	// Calculates the cost of driving.
	float costOfDriving = (distanceToDrive / fuelEfficiency) * priceOfFuelPerGallon;
	
	// Displays the cost of driving.
	printf("\nThe cost of driving %.3f miles is: $ %.2f\n", distanceToDrive, costOfDriving);

	return (0);
}

