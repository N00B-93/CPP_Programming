#include <iostream>
#include <cstring>
#include <cctype>

/**
	Some colleges impose certain rules for Student ID. Suppose the Student ID rules are as follows:
	A Student ID must have exactly ten characters.
	A Student ID must consist of only digits and letters.
	A Student ID must always start with a digit.
	This program prompts the student to enter a Student ID and displays valid Student ID if the rules are followed 
	or invalid Student ID otherwise.
*/

int main(void)
{
	// Declares a variable to hold the student ID.
	std::string studentID;

	// Prompts the user to enter a Student ID.
	std::cout << "\nEnter a student ID: ";
	std::cin >> studentID;

	// Checks if the Student ID is 10 characters long.
	bool studentIDLength = studentID.length() == 10;
	
	// Checks if the first character is a digit.
	bool firstCharacterIsDigit = isdigit(studentID[0]);

	// Checks if the characters of the Student ID is alphanumeric.
	bool alphanumericCharacters = true;

	for (int i = 0; i < studentID.size(); ++i)
	{
		if (!(isalnum(studentID[i])))
		{
			alphanumericCharacters = false;
			break;
		}
	}

	// Checks if the Student ID is valid.
	if (studentIDLength and firstCharacterIsDigit and alphanumericCharacters)
		std::cout << "\n" << studentID << " is a valid Student ID.\n";
	else
		std::cout << "\n" << studentID << " is not a valid Student ID.\n";

	return (0);
}

