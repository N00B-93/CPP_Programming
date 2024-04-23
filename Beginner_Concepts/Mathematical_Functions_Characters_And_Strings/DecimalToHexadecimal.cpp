#include <iostream>

/**
	This is a program that prompts the user to enter a decimal number between 0 and 15 and the displays the hexadecimal
	equivalent of the decimal number.
*/

int main(void)
{
	// Declares a variable to hold the user input.
	int decimal;

	// Prompts the user to enter a decimal number between 0 - 15.
	std::cout << "\nEnter a decimal number from 0 - 15: ";
	std::cin >> decimal;

	// Displays an error message and terminates the program if the user input is < 0 or > 15.
	if (decimal < 0 or decimal > 15)
	{
		std::cout << "\nError: Use a number in the range 0 <= decimal <= 15, Try again.\n";
		return (1);
	}

	// Displays the result.
	0 <= decimal and decimal <= 9 ? std::cout << "\nHexadicimal equivalent: " << decimal << "\n" 
		: std::cout << "\nHexadecimal equivalent: " << static_cast<char>(decimal - 10 + 65) << "\n";

	return (0);
}

