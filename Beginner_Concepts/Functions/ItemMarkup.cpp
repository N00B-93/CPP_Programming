#include <iostream>
#include <iomanip>

/**
    This is a program that prompts the user to enter the wholesale cost of item and the markup percentage
	  and then displays the items retail price.
	  The retail price is determined by using a function with the header;
				    float calculateRetailPrice(const float wholeSaleCost, const float markupPercent)
*/

float calculateRetailPrice(const float wholeSaleCost, const float markupPercent);  // Prototype of the calculateRetailPrice function.

int main(void)
{	
    // Variables to hold the wholesale  cost and the markup percentage.
	  float wholeSaleCost(0.0), markupPercent(0.0);

	  // Prompts the user to enter the wholesale cost and the markup percentage.
	  std::cout << "\nEnter the wholesale cost and markup percent(e.g. 3%): ";
	  std::cin >> wholeSaleCost >> markupPercent;

	  // Displays an error message and terminates the pogram if the user input is invalid.
	  if (std::cin.fail() || wholeSaleCost <= 0 || markupPercent <= 0)
	  {
		    std::cout << "\nError: Wholesale cost and markup percent must be > 0, Try again.\n";
		    exit(EXIT_FAILURE);
	  }

    // Determines the retail price.
     float retailPrice = calculateRetailPrice(wholeSaleCost, markupPercent / 100);

     // Displays the result.
     std::cout << std::fixed << std::setprecision(2) << "\nThe retail price is: $" << retailPrice << "\n";

	   return (0);
}

/**
 * Calculate the reatail price of an item.
 *
 * @param wholeSaleCost The wholesale cost of the item.
 * @param The percentage markup of the item's price.
 * @return The items retail price.
 */
float calculateRetailPrice(const float wholeSaleCost, const float markupPercent)
{
    float retailPrice = wholeSaleCost + (markupPercent * wholeSaleCost);

    return retailPrice;
}

