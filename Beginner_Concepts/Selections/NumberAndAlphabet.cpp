#include <iostream>

/**
	This is a program that prompts the user to input an integer between 0 and 35. If the number is less than or equal to 9, the program 
outputs the number; otherwise, it outputs A for 10, B for 11, C for 12, . . . , and Z for 35.
*/

using namespace std;

int main(void)
{
	// Declares a variable to hold the user input.
	int number;

	// Prompts the user to enter a number from 0 to 35.
	cout << "\nEnter a number from 0 - 35: ";
	cin >> number;

	// Displays an error message and terminates the program if the user enters a number < 0 or > 35.
	if (number < 0 or number > 35)
	{
		cout << "\nError: Number must be in the range 0 <= number <= 35." << endl;
		return (1);
	}
	else if (number >= 0 and number <= 9)
		cout << "\nNumber: " << number << endl;  // Displays the number itself if it is <= 9.
	else  // Displays the alphabet equivalent if the number > 9.
		cout << "\nLetter: " << static_cast<char>(55 + number) << endl;

	return (0);
}

