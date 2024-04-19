#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

/**
	This is a program that randomly generates two integers less than 50 and prompts the user to enter the product of the two numbers. If the user input
	is correct, 'correct!' is displays, else 'wrong!' and the correct answer is displayed on the screen.
*/

int main(void)
{
	// Generates two random numbers < 50.
	srand(time(NULL));
	int number1 = rand() % 50;
	int number2 = rand() % 50;

	// Determines the product of the two random numbers.
	int product = number1 * number2;

	// Declares a variable to hold the user's answer.
	int answer;

	// Prompts the user to enter the answer of the product of the two numbers.
	cout << endl;
	cout << number1 << " * " << number2 << ": ";
	cin >> answer;
	
	// Checks whether the user input is right or wrong.
	answer == product ? cout << "\nCorrect!" << endl : cout << "\nWrong!\nThe answer is: " << product << endl;

	return (0);
}

