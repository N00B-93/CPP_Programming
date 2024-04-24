#include <iostream>
#include <cstring>
#include <cctype>

/**
	This is a program that prompts the user to enter a string made of 5 lowercase letters and determines whether it is
	a palindrome string or not.
*/

int main(void)
{
	// Declares a variable to hold the string.
	std::string str;

	// Prompts the user to enter a 5-digit string with lowercase letters.
	std::cout << "\nEnter a string with five lowercase letters: ";
	std::cin >> str;
	
	// Checks if the user uses a 5-lettered string.
	if (str.length() != 5)
		std::cout << "\nError: Use strings with 5 lowercase letters only.\n";
	// Checks whether user input consist of only lowercase letters.
	else if ((not islower(str.at(0))) or (not islower(str.at(1))) or (not islower(str.at(2))) or (not islower(str.at(3))) or (not islower(str.at(4))))
	{
		std::cout << "\nError: Use a string with lowercase letters only, Try again.\n";
		return (1);
	}
	// Checks if the string is a palindrome.
	else if (str[0] == str[4] and str[1] == str[3])
		std::cout << "\n" << str << " is a palindrome.\n";
	else
		std::cout << "\n" << str << " is not a palindrome.\n";

	return (0);
}

