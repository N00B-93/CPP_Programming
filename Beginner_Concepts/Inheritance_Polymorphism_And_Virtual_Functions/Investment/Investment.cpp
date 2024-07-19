#include "Investment.hpp"
#include <iostream>
#include <iomanip>

/**
 * No-arg constructor that initializes the fields of an Investment with default values.
 */
Investment::Investment()
{
	this->initialValue = 0.0;
	this->currentValue = 0.0;
	this->profit = 0.0;
	this->profitPercent = 0.0;
}

/**
 * Instantiates a new Investment.
 *
 * @param initialValue The initial value of the Investment.
 * @param currentValue The current value of the Investment.
 */
Investment::Investment(double initialValue, double currentValue)
{
	this->initialValue = initialValue;
	this->currentValue = currentValue;
	this->profit = this->currentValue - this->initialValue;
	this->profitPercent = (this->profit / this->initialValue) * 100;
}

/**
 * Displays details about an Investment.
 */
void Investment::display() const
{
	std::cout << "\nInitial Value: $" << this->getInitialValue();
	std::cout << "\nCurrent Value: $" << this->getCurrentValue();

	if (this->profit >= 0)
		std::cout << "\nProfit: $" << this->getProfit();
	else if (this->profit < 0)
		std::cout << "\nLoss: $" << this->getProfit() * -1;
	
	if (this->profitPercent < 0)
		std::cout << std::fixed << std::setprecision(2) << "\nLoss Percent: " << this->getPercentProfit() * -1 << "%";
	else
		std::cout << std::fixed << std::setprecision(2) << "\nProfit Percent: " << this->getPercentProfit() << "%";
}

/**
 * This returns the initial value of an Investment.
 *
 * @return The initial value of an Investment.
 */
double Investment::getInitialValue() const
{
	return this->initialValue;
}

/**
 * This returns the current value of an Investment.
 *
 * @param The current value of an Investment.
 */
double Investment::getCurrentValue() const
{
	return this->currentValue;
}

/**
 * This returns the profit of an Investment.
 *
 * @return The profit of an Investment.
 */
double Investment:: getProfit() const
{
	return this->profit;
}

/**
 * This returns the percentage profit or loss on an Investment.
 *
 * @return The percentage profit or loss on an Investment.
 */
double Investment::getPercentProfit() const
{
	return this->profitPercent;
}

