#include <iostream>

using namespace std;

/**
	This is a program that prompts the user to enter the radius and length of a
	cylinder and displays it's curved surface area and volume.
*/

int main(void)
{
	// Initializes variables to hold the cylinder's radius and length.
	float radius = 0.0, length = 0.0;

	// Creates a constant variable to hold the value of π.
	const float PI = 3.142;

	// Prompts the user to enter the radius and length of the cylinder separated by space.
	cout << "\nEnter the radius and length of the cylinder separated by space: ";
	cin >> radius >> length;

	// calculate the curved surface area and the volume of the cylinder.
	float curvedSurfaceArea = PI * pow(radius, 2);
	float volume = PI * pow(radius, 2) * length;

	// Diaplays the curved surface area and volume.
	cout << "\nCurved Surface Area = " << curvedSurfaceArea;
	cout << "\nVolume = " << volume << endl;

	return (0);
}

