#include <iostream>
#include <stdio.h>

using namespace std;

/**
	This is a program that prompts the user to enter his/her weight in pounds
	and height in inches and then displays the corresponding BMI of the user.
*/

int main(void)
{
	// Initializes variables to hold the user's weight and height.
	float weight(0.0), height(0.0);

	// Creates constants to convert weight and height from pounds and inches to kilograms and meters.
	const float INCHES_TO_METERS(0.0254), POUNDS_TO_KILOGRAMS(0.45359);

	// Prompts the user to enter his/her weight.
	cout << "\nEnter your weight in pounds: ";
	cin >> weight;

	// Prompts the user to enter his/her height in inches.
	cout << "\nEnter your height in inches: ";
	cin >> height;

	// Converts the weight and height from pounds and inches to kilograms and mwters.
	float weightInKilograms = weight * POUNDS_TO_KILOGRAMS, heightInMeters = height * INCHES_TO_METERS;

	// Computes the user's BMI.
	float bmi = weightInKilograms / (pow(heightInMeters, 2));

	// Displays the result.
	printf("\nYour BMI is: %.4f\n", bmi);

	return (0);
}

