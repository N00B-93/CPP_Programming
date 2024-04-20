#include <cstring>
#include <cctype>
#include <iostream>

using namespace std;

/**
	This is a program that prompts the user to enter a Social Security number in the format ddd-dd-dddd, where d is a digit. 
	and then checks whether the user input is a valid SSN or not.
*/

int main(void)
{
	// Declares a string variable to hold the user input.
	string ssn = "";

	// Prompts the user to enter an SSN number.
	cout << "\nEnter an SSN number(e.g., ddd-dd-dddd): ";
	cin >> ssn;

	// Displays an error message and terminates the program if the length of the SSN is not 11.
	if (ssn.size() != 11)
	{
		cout << "\nError: Invalid SSN length, SSN must be in this format: ddd-dd-dddd.\n" << endl;
		return (1);
	}
	
	// Extracts the two '-' delimiters from the SSN number.
	char delimiter1 = ssn.at(3), delimiter2 = ssn.at(6);
	
	// Checks if the two delimiters are the same as '-'.
	bool checkDelimiter = delimiter1 == delimiter2 and delimiter2 == '-';

	// Displays an error message and terminates the program if the two delimiters are not equal to '-'.
	if (not checkDelimiter)
	{
		cout << "\n" << ssn << " is not a valid SSN number.\n";
		return (2);
	}

	// Checks that the first three characters are numeric characters.
	bool checkFirstThreeDigits = isdigit(ssn.at(0)) and isdigit(ssn.at(1)) and isdigit(ssn.at(2));

	// Checks that the middle two characters are numeric characters.
	bool middleTwoCharacters = isdigit(ssn.at(4)) and isdigit(ssn.at(5));

	// Checks that the last four characters are numeric characters.
	bool lastFourCharacters = isdigit(ssn.at(7)) and isdigit(ssn.at(8)) and isdigit(ssn.at(9)) and isdigit(ssn.at(10));

	// Checks it the SSN number is valid or not.
	if (checkFirstThreeDigits and middleTwoCharacters and lastFourCharacters)
		cout << "\n" << ssn << " is a valid SSN number.\n";
	else
		cout << "\n" << ssn << " is not a valid SSN number.\n";

	return (0);
}

