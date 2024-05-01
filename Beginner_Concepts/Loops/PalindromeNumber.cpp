#include <iostream>

/**
	This is a program that prompts the user to enter a positive integer and checks whether the 
	number is a palindrome or not.
*/

int main(void)
{
	// Variable to hold the user's input as a string.
	std::string input;

	// Prompts the user to enter a positive integer.
	std::cout << "\nEnter a positive integer: ";
	std::cin >> input;

	// Displays an error message and terminates the program if the user enters an invalid input.
	if (not std::cin or std::stoi(input) < 0 or input[0] == '0')
	{
		std::cout << "\nError: Use positive integers without leading 0's only, Try again.\n";
		return (1);
	}
	
	int reverse(0), number = std::stoi(input), tempVar(number);

	while (number != 0)
	{
		int remainder = number % 10;
		reverse = reverse * 10 + remainder;
		number /= 10;
	}
	
	// Checks if the number is the same as it's reverse.
	bool isPalindrome = reverse == tempVar;
	
	// Displays whether the number is a palindrome or not.
	if (isPalindrome)
		std::cout << "\n" << tempVar << " is a palindrome.\n";
	else
		std::cout << "\n" << tempVar << " is not a palindrome.\n";

	return (0);
}

