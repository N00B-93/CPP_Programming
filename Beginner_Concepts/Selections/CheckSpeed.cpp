#include <iostream>
#include <iomanip>

/**
	This is a program that prompts the user to enter the speed of a vehicle. If speed is less than 20, display 'too slow'; if speed is greater 
	than 80, display 'too fast'; otherwise, display 'just right'.
*/

using namespace std;

int main(void)
{
	// Initializes a variable to hold the vehicle speed.
	float speed(0.0);

	// Prompts the user to enter the vehicle speed.
	cout << "\nPlease enter the vehicle speed: ";
	cin >> speed;

	// Displays an error message and terminates the program if the user enters a negative speed.
	if (speed < 1 || std::cin.fail())
	{
		cout << "\nError: Speed must be non-negative and greater than 0, Try again." << endl;
		return (1);
	}
	else if (speed < 20)
		cout << "\ntoo slow" << endl;  // Informs the user that he/she is moving too slow.
	else if (speed > 80)
		cout << "\ntoo fast" << endl;  //Informs the user that he/she is moving to fast.
	else
		cout << "\njust right" << endl; // Informs the user that his/her speed is just right.

	return (0);
}
