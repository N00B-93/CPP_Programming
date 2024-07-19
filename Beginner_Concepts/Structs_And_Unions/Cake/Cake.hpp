#pragma once
#include <iostream>

struct Cake
{
	// Attributes of a Cake.
	double calorieCount;
	double price;
	
	/**
	 * Displays the properties of a Cake.
	 */
	void displayCake();
	
	/**
	 * This returns the price per calorie of a Cake.
	 *
	 * @return The price per calorie of a Cake.
	 */
	double getCostPerCalorie();
};

