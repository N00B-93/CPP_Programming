#pragma once

#include <string>

/**
 * The type Stock.
 */
class Stock
{
	public:
		Stock(std::string, const std::string);  // Parameterized constructor.
		std::string getSymbol() const;  // Prototype for the getSymbol function.
		std::string getName() const;  // Prototype for the getName function.
		double getPreviousClosingPrice() const;  // Prototype of the getPreviousClosingPrice function.
		double getCurrentPrice() const;  // Prototype of the getCurrentPrice function.
		void setPreviousClosingPrice(double);  // Prototype of the setPreviousClosingPrice function.
		void setCurrentPrice(double);  // Prototype of the setCurrentPrice function.
		double getChangePercent();

	// Attributes of a Stock.
	private:
		std::string symbol;
		std::string name;
		double previousClosingPrice;
		double currentPrice;
};

