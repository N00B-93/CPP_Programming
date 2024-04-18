#include <iostream>

/**
	The short-term, 0-24 hours, parking fee, F, at an international airport is given by the following formula:
			5		if 0 <= h <= 3
		   F =  6 x int(h + 1)	if 3 < h <= 9
			60		if 9 < h <= 24
	This is a program that prompts the user to enter the number of hours a car is parked at the airport and outputs the parking fee.
*/

using namespace std;

int main(void)
{
	// Declares a variable to hold the number of hours a car has been parked and parking fee.
	float numberOfHours;
	int parkingFee;

	// Prompts the user to enter the number of hours a car is parked.
	cout << "\nPlease enter the number of hours your car has been parked: ";
	cin >> numberOfHours;

	// Displays an error message and terminates the program if the number of hours entered by the user is not in the range 0 <= h <= 24.
	if (numberOfHours < 0 or numberOfHours > 24)
	{
		cout << "\nError: The number of hours parked must be in the range 0 <= h <= 24, Try again." << endl;
		return (1);
	}
	else if (numberOfHours <= 3.0)
	{
		parkingFee = 5;
		cout << "\nYour parking fee is: £ "
		     << parkingFee << endl;
	}
	else if (numberOfHours > 3.0 and numberOfHours <= 9.0)
	{
		parkingFee = 6 * static_cast<int>(numberOfHours + 1);
		cout << "\nYour parking fee is: £ "
		     << parkingFee << endl;
	}
	else
	{
		parkingFee = 60;
		cout << "\nYour parking fee is: £ "
		     << parkingFee << endl;
	}

	return (0);
}

