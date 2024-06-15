#include <iostream>

using namespace std;

/**
	This is a program that prompts the user to enter the day number of a week and hours passed, and displays the day and remaining hours.
	For example, if the user entered day number 1 and hours passed 20, the program displays 'Today is Sunday and Remaining Hours: 4'.
*/

int main(void)
{
	// Declares variables to hold the current day and the number of hours passed.
	int currentDay, hoursPassed;

	// Prompts the user to enter the current day.
	cout << "\nEnter the current day(Sunday is 1, Monday is 2...): ";
	cin >> currentDay;
	
	// Displays an error message and terminates the program if the user enters a number not in the range 1 <= currentDay <= 7.
	if (currentDay < 1 or currentDay > 7)
	{
		cout << "\nError: Enter a current day from 1 - 7, Try again." << endl;
		return (1);
	}

	// Prompts the user to enter the number of hours passed.
	cout << "\nEnter the number of hours passed today: ";
	cin >> hoursPassed;

	// Displays an error message and terminates the program if the user enters a number not in the range 1 <= hoursPassed <= 24.
	if (hoursPassed < 1 or hoursPassed > 24)
	{
		cout << "\nError: Use hours in the range 1 <= hoursPassed <= 24, Try again." << endl;
		return (2);
	}
	
	// Displays the current day.
	switch (currentDay)
	{
		case 1:
			cout << "\nToday is Sunday ";
			break;
		case 2:
			cout << "\nToday is Monday ";
			break;
		case 3:
			cout << "\nToday is Tuesday ";
			break;
		case 4:
			cout << "\nToday is Wednesday ";
			break;
		case 5:
			cout << "\nToday is Thursday ";
			break;
		case 6:
			cout << "\nToday is Friday ";
			break;
		case 7:
			cout << "\nToday is Saturday ";
			break;
	}

	int hoursRemaining = 24 - hoursPassed;

	// Displays the hours remaining.
	cout << "\nHours Remaining: " << hoursRemaining << endl;

	return (0);
}

