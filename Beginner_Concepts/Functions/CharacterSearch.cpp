#include <iostream>
#include <string>

void search(std::string& s, char& key);

/*
	This is a program that prompts the user to enter a string and a character and then displays the
	index where the character can be found in the string using a function with header;
			void search(string& s, char& key)
*/

int main(void)
{
	// Variable to hold the string and character entered by the user.
	std::string str;
	char character;

	// Prompts the user to enter a string.
	std::cout << "\nEnter a string: ";
	getline(std::cin, str);
	
	// Displays an error message if the user enters an empty string.
	if (str == "")
	{
		std::cout << "\nError: Use non empty strings only, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Prompts the user to enter a character to search for.
	std::cout << "\nEnter a character to search for: ";
	std::cin >> character;

	// Displays whether the character exists in the string or not.
	search(str, character);

	return (0);
}

/**
 * Displays the index where a character can be found in a string.
 *
 * @param s The string.
 * @param key The character to search for.
 */
inline void search(std::string& s, char& key)
{
	if (s.find(key) == std::string::npos)
	{
		std::cout << "\n'" << key << "' not found!\n";
		return;
	}
	else
		std::cout << "\n'" << key << "' found at index: " << s.find(key) << "\n";
}

