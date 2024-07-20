#pragma once

class Investment
{
	// Utility functions of the Investment class.
	public:
		Investment();
		Investment(double, double);
		void display();
		double getInitialValue() const;
		double getCurrentValue() const;
		double getProfit();
		double getPercentProfit();
		void setInitialValue(double);
		void setCurrentValue(double);
	
	//.Atttibutes of an Investment.
	private:
		double initialValue;
		double currentValue;
		double profit;
		double profitPercent;
};

