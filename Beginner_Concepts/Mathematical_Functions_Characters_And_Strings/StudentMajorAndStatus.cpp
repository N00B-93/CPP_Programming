#include <iostream>
#include <cstring>

/**
	This is a program that prompts the user to enter two characters and displays the major and status represented in the characters. 
	The first character indicates the major and the second is the number character 1, 2, 3, 4, which indicates whether 
	a student is a freshman, sophomore, junior, or senior. */

int main(void)
{
	// Declares two variables to hold a major and a status code.
	char major, status;
	std::string majorAndStatusCode;

	// Prompts the user to enter a major and a status code.
	std::cout << "\nMajor";
	std::cout << "\nM: Mathematics\nC: Computer Science\nI: Information Technology\n";
	std::cout << "\nStatus Code";
	std::cout << "\n1. Freshman\n2. Sophomore\n3. Junior\n4. Senior";
	std::cout << "\nEnter a major and status code(e.g. M2): ";
	getline(std::cin, majorAndStatusCode);
	
	major = majorAndStatusCode.at(0);
	status = majorAndStatusCode.at(1);

	// Displays a major and a status besed on user input.
	switch (major)
	{
		case 'M':
			if (status == '1')
				std::cout << "\nMathematics Freshman.\n";
			else if (status == '2')
				std::cout << "\nMathematics Sophomore.\n";
			else if (status == '3')
				std::cout << "\nMathematics Junior.\n";
			else if (status == '4')
				std::cout << "\nMathematics Senior.\n";
			else
				std::cout << "\nError: Invalid status code.\n";
			break;
		case 'C':
			if (status == '1')
				std::cout << "\nComputer Science Freshman.\n";
			else if (status == '2')
				std::cout << "\nComputer Science Sophomore.\n";
			else if (status == '3')
				std::cout << "\nComputer Science Junior.\n";
			else if (status == '4')
				std::cout << "\nComputer Science Senior.\n";
			else
				std::cout << "\nError: Invalid status code.\n";
			break;
		case 'I':
			if (status == '1')
				std::cout << "\nInformation Technology Freshman.\n";
			else if (status == '2')
				std::cout << "\nInformation Technology Sophomore.\n";
			else if (status == '3')
				std::cout << "\nInformation Technology Junior.\n";
			else if (status == '4')
				std::cout << "\nInformation Technology Senior.\n";
			else
				std::cout << "\nError: Invalid status code.\n";
			break;
		default:
			std::cout << "\nError: Invalid Major code, Try again.\n";
			break;
	}

	return (0);
}

