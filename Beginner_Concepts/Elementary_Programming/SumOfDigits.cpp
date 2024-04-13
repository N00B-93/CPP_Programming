#include <iostream>

using namespace std;

/*
	This is a program that prompts the user to enter a number between 0 and 1000
	and then displays the sum of digits in the nunber.
*/

int main(void)
{
	// Variable to hold the number whose sum of digits is to be determined.
	int number = 0;

	// Prompts the uset to enter a number between 0 and 1000.
	cout << "\nEnter a number between 0 and 1000: ";
	cin >> number;

	// Determines the sum of digits.
	int sumOfDigits = (number / 100 % 1000) + (number / 10 % 10) + (number % 10);

	// Displays the sum of digits in the number.
	cout << "\nThe sum of digits in " << number << " is: " << sumOfDigits << endl;

	return (0);
}

