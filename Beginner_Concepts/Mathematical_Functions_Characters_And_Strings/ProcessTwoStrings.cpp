#include <iostream>
#include <cstring>

/**
	This is a program that prompts the user to enter two strings
	and then displays their lengths and the last character of each.
*/

int main(void)
{
	// Declares variable to hold two strings.
	std::string string1, string2;

	// Prompts the user to enter the first string.
	std::cout << "\nEnter the first string: ";
	getline(std::cin, string1);

	// Prompts the user to enter the second string.
	std::cout << "\nEnter the second string: ";
	getline(std::cin, string2);

	// Displays the length an last character of the first string.
	std::cout << "\nLength of '" << string1 << "' is: " << string1.length();
	std::cout << "\nLast character of '" << string1 << "' is: " << string1[string1.length() - 1];

	// Displays the length and last character of the second string.
	std::cout << "\n\nLength of '" << string2 << "' is: " << string2.length();
	std::cout << "\nLast character of '" << string2 << "' is: " << string2[string2.length() - 1] << "\n";

	return (0);
}

