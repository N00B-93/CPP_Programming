#include <iostream>

/**
	This is a program that prompts the user to enter a letter grade A/a, B/b, C/c, D/d, or F/f and displays its 
	corresponding numeric value 4, 3, 2, 1, or 0. 
*/

int main(void)
{
	// Declares a variable to hold the letter grade.
	char letterGrade;

	// Prompts the user to enter a letter grade.
	std::cout << "\nEnter a letter grade: ";
	std::cin >> letterGrade;

	// Displays a numeric value based on user input.
	switch (letterGrade)
	{
		case 'A':
		case 'a':
			std::cout << "\nNumeric value for grade '" << letterGrade << "' is: 4.\n";
			break;
		case 'B':
		case 'b':
			std::cout << "\nNumeric value for grade '" << letterGrade << "' is: 3.\n";
			break;
		case 'C':
		case 'c':
			std::cout << "\nNumeric value for grade '" << letterGrade << "' is: 2.\n";
			break;
		case 'D':
		case 'd':
			std::cout << "\nNumeric value for grade '" << letterGrade << "' is: 1.\n";
			break;
		case 'F':
		case 'f':
			std::cout << "\nNumeric value for grade '" << letterGrade << "' is: '0'.\n";
			break;
		default:
			std::cout << "\nError: Invalid grade, Try again.\n";
			break;
	}

	return (0);
}

