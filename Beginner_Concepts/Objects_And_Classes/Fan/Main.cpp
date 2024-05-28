#include <iostream>
#include "Fan.hpp"

/**
	This is a program that tests the functionalities of the Fan class.
*/

void getDetails(Fan fan);  // Prototype of the getDetails function.

int main(int argc, char* argv[])
{
	// Creates two Fan Objects.
	Fan fan1 = Fan();
	Fan fan2 = Fan();

	// Changes the speed of fan1 to FAST, it's state to on and it's radius to 10.0.
	fan1.fanSpeed = FAST;
	fan1.radius = 10.0;
	fan1.on = true;

	// Changes the speed of fan2 to MEDIUM, it's state to OFF and it's radius to 5.0.
	fan2.fanSpeed = MEDIUM;
	fan2.radius = 5.0;
	fan2.on = false;
	
	// Displays the details of each Fan.
	std::cout << "\n\t\tFan Details";
	getDetails(fan1);
	getDetails(fan2);

	return (0);
}

/**
 * Displays the properties of a Fan.
 *
 * @param fan The Fan Object whose properties is to be displayed.
 */
void getDetails(Fan fan)
{
	fan.on ? std::cout << "\nStatus: ON" : std::cout << "\nStatus: OFF";
	std::cout << "\nRadius: " << fan.radius;
	std::cout << "\nSpeed: " << fan.fanSpeed;
	std::cout << "\n";
}

