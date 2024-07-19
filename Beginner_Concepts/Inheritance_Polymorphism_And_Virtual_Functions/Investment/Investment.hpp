#pragma once

class Investment
{
	// Utility functions of the Investment class.
	public:
		Investment();
		Investment(double, double);
		void display() const;
		double getInitialValue() const;
		double getCurrentValue() const;
		double getProfit() const;
		double getPercentProfit() const;
	
	//.Atttibutes of an Investment.
	private:
		double initialValue;
		double currentValue;
		double profit;
		double profitPercent;
};

