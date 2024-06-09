#include <iostream>
#include <cstdlib>
#include <ctime>

/**
	This is a program that plays the popular scissor-rock-paper game. (Scissors can cut a paper, a rock can knock scissors, 
	and a paper can wrap a rock.) The program randomly generates a number 0, 1, or 2 representing scissor, rock, and paper. 
	The program prompts the user to enter a number 0, 1, or 2 and displays a message indicating whether the user or the computer wins, loses, or draws.
*/

enum Choice {ROCK, PAPER, SCISSORS};  // Enum type representing options.

int main(int argc, char** argv)
{
	// Variable to hold user's option and it's .
	int option; 
	Choice userChoice, COMChoice;

	// Seeds the random number generator with the number of seconds passed since the unix epoch.
	srand(time(NULL));

	// Prompts the user to play either Rock, Paper or Scissors.
	std::cout << "\n\t\tROCK PAPER SCISSORS!!!\n";
	std::cout << "\n\tPlay:\n";
	std::cout << "\t\t0 for ROCK";
	std::cout << "\n\t\t1 for PAPER";
	std::cout << "\n\t\t2 for SCISSORS\n";
	std::cout << "\n\t\tSelect an option: ";
	std::cin >> option;

	// Displays an error message and terminates the program if the user's input is invalid.
	if (std::cin.fail() || option < 0 || option > 2)
	{
		std::cout << "\nError: Use a number between 0 and 2, Try again.\n";
		exit(EXIT_FAILURE);
	}
	
	// Assigns a Choice based on the user's input and displays the user's choice.
	switch(option)
	{
		case 0:
			userChoice = static_cast<Choice>(option);
			break;
		case 1:
			userChoice = static_cast<Choice>(option);
			break;
		case 2:
			userChoice = static_cast<Choice>(option);
			break;
	}

	// Randomly generates a choice for COM.
	COMChoice = static_cast<Choice>(rand() % 3);

	// Displays who wins and who losses the game based on the choices selected.
	if (userChoice == ROCK && COMChoice == PAPER)
	{
		std::cout << "\n\tYou played ROCK";
		std::cout << "\n\tCOM played PAPER";
		std::cout << "\n\nCOM Wins!!!\n";
	}
	else if (userChoice == ROCK && COMChoice == SCISSORS)
	{
		std::cout << "\n\tYou played ROCK";
		std::cout << "\n\tCOM played SCISSORS";
		std::cout << "\n\nYou Win!!!\n";
	}
	else if (userChoice == PAPER && COMChoice == ROCK)
	{
		std::cout << "\n\tYou played PAPER";
		std::cout << "\n\tCOM played ROCK";
		std::cout << "\n\nYou Win!!!\n";
	}
	else if (userChoice == PAPER && COMChoice == SCISSORS)
	{
		std::cout << "\n\tYou played PAPER";
		std::cout << "\n\tCOM played SCISSORS";
		std::cout << "\n\nCOM Wins!!!\n";
	}
	else if (userChoice == SCISSORS && COMChoice == PAPER)
	{
		std::cout << "\n\tYou played SCISSORS";
		std::cout << "\n\tCOM played PAPER";
		std::cout << "\n\nYou Win!!!\n";
	}
	else if (userChoice == SCISSORS && COMChoice == ROCK)
	{
		std::cout << "\n\tYou played SCISSORS";
		std::cout << "\n\tCOM played ROCK";
		std::cout << "\n\nCOM Wins!!!\n";
	}
	else if(userChoice == COMChoice)
		std::cout << "\nIt's a Tie!!!\n";

	return (0);
}

