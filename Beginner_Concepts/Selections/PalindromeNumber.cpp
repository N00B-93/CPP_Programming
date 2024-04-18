#include <iostream>

using namespace std;

/**
	A number is palindrome if it reads the same from right to left and from left to right. This is a program that prompts the user to enter a 3-digit integer, reverses the integer and
	 checks if the integer is the same from right to left and from left to right.
*/

int main(void)
{
	// Declares a variable to hold the user input.
	int number;

	// Prompts the user to enter a number to be checked.
	cout << "\nEnter a positive integer: ";
	cin >> number;

	// Exits the program if the user enters a negative number.
	if (number < 0 or number < 100 or number > 999)
	{
		cout << "\nError: Use non-negative 3-digit numbers only, Try again." << endl;
		return (1);
	}
	
	// Determine the reverse of the number.
	int reverseNumber = ((number % 10) * 100) + (((number / 10) % 10) * 10) + (number / 100);

	// Checks if the number is a palindrome and displays the result.
	cout << endl;
	number == reverseNumber ? cout << number << " is a Palindrome." << endl : cout << number << " is not a Palindrome." << endl;

	return (0);
}

