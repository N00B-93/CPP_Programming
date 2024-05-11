#include <iostream>
#include <string>

int count(const std::string& s, char a);  // Prototype of the count function.

/**
	This is a program that prompts the user to enter a string and a character and displays the 
	number of occurrence of the character in the string by using a function with the header;
			int count(const string& s, char a)
*/

int main(void)
{
	// Variables to hold the string and character entered by the user.
	std::string str;
	char character;

	// Prompts the user to enter a string.
	std::cout << "\nEnter a string: ";
	getline(std::cin, str);

	// Displays an error message and terminates the program if the user enters an empty string.
	if (str == "")
	{
		std::cout << "\nError: Use non empty strings only, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Prompts the user to enter a character.
	std::cout << "\nEnter a character: ";
	std::cin >> character;

	// Displays the number of occurrence of the character in the string.
	if (count(str, character) == 1)
		std::cout << "\n'" << character << "' occurs in '" << str << "' " << count(str, character) << " time.\n";
	else
		std::cout << "\n'" << character << "' occurs in '" << str << "' " << count(str, character) << " times.\n";

	return (0);
}

/**
 * Determines the number of occurrence of a character in a string.
 *
 * @param s The string to be processed.
 * @param a The character whose number of occurrence in a string is to be determined.
 * @return The number of occurrence of a character in a string.
 */
int count(const std::string& s, char a)
{
	int count = 0;

	for (int i = 0; i < s.size(); ++i)
	{
		if (s[i] == a)
			count++;
	}

	return count;
}

