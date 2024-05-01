#include <iostream>
#include <cstring>

/**
	This is a program that prompts the user to enter a letter and displays its corresponding number
	based on the international standard letter/number mapping.
*/

int main(void)
{
	// Variable to hold the letter entered by the user.
	char letter;

	// Prompts the user to enter a letter.
	std::cout << "\nEnter an uppercase or lowercase letter: ";
	std::cin >> letter;

	// Displays an error meassage and terminates the program if the user input is not an alphabet.
	if (not isalpha(letter))
	{
		std::cout << "\nError: Use uppercase or lowercase letters only, Try again.\n";
		return (1);
	}
	// Displays a number based on the letter entered by the user.
	else if (std::string("abcABC").find(letter) != std::string::npos)
		std::cout << "\nThe corresponding number is: 2\n" ;
	else if (std::string("defDEF").find(letter) != std::string::npos)
		std::cout << "\nThe corresponding number is: 3\n";
	else if (std::string("ghiGHI").find(letter) != std::string::npos)
		std::cout << "\nThe corresponding number is: 4\n";
	else if (std::string("jklJKL").find(letter) != std::string::npos)
		std::cout << "\nThe corresponding number is: 5\n";
	else if (std::string("mnoMNO").find(letter) != std::string::npos)
		std::cout << "\nThe corresponding number is: 6\n";
	else if (std::string("pqrsPQRS").find(letter) != std::string::npos)
		std::cout << "\nThe corresponding number is: 7\n";
	else if (std::string("tuvTUV").find(letter) != std::string::npos)
		std::cout << "\nThe corresponding number is: 8\n";
	else if (std::string("wxyzWXYZ").find(letter != std::string::npos))
		std::cout << "\nThe corresponding number is: 9\n";
	
	return (0);
}
