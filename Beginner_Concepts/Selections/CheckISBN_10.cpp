#include <iostream>

using namespace std;

/**
	An ISBN-10 (International Standard Book Number) consists of 10 digits: d1d2d3d4d5d6d7d8d9d10. The last digit, d10, is a checksum, which is 
	calculated from the other nine digits using the following formula:
			(d1 * 1 + d2 * 2 + d3 * 3 + d4 * 4 + d5 * 5 + d6 * 6 + d7 * 7 + d8 * 8 + d9 * 9) % 11
	If the checksum is 10, the last digit is denoted as X according to the ISBN-10 convention. Write a program that prompts the user to enter the 
	first 9 digits and displays the 10-digit ISBN (including leading zeros). The program reads the user input as an integer.
*/

int main(void)
{
	// Declares a variable to hold the first nine digits of the ISBN-10 number.
	long int firstNineDigits;

	// Prompts the user to enter the first nine ISBN-10 digits.
	cout << "\nEnter the first nine digits of the ISBN-10 number: ";
	cin >> firstNineDigits;
	
	// Peels of the first digit so as to check if the number begins with 0 or not.
	int d1 = firstNineDigits / 100'000'000;

	// Displays an error message and terminates the program if the user doens't use a 9-digit nunber.
	if (firstNineDigits < 100'000'000 and d1 != 0)
	{
		cout << "\nError: Use a 9-digit number only, Try again." << endl;
		return (1);
	}

	// Peels of each digit from the 9-digit user input.
	int d2 = (firstNineDigits / 10'000'000) % 10;
	int d3 = (firstNineDigits / 1'000'000) % 10;
	int d4 = (firstNineDigits / 100'000) % 10;
	int d5 = (firstNineDigits / 10'000) % 10;
	int d6 = (firstNineDigits / 1'000) % 10;
	int d7 = (firstNineDigits / 100) % 10;
	int d8 = (firstNineDigits / 10) % 10;
	int d9 = firstNineDigits % 10;

	// Calculates the checksum
	int checksum = (((d1 * 1) + (d2 * 2) + (d3 * 3) + (d4 * 4) + (d5 * 5) + (d6 * 6) + (d7 * 7) + (d8 * 8) + (d9 * 9)) % 11);

	// Displays the ISBN-10 number.
	if (checksum == 10 and d1 != 0)
		cout << "\nThe ISBN-10 number is: " << firstNineDigits << 'X' << endl;
	else if (d1 == 0 and checksum == 10)
		cout << "\nThe ISBN-10 number is: " << '0' << firstNineDigits << 'X' << endl;
	else if (d1 == 0)
		cout << "\nThe ISBN-10 number is: " << '0' << firstNineDigits << checksum << endl;
	else
		cout << "\nThe ISBN-10 number is: " << (firstNineDigits * 10) + checksum << endl;

	return (1);
}

