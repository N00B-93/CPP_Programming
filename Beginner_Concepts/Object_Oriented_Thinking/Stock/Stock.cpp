#include "Stock.hpp"

/**
 * Instantiates a new Stock Object.
 *
 * @param stockSymbol An acronym representing a Stock.
 * @param stockName The Stock's name.
 */
Stock::Stock(const std::string stockSymbol, const std::string stockName)
{
	symbol = stockSymbol;
	name = stockName;
}

/**
 * This returns a Stock's symbol.
 *
 * @return A Stock's symbol.
 */
std::string Stock::getSymbol() const
{
	return symbol;
}

/**
 * This returns a Stock's name.
 *
 * @return A Stock's name.
 */
std::string Stock::getName() const
{
	return name;
}

/**
 * This returns a Stock's previous price.
 *
 * @return A Stock's previous closing price.
 */
double Stock::getPreviousClosingPrice() const
{
	return previousClosingPrice;
}

/**
 * This returns a Stock's current Price.
 *
 * @return A Stock's current price.
 */
double Stock::getCurrentPrice() const
{
	return currentPrice;
}

/**
 * This sets the previous closing price to the specified value.
 *
 * @param newPreviousClosingPrice The new previous closing price.
 */
void Stock::setPreviousClosingPrice(double newPreviousClosingPrice)
{
	previousClosingPrice= newPreviousClosingPrice;
}

/**
 * This sets the current price to the specified value.
 *
 * @param newCurrentPrice The new current price.
 */
void Stock::setCurrentPrice(double newCurrentPrice)
{
	currentPrice = newCurrentPrice;
}

/**
 * This returns the percentage change in Stock price.
 * 
 * @return The percentage in Stock price.
 */
double Stock::getChangePercent()
{
	return ((currentPrice - previousClosingPrice) / previousClosingPrice) * 100;
}

