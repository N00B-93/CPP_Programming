#include <iostream>
#include <string>

/**
 	This is a program that prompts the user to enter a string, replace all occurrence of space with
	underscore and then displays the modified string.
*/

int main(int argc, char* const argv[])
{
	// Variable to hold string entered by the user.
	std::string sentence;

	// Prompts the user to enter a string.
	std::cout << "\nEnter a string: ";
	getline(std::cin, sentence);

	// Displays an error message and terminates the program if user enters an empty string.
	if (sentence.empty())
	{
		std::cout << "\nError: Use non empty strings only, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Replace all occurrence of space with underscore.
	for (int i = 0; i < sentence.length(); ++i)
	{
		if (isspace(sentence.at(i)))
			sentence.at(i) = '_';
	}

	// Displays the string with space replaced with '_'.
	std::cout << "\nThe modified string is: " << sentence << "\n";

	return (0);
}

