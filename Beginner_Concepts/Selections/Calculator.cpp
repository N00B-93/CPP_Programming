#include <iostream>

using namespace std;

/**
	This is a program that mimics a calculator, the program prompts the user to enter two numbers and a sign and then performs an arithmetic operation
	on the numbers based on the sign.
*/

int main(void)
{
	// Declares variables to hold the numbers and the sign.
	float number1, number2;
	char sign;

	// Prompts the user to enter two numbers and a sign.
	cout << "\nEnter two numbers and a sign(e.g., 2 + 3): ";
	cin >> number1 >> sign >> number2;

	// Carries out an arithmetic operation on the numbers based on the sign.
	switch (sign)
	{
		case '+':
			cout << "\n" << number1 << " " << sign << " " << number2 << " = " << (number1 + number2) << endl;
			break;
		case '-':
			cout << "\n" << number1 << " " << sign << " " << number2 << " = " << (number1 - number2) << endl;
			break;
		case '*':
			cout << "\n" << number1 << " " << sign << " " << number2 << " = " << (number1 * number2) << endl;
			break;
		case '/':
			if (sign == '/' and number2 == 0)
			{
				cout << "\nError: Invalid operation, Denominator cannot be 0.\nTry again." << endl;
				return (1);
			}
			cout << "\n" << number1 << " " << sign << " " << number2 << " = " << (number1 / number2) << endl;
			break;
		default:
			cout << "\nError: Invalid sign!!\nUse '+', '*', '/' or '-'." << endl;
			break;
	}

	return (0);
}

