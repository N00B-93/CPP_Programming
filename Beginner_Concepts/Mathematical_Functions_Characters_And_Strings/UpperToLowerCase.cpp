#include <iostream>

/**
	This is a program that prompts the user to enter an uppercase character
	and converts it to lowercase and displays the result.
*/

int main(void)
{
	// Declares a variable to store the user input.
	char uppercaseCharacter;

	// Prompts the user to enter an uppercase character.
	std::cout << "\nEnter an uppercase character: ";
	std::cin >> uppercaseCharacter;

	// Validates user input, terminates the program if the user enters a non uppercase character.
	if (uppercaseCharacter < 65 or uppercaseCharacter > 90)
	{
		std::cout << "\nError: Use uppercase characters only, Try again.\n";
		return (1);
	}
	
	// Converts the upoercase letter to lowercase.
	char lowercaseCharacter = uppercaseCharacter + 32;

	// Displays the result.
	std::cout << "\n'" << uppercaseCharacter << "' to lowercase is: " << lowercaseCharacter << ".\n";

	return (0);
}

