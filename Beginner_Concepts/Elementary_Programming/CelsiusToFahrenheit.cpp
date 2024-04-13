#include <iostream>

using namespace std;

/**
 	This is a program that prompts the user to enter a temperature in celsius
	and then displays the Fahrenheit equivalent of the temperature.
*/

int main(void)
{	
	// Initializes a variable to store the temperature entered by the user.
	float celsius = 0.0;

	// Prompts the user to enter a Celsius temperature.
	cout << "\nEnter a Celsius temperature: ";
	cin >> celsius;
	
	// Calculates the Fahrenheit equivalent of the Celsius temperature.
	float fahrenheit = (9.0 / 5) * 32 + celsius;

	// Displays the temperature in Fahrenheit.
	cout << "\nThe Fahrenheit equivalent of " << celsius << " °C is " << fahrenheit << " °F" << endl;

	return (0);
}

