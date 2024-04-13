#include <iostream>
#include <ctime>

using namespace std;

/**
	This is a program that prompts the user to enter a time offset and displays
	the current GMT time taking into consideration the offset time entered.
*/

int main(void)
{
	// Variable to hold time offset.
	int offset = 0;

	// Prompts the user to enter the time offset.
	cout << "\nPlease enter the time zone offset to GMT: ";
	cin >> offset;

	// Calculate the total seconds since linux epoch(Jan 1, 1970).
	long totalSeconds = time(0);

	// Determines the current second.
	long currentSecond = totalSeconds % 60;

	// Determines the total minutes.
	long totalMinutes = totalSeconds / 60;

	// Determines the current minute.
	long currentMinute = totalMinutes % 60;

	// Determines the total hours.
	long totalHours = totalMinutes / 60;

	// Determines the current hour.
	long currentHour = (totalHours + offset)  % 24;

	// Displays the current time.
	cout << "\nCurrent Time: " << currentHour << ":" << currentMinute << ":" << currentSecond << " GMT" << endl;

	return (0);
}

