#include <iostream>
#include <string>

std::string longest(const std::string& s1, const std::string& s2);

/**
	This is a program that prompts the user to enter two strings and then returns the longest of
	the two string using a function with header;
			string longest(const string& s1, const string& s2)
*/

int main(void)
{
	// Variable to hold the two strings entered by the user.
	std::string str1, str2;

	// Prompts the user to enter the first strings.
	std::cout << "\nEnter the first string: ";
	getline(std::cin, str1);

	// Prompts the user to enter the second string.
	std::cout << "\nEnter the second string: ";
	getline(std::cin, str2);

	// Displays an error message and termiates the program if the user enters an empty string.
	if (str1 == "" or str2 == "")
	{
		std::cout << "\nError: Use non empty strings only, Try again.\n";
		exit(EXIT_FAILURE);
	}

	// Displays the longest of the two strings.
	if (longest(str1, str2) == "")
		std::cout << "\nBoth string has the same length.\n";
	else
		std::cout << "\nThe longest of the two strings is: '" << longest(str1, str2) << "'\n";

	return (0);
}

/**
 * Determines the longest of two strings.
 *
 * @param s1 The first string.
 * @param s2 The second string.
 * @return The longest of the two string, or an empty string is returned if both string has the same length.
 */
inline std::string longest(const std::string& s1, const std::string& s2)
{
	if (s1.length() == s2.length())
		return "";
	std::string longest = s1.length() > s2.length() ? s1 : s2;

	return longest;
}

