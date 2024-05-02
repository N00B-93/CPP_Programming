#include <iostream>

/**
	This is a program that prompts the user to enter a point (x, y) and checks whether the point is 
	within the rectangle centered at (0, 0) 
with width 10 and height 5.
*/

int main(void)
{
	// Variables to hold the length and width of the rectangle.
	const float LENGTH = 5.0f, WIDTH = 10.0f;

	// Variables to hold the x and y coordinates of the point entered by the user.
	float xCoord(0.0f), yCoord(0.0f);

	// Prompts the user to enter the x and y coordinate of the point.
	std::cout << "\nEnter the x and y coordinates of the point: ";
	std::cin >> xCoord >> yCoord;

	// Displays an error message and terminates the program if the user enters an invalid input.
	if (not std::cin)
	{
		std::cout << "\nError: Use Real numbers only, Try again.\n";
		return (1);
	}

	// Checks of the point is in the rectangle.
	if ((xCoord < (-WIDTH / 2.0) or xCoord > (WIDTH / 2.0)) and (yCoord < (-LENGTH / 2.0) or yCoord > (LENGTH / 2.0)))
		std::cout << "\nPoint (" << xCoord << ", " << yCoord <<")" << " is not in the rectangle.\n";
	else if ((xCoord == (-WIDTH / 2.0) or xCoord == (WIDTH / 2.0)) and (yCoord == (-LENGTH / 2.0) or yCoord == (LENGTH / 2.0)))
		std::cout << "\nPoint (" << xCoord << ", " << yCoord <<")" << " is on the rectangle.\n";
	else if ((xCoord > (-WIDTH / 2.0) or xCoord < (WIDTH / 2.0)) and (yCoord > (-LENGTH / 2.0) or yCoord < (LENGTH / 2.0)))
		std::cout << "\nPoint (" << xCoord << ", " << yCoord <<")" << " is in the rectangle.\n";

	return (0);
}

