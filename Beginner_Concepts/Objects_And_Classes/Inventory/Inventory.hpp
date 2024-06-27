#pragma once

class Inventory
{
	public:
		Inventory();
		Inventory(int, int, double);
		void setItemNumber(int);
		void setCost(double);
		void setQuantity(int);
		void setTotalCost();
		int getItemNumber() const;
		int getQuantity() const;
		double getCost() const;
		double getTotalCost();
		void displayDetails();
	
	// Attributes of an Inventory Item.
	private:
		int itemNumber;
		int quantity;
		double cost;
		double totalCost;
};

