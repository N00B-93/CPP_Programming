#include <iostream>
#include <string>

/**
	This is a program that prompts the user to enter the number of items and each item’s name 
	and price, and finally displays the name and price of the item with the lowest price.
*/

int main(void)
{
	// Variable to hold the number of items, item's name, price and user's invalid input.
	std::string itemName = "", clearInputStream = "";
	float itemPrice = 0.0f;
	int numberOfItems = 0;

	// Prompts the user to enter the number of items.
	std::cout << "\nEnter the number of items: ";
	std::cin >> numberOfItems;

	// Displays an error message and terminates the program if the user enters a number of items <= 0.
	if (std::cin.fail() || numberOfItems <= 0)
	{
		std::cerr << "\nError: Number of items must be greater than 0, Try again.\n";
		return (1);
	}

	// Variable to hold the name and price of the cheapest item.
	float priceOfLowestItem(0.0f);
	std::string nameOfLowestItem("");

	// Prompts the user to enter the name and price of all items.
	for (int i = 0; i < numberOfItems; ++i)
	{
		std::cout << "\nEnter item " << i + 1 <<"'s price: $";
		std::cin >> itemPrice;
		
		// Displays an error message if the user enters an invalid price.
		if (std::cin.fail() || itemPrice <= 0)
		{
			std::cin.clear();
			getline(std::cin, clearInputStream);  // Assigns the invalid user input to a string so as to clear stdin.
			std::cerr << "\nError: Price of an item must be greater than 0, Try again.\n";
			i--;
			continue;
		}
		
		// Clears the input stream of unwanted newline character.
		getline(std::cin, clearInputStream);

		// Prompts the user to enter the item's name.
		std::cout << "Enter item " << i + 1 << "'s name: ";
		getline(std::cin, itemName);
		
		// Assigns the price of the first item to the priceOfLowestItem variable.
		if (i == 0)
			priceOfLowestItem = itemPrice;
			
		// Checks if the price of the lowest item is greater than the price of the current item.
		if (priceOfLowestItem > itemPrice)
		{
			// Assigns the price and name of the current item to the priceOfLowestItem and nameOfLowestItem variables if the current price is < priceOfLowestItem.
			priceOfLowestItem = itemPrice;
			nameOfLowestItem = itemName;
		}
	}

	// Displays the name and price of the lowest item.
	std::cout << "\n\nLowest Item's price: $" << priceOfLowestItem;
	std::cout << "\nName of Lowest Item: " << nameOfLowestItem << "\n";

	return (0);
}

