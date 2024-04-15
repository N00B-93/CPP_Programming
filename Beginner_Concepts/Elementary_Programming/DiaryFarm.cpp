#include <stdio.h>
#include <math.h>

/**
	A milk carton can hold 3.78 liters of milk. Each morning, a dairy farm 
	ships cartons of milk to a local grocery store. The cost of producing one 
	liter of milk is $0.38, and the profit of each carton of milk is $0.27.
	This program does the following;
	a. Prompts the user to enter the total amount of milk produced in the morning.
	b. Outputs the number of milk cartons needed to hold milk. (Round your answer to the nearest integer.)
	c. Outputs the cost of producing milk.
	d. Outputs the profit for producing milk.
*/

int main(void)
{
	// Initializes a variable to hold the milk produced.
	float milkProduced(0.0);

	// Prompts the user to enter the total amount of milk produced in the morning.
	printf("\nEnter the number of litres of milk produced in the morning: ");
	scanf("%f", &milkProduced);

	// Determines the number of milk cartons to hold the milk.
	int numberOfCartons = round(milkProduced / 3.78);

	// Determines the cost of producing the milk.
	float cost = 0.38 * milkProduced;

	// Calculates the profit of producing the milk.
	float profit = numberOfCartons * 0.27;

	// Displays the number of cartons needed, the cost and the profit for producing the milk.
	printf("\nNumber of cartons needed to produce %.2f litres of milk: %d\n", milkProduced, numberOfCartons);
	printf("The cost of producing %.2f litres of milk: £ %.2f\n", milkProduced, cost);
	printf("Profit gained from producing %.2f litres of milk: £ %.2f\n", milkProduced, profit);

	return (0);
}

