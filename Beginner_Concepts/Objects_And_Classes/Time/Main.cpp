#include <iostream>
#include "Time.hpp"

/**
	This is a program that tests the functionalities of the Time class.
*/

int main(void)
{
	// Creates two Time Objects.
	Time time1;
	Time time2(555550);
	
	// Displays the current time represented by the two Time Objects.
	std::cout << "\nCurrent Time: " << time1.hours << ":" << time1.minutes << ":" << time1.seconds << "\n";
	std::cout << "\nCurrent Time: " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << "\n";

	// Sets the time of time1 to another time.
	time2.setElapsedTime(12665437789);

	// Displays the new time.
	std::cout << "\nAfter setting a new time for time2...";
	std::cout << "\nCurrent Time: " << time2.hours << ":" << time2.minutes << ":" << time2.seconds << "\n";

	return (0);
}

