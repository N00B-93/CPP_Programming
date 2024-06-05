#pragma once
#include <string>
#include <vector>

// The struct Drink.
struct Drink
{
    std::string drinkName;  // The name of a drink;
    double drinkCost;  // The cost of the drink
    int numberInMachine;  // The number of a particular drink in the drink machine.
};

// A Vector of Drinks available in the Drink machine.
extern std::vector<Drink> drinks;

void displayDrinksMenu();  // Prototype of the displayMenu function.

bool isDrinksAvailable();  // Prototype of the isDrinkAvailable function.

void clearInput();  // Prototype of the clear input function.

void showMainMenu();  // Prototype of the showMainMenu function.
