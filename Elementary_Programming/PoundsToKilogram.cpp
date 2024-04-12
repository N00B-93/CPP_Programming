#include <iostream>

using namespace std;

/**
	This is a program that prompts the user to enter a weight in pounds and 
	displays the kilogram equivalent of the weight.
*/

int main(void)
{
	// Creates a constant to hold the conversion multiplier to convert pounds to kilogram.
	const float CONVERSION_MULTIPLIER = 0.454;

	// Creates a variable to hold the weight enter by the user in pounds.
	float pounds = 0.0;

	// Prompts the user to enter the weight in pounds.
	cout << "\nEnter a weight in pounds: ";
	cin >> pounds;

	// Converts the weight from pounds to kilograms.
	float kilograms = pounds * CONVERSION_MULTIPLIER;

	// Displays the result.
	cout << "\n" << pounds << " pounds converted to kilograms is " << kilograms << " kilograms." << endl;

	return (0);
}

