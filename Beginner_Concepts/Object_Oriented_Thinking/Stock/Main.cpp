#include <iostream>
#include <iomanip>
#include "Stock.hpp"

/**
	This is a driver program for the Stock class. This program creates a Stock Object with
	a specified symbol and name, then sets the previous closing price and current price to specific values, calculates the percentage price change
	and then displays information about the stock object.
*/

int main(int argc, char* const argv[])
{
	// Creates a Stock Object.
	Stock stock("MSFT", "Microsoft Corporation");
	
	// Sets the previous closing price to £27.50.
	stock.setPreviousClosingPrice(27.50);

	// Sets the current price to £27.60.
	stock.setCurrentPrice(27.60);

	// Displays the Stock's details.
	std::cout << "\n\t\tStock Details\n";
	std::cout << "\nStock Symbol: " << stock.getSymbol()
		  << "\nStock Name: " << stock.getName()
		  << "\nPrevious Closing Price: £" << stock.getPreviousClosingPrice()
		  << "\nCurrent Price: £" << stock.getCurrentPrice()
		  << std::fixed << std::setprecision(2) << "\nPercent Price Change: " << stock.getChangePercent() << "%\n";

	return (0);
}

