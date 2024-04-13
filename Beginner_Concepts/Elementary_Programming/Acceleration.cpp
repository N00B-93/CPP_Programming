#include <iostream>

using namespace std;

/**
	This is a program that prompts the user to enter an initial velocity, final
	velocity and a time interval and then displays the corresponding acceleration.
*/

int main(void)
{
	// Initializes variables to hold the initial, final velocities and the time interval.
	float vi(0.0), vf(0.0), t(0.0);

	// Prompts the user to enter the initial velocity.
	cout << "\nEnter the initial velocity: ";
	cin >> vi;

	// Prompts the user to enter the final velocity.
	cout << "\nEnter the final velocity: ";
	cin >> vf;

	// prompts the user to enter the time inteval.
	cout << "\nEnter the time: ";
	cin >> t;

	// Calculates the acceleration.
	float acceleration = (vf - vi) / t;

	// Displays the result.
	cout << "\nThe acceleration is: " << acceleration << endl;

	return (0);
}

