#include <iostream>

/**
	This is a program that prompts the user to enter a single 
	character and displays the character's ASCII code.
*/

int main(void)
{
	// Declares a char variable to hold the user input.
	char character;

	// Prompts the user to enter a character.
	std::cout << "\nEnter a character: ";
	std::cin >> character;

	// Displays the character's ASCII code.
	std::cout << "\nThe ASCII code of '" << character << "' is: " << static_cast<int>(character) << "\n";

	return (0);
}
