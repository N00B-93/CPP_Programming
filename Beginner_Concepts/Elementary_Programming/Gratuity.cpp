#include <iostream>
#include <stdio.h>

using namespace std;

/**
	This is a program that prompts the user to enter the subtotal and gratuity
	rate and then displays the gratuity and the and the total.
*/

int main(void)
{
	// Initializes variables to hold the subtotal and gratuity rate.
	double subtotal(0.0), gratuityRate(0.0);

	// Prompts the user to enter the subtotal.
	cout << "\nEnter the subtotal: £ ";
	cin >> subtotal;

	// Prompts the user to enter the gratuity rate.
	cout << "\nEnter the gratuity rate: ";
	cin >> gratuityRate;

	// Calculates the gratuity.
	double gratuity = (gratuityRate / 100.0) * subtotal;

	// Calculates the total.
	double total = gratuity + subtotal;

	// Displays the result.
	printf("\nGratuity: £ %.2f\nTotal: £ %.2f\n", gratuity, total);

	return (0);
}

