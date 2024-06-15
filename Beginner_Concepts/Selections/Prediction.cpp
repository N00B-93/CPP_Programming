#include <iostream>
#include <cstdlib>
#include <ctime>
#include <string>

/**
	This is a program that generates a random two-digit integer. The program prompts the user to predict the generated number by entering a 2-digit 
	integer, and then determines the accuracy of the user’s prediction according to the following rules:
	If the user’s prediction matches the generated number exactly, the accuracy is 100%. 
	If one digit in the user’s predicted number matches a digit in the generated number, the accuracy is 50%.
	If none of the digits in user’s predicted number matches with the generated number, the accuracy is 0%.
*/

int main()
{
	// Creates two variable to hold the randomly generated 2-digit number and the user's guess.
	std::string input;
	int randomNumber;

	// Seeds the random number generator with the number of seconds since the Linux epoch.
	srand(time(NULL));

	// Generates a random two digit number.
	randomNumber = 10 + rand() % (99 - 10);

	// Prompts the user to enter a two digit number.
	std::cout << "\nEnter a 2-digit number: ";
	std::cin >> input;

	// Displays an error message and terminates the program if the user's input is invalid.
	if (input.length() != 2 || (!isdigit(input[0])) || (!isdigit(input[1])))
	{
		std::cout << "\nError: Use a 2-digit number only, Try again.\n";
		return (1);
	}

	// Variables to hold the first and second digit of the number entered by the user.
	int firstDigit = input[0] - '0';
	int secondDigit = input[1] - '0';

	// Displays the random number generated.
	std::cout << "\nNumber Generated: " << randomNumber;

	// Checks if the user's guess is 100%, 50% or 0% accurate.
	if (randomNumber == std::stoi(input))
		std::cout << "\nCorrect guess!\n100% Accuracy!\n";
	else if ((firstDigit == randomNumber / 10) || (firstDigit == randomNumber % 10) || (secondDigit == randomNumber / 10) || (secondDigit == randomNumber % 10))
		std::cout << "\nOne digit matched!\n50% Accuracy!\n";
	else
		std::cout << "\nNo match!\n0% Accuracy!\n";

	return (0);
}
