#include <iostream>

using namespace std;

/**
	This is a program that prompts the user to enter 5 floating point numbers,
	determines their sum and then displays the sum as an integer.
*/

int main(void)
{
	// Initializes 5 variables to hold the floating point numbers entered by the user.
	double number1(0.0), number2(0.0), number3(0.0), number4(0.0), number5(0.0);

	// Prompts the user to enter 5 floating point numbers.
	cout << "\nEnter 5 floating point numbers separated by space: ";
	cin >> number1 >> number2 >> number3 >> number4 >> number5;

	// Determines the sum of the numbers.
	double sum = number1 + number2 + number3 + number4 + number5;

	// Displays the result.
	cout << "\nSum = " << static_cast<int>(sum) <<  endl;

	return (0);
}

