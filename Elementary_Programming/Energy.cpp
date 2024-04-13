#include <iostream>

using namespace std;

/**
	This is a program that prompts the user to enter an initial, final temperature and mass of water and then calculate 
	the amount of energy needed to change the temperature of water from the initial to final temperature
*/

int main(void)
{
	// Initializes variables to hold the initial, final temperature and mass of water.
	float t1(0.0), t2(0.0), m(0.0);

	// Initializes a constant to hold the specific heat capacity of water.
	const int SPECIFIC_HEAT_CAPACITY_OF_WATER = 4184;

	// Prompts the user to enter the initial temperature in °C.
	cout << "\nEnter the initial temperature of water: ";
	cin >> t1;

	// Prompts the user to enter the final temperature of water in °C.
	cout << "\nEnter the final temperature of water: ";
	cin >> t2;

	// Prompts the user to enter the mass of water in kg.
	cout << "\nEnter the mass of water in kg: ";
	cin >> m;
	
	// Calculate the energy required.
	float energy = m * (t2 - t1) * SPECIFIC_HEAT_CAPACITY_OF_WATER;

	// Displays the result.
	cout << "\nEnergy required: " << energy << " J" << endl;

	return (0);
}

