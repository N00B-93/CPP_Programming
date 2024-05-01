#include <iostream>

/**
	This is a program that prompts the user to enter a letter and displays its corresponding number
	based on the international standard letter/number mapping.
*/

int main(void)
{
	// Variable to hold the letter entered by the user.
	char letter;

	// Prompts the user to enter a letter.
	std::cout << "\nEnter an uppercase or lowercase letter: ";
	std::cin >> letter;

	// Displays an error meassage and terminates the program if the user input is not an alphabet.
	if (not isalpha(letter))
	{
		std::cout << "\nError: Use uppercase or lowercase letters only, Try again.\n";
		return (1);
	}
	else
		std::cout << "\nThe corresponding number is: " << std::toupper(letter) - 'A' + 1 << "\n";

	return (0);
}

