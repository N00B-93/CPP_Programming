#include <stdio.h>
#include <math.h>

/**
	This is a program that reads in investment amount, annual interest rate, and
	number of years, and displays the future investment value using the following formula:
			futureInvestmentValue = investmentAmount x (1 + monthlyInterestRate) ^ (numberOfYears * 12)
*/

int main(void)
{
	// Initializes variables to hold the investment amount, annual interest rate and number of years.
	float investmentAmount(0.0), annualInterestRate(0.0), years(0.0);

	// Prompts the user to enter the investment amount.
	printf("\nEnter the investment amount: ¥ ");
	scanf("%f", &investmentAmount);

	// Prompts the user to enter the annual interest rate.
	printf("\nEnter the annual interest rate(e.g., 3%%): ");
	scanf("%f", &annualInterestRate);

	// Prompts the user to enter the number of years.
	printf("\nEnter the number of years: ");
	scanf("%f", &years);
	
	// Calculates the monthly interest rate.
	float monthlyInterestRate = annualInterestRate / 1200;  // Divided by 1200 instead of 12 because i converted the monthly interest rate to %.

	// Calculates the future investment value.
	float futureInvestmentValue = investmentAmount * pow((1 + monthlyInterestRate), years * 12);
	
	// Displays the result.
	printf("\nThe future investment value is: ¥ %.2f\n", futureInvestmentValue);

	return (0);
}

