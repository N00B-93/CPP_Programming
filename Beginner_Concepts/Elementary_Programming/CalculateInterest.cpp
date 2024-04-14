#include <stdio.h>

/**
	This is a program that prompts the user to enter a balance(principal) and annual
	interest rate and then displays the interest for the next month using the formular;
			interest = (balance * interestRate) / 1200
*/

int main(void)
{
	// Initialize variables to hold the balance and interestRate.
	float balance(0.0), interestRate(0.0);

	// Prompts the user to enter the balance.
	printf("\nEnter the balance: € ");
	scanf("%f", &balance);

	// Prompts the user to enter interest rate.
	printf("\nEnter the interest rate(e.g., 3%%): ");
	scanf("%f", &interestRate);

	// Calculates the interest for the next month.
	float interest = balance * interestRate / 1200;

	// Displays the result.
	printf("\nThe interest for the next month is: € %.2f\n", interest);

	return (0);
}

