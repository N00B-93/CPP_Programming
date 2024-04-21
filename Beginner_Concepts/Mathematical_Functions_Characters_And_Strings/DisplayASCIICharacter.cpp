#include <iostream>

/**
	This is a program that receives an ASCII code(an integer between 0 and 127) and then
	displays the corresponding ASCII character.
*/

int main(void)
{
	// Declares an integer to hold the ASCII code entered by the user.
	short int ASCIIcode;

	// Prompts the user to enter the ASCII code.
	std::cout << "\nEnter an integer between 0 and 127: ";
	std::cin >> ASCIIcode;

	// Displays an error message and terminates the program if the user enters a number < 0 or > 127.
	if (ASCIIcode < 0 or ASCIIcode > 127)
	{
		std::cout << "\nError: Use a number in the range 0 <= ASCIIcode <= 127, Try again.\n";
		return (1);
	}

	// Displays the character corresponding to the ASCII code.
	std::cout << "\nThe character is: " << static_cast<char>(ASCIIcode) << "\n";

	return (0);
}

