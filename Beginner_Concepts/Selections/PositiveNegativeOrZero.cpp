#include <iostream>

using namespace std;

/**
	This is a program that prompts the user to enter a number and displays
	whether the number is positive, negative or zero.
*/

int main(void)
{
	// Initailizes a variable to hold the number entered by the user.
	double number = 0.0;

	// Prompts the user to enter a number.
	cout << "\nEnter a number to be checked: ";
	cin >> number;

	// Displays whether the number is positive, negative or zero.
	if (number > 0)
		cout << "\n" << number << " is positive." << endl;
	else if (number < 0)
		cout << "\n" << number << " is negative." << endl;
	else
		cout << "\n" << number << " is zero." << endl;

	return (0);
}
