#include <iostream>

/**
 	This is a program that prompts the user to enter three integers 
	and then displays the integers in non-decreasing order.
*/

using namespace std;

int main(void)
{
	// Initializes three int variables to hold user input.
	int number1, number2, number3;

	// Prompts the user to enter three integers to be sorted.
	cout << "\nEnter three integers to be sorted separated by space: ";
	cin >> number1 >> number2 >> number3;

	// Sorts the numbers in ascending order.
	if (number1 >= number2 and number2 >= number3)
		cout << "\nThe numbers sorted in ascending order is: " << number3 << " " << number2 << " "  << number1 << endl;
	else if (number1 >= number3 and number3 >= number2)
		cout << "\nThe numbers sorted in ascending order is: " << number2 << " " << number3 << " " << number1 << endl;
	else if (number2 >= number1 and number1 >= number3)
		cout << "\nThe numbers sorted in ascending order is: " << number3 << " " << number1 << " " << number2 << endl;
	else if (number2 >= number3 and number3 >= number1)
		cout << "\nThe numbers sorted in ascending order is: " << number1 << " " << number3 << " " << number2 << endl;
	else if (number3 >= number2 and number2 >= number1)
		cout << "\nThe numbers sorted in ascending order is: " << number1 << " " << number2 << " " << number3 << endl;
	else
		cout << "\nThe number sorted in ascending order is: " << number2 << " " << number1 << " " << number3 << endl;

	return (0);
}

