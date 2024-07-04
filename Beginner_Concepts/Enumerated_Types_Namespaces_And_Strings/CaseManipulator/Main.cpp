#include <iostream>
#include "CaseManipulator.hpp"

int main(int argc, char* const argv[])
{
	// Variable to hold the user's input.
	std::string str;

	// Prompts the user to enter a string.
	std::cout << "\nEnter a string: ";
	getline(std::cin, str);

	// Displays an error message and terminates the program if the user enters an empty string.
	if (str.empty())
	{
		std::cout << "\nError: Use non empty strings only, Try again.\n";
		return (1);
	}

	// Displays the string in uppercase.
	char ptr[] = str.c_str();
	capitalize(ptr);
	std::cout << "\n" << str << "\n";
}
