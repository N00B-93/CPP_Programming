#include <iostream>

/**
	This is a program that prompts the user to enter an integer for 
today’s day of the week (Sunday is 0, Monday is 1, . . . , and Saturday is 6). 
	Also, prompt the user to enter the number of days after today for a future day and displays the future day of the week.
*/

using namespace std;

int main(void)
{
	// Declares variables to hold the value of the current day and the number of days elapsed after the current day.
	int currentDay, numberOfDaysElapsed;

	// Prompts the user to enter the current day.
	cout << "\nEnter the current day(Sunday is 0, Monday is 1...): ";
	cin >> currentDay;

	// Displays an error message and terminates the program if the current day entered by the user is invalid.
	if (std::cin.fail() || currentDay < 0 || currentDay > 6)
	{
		std::cout << "\nError: Use a number from 0 - 6 to represent current day.\n";
		exit(EXIT_FAILURE);
	}

	// Prompts the user to enter the number of days elapsed.
	cout << "\nEnter the number of days elapsed since today: ";
	cin >> numberOfDaysElapsed;

	// Displays an error message and terminates the program if the number of days elapsed entered by the user is invalid.
	if (std::cin.fail() || numberOfDaysElapsed < 0)
	{
		std::cout << "\nError: Number of days should be positive.\n";
		exit(EXIT_FAILURE);
	}

	// Displays the current day.
	switch (currentDay)
	{
		case 0:
			cout << "\nToday is Sunday ";
			break;
		case 1:
			cout << "\nToday is Monday ";
			break;
		case 2:
			cout << "\nToday is Tuesday ";
			break;
		case 3:
			cout << "\nToday is Wednesday ";
			break;
		case 4:
			cout << "\nToday is Thursday ";
			break;
		case 5:
			cout << "\nToday is Friday ";
			break;
		case 6:
			cout << "\nToday is Saturday ";
			break;
		default:
			cout << "\nError: Enter a current day from 0 - 6." << endl;
			return (1);
	}

	// Calculates the future day.
	int futureDay = (currentDay + numberOfDaysElapsed) % 7;

	// Displays the future day.
	switch (futureDay)
	{
		case 0:
			cout << "and the future day is Sunday." << endl;
			break;
		case 1:
			cout << "and the future day is Monday." << endl;
			break;
		case 2:
			cout << "and the future day is Tuesday." << endl;
			break;
		case 3:
			cout << "and the future day is Wednesday." << endl;
			break;
		case 4:
			cout << "and the future day is Thursday." << endl;
			break;
		case 5:
			cout << "and the future day is Friday." << endl;
			break;
		case 6:
			cout << "and the future day is Saturday." << endl;
			break;
	}

	return (0);
}

