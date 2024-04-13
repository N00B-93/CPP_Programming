#include <iostream>

using namespace std;

/**
	This is a program that prompts the user to enter a length in feet and 
	displays the length in meters.
*/

int main(void)
{
	// Initializes a variable to hold a constant to convert a foot to meter.
	const float CONVERSION_MULTIPLIER = 0.305;
	
	// Variable to hold length entered by the user.
	float feet = 0.0;

	// Prompts the user to enter a length in feet.
	cout << "\nEnter a length in feet: ";
	cin >> feet;
	
	// Calculates the length in meters.
	float meters = feet * CONVERSION_MULTIPLIER;

	// Displays the length in meters.
	cout << "\n" << feet << " feet converted to meters is " << meters << " meters." << endl;

	return (0);
}

