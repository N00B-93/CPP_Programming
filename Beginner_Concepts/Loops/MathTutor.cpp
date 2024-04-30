#include <iostream>
#include <cstdlib>
#include <ctime>
#include <cstring>

/**
	This is a program that displays a menu of mathematical operations(addition, subtraction, multiplication and division), the user is then to prompted 
	to enter a choice and then a mathematical expression generated using random numbers is displayed and the user is then prompted to enter a solution
	to the generated mathematical expression. After the user provides an answer, the user is informed if the answer is right or wrong, then the user is 
	then redirected to the main menu, the user can exit the program by entering 5 in the main menu.
*/

int main(void)
{
	// Seeds the random number generator with the number of seconds after the Linux epoch.

	// String to hold invalid user input.
	std::string clearInputStream;

	// Variable to hold the user's answer.
	int answer;

	srand(time(NULL));

	while (true)
	{
		// Variable to hold user's choice.
		int choice;

		// Displays the main menu.
		std::cout << "\nMain Menu"
			  << "\n1. Addition"
			  << "\n2. Subtraction"
			  << "\n3. Multiplication"
			  << "\n4. Division"
			  << "\n5. Exit"
			  << "\n\nEnter a choice: ";
		std::cin >> choice;

		if (not std::cin or (choice < 1 or choice > 5))
		{
			std::cin.clear();
			std::cout << "\nError: Enter a choice from 1 - 5, Try again.\n";
			getline(std::cin, clearInputStream);
			continue;
		}

		// Generates two random numb    ers between 1 and 99.
		int number1 = 1 + rand() % 100;
		int number2 = 1 + rand() % 100;

		switch (choice)
		{
			case 1:
				// Display an arithmetric expression.
				std::cout << "\nWhat is " << number1 << " + " << number2 << "? ";
				std::cin >> answer;

				// Displays if the user is right or wrong.
				if (answer == (number1 + number2))
					std::cout << "\nCorrect!\n";
				else
					std::cout << "\nWrong, the correct answer is " << number1 + number2 << "\n";
				break;
			case 2:
				// Displays an arithmetric expression.
				std::cout << "\nWhat is " << number1 << " - " << number2 << "? ";
				std::cin >> answer;

				// Displays if the u ser is right or wrong.
				if (answer == (number1 - number2))
					std::cout << "\nCorrect!\n";
				else
					std::cout << "\nWrong, the correct answer is " << number1 - number2 << "\n";
				break;
			case 3:
				// Displays an arithmetric expression.
				std::cout << "\nWhat is " << number1 << " x " << number2 << "? ";
				std::cin >> answer;

				// Displays if the u ser is right or wrong.
				if (answer == (number1 * number2))
					std::cout << "\nCorrect!\n";
				else
					std::cout << "\nWrong, the correct answer is " << number1 * number2 << "\n";
				break;
			case 4:
				// Displays an arithmetric expression.
				std::cout << "\nWhat is " << number1 << " / " << number2 << "? ";
				std::cin >> answer;

				// Displays if the user is right or wrong.
				if (answer == (number1 / number2))
					std::cout << "\nCorrect!\n";
				else
					std::cout << "\nWrong, the correct answer is " << number1 / number2 << "\n";
				break;
			case 5:
				// Exits the program.
				return (0);
		}
	}
}

