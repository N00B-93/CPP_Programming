#include "Cake.hpp"

void Cake::displayCake()
{
	std::cout << "\nCake Price: $" << this->price;
	std::cout << "\nCalories: " << this->calorieCount << " cal\n";
}

double Cake::getCostPerCalorie()
{
	return this->price / this->calorieCount;
}

