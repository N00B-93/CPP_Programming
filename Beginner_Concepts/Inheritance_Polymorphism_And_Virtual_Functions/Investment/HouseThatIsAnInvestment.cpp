#include "HouseThatIsAnInvestment.hpp"

/**
 * No-arg constructor that initializes an HouseThatIsAnInvestment with default values.
 */
HouseThatIsAnInvestment::HouseThatIsAnInvestment(): Investment(), House(){};

/**
 * Instantiates a new HouseThatIsAnInvestment Object.
 *
 * @param initialValue The Initial value of an HouseThatIsAnInvestment.
 * @param currentValue The current value of an HouseThatIsAnInvestment.
 * @param address The address of an HouseThatIsAnInvestment.
 * @param squareFeet The area covered by an HouseThatIsAnInvestment in square feet.
 */
HouseThatIsAnInvestment::HouseThatIsAnInvestment(double initialValue, double currentValue, std::string address, double squareFeet): Investment(initialValue, currentValue), House(address, squareFeet){};

/**
 * Displays the Properties of an JouseThatIsAnInvestment.
 */
void HouseThatIsAnInvestment::display()
{
	this->Investment::display();
	this->House::display();
}

