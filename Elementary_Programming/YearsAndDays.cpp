#include <iostream>

using namespace std;

/**
	This is a program that prompts the user to enter a numbers of minutes and
	displays the number of years anf days for the minutes entered by the user.
*/

int main(void)
{
	// Initializes a variable to hold the minutes entered by the user.
	long minutes = 0;

	// Prompts the user to enter a number of minutes.
	cout << "\nEnter a number of minutes: ";
	cin >> minutes;

	// Converts the minutes to years.
	int years = minutes / 525600;

	// Determines the number of days.
	int days = minutes % 525600 / 1440;

	// Displays the number of years and days.
	cout << "\n" << " minutes is approximately " << years << " years and " << days << " days.\n" << endl;

	return (0);
}

