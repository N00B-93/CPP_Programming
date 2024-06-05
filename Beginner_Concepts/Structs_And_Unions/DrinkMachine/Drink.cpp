#include "Drink.hpp"
#include <iostream>
#include <iomanip>
#include <limits>

// A vector of Drinks available in the machine.
std::vector<Drink> drinks = 
{
    {"Cola", 0.75, 20},
    {"Root Beer", 0.75, 20},
    {"Lemon-Lime", 0.75, 20},
    {"Grape Soda", 0.80, 20},
    {"Cream Soda", 0.80, 20}
};

/**
 * Displays the list of Drinks, quantity available in the drink machine and the unit price of each Drink.
*/
void displayDrinksMenu()
{
    int serialNumber = 1;

    std::cout << std::left << std::setw(18) << "\nDrink" << std::left << std::setw(10) << "Price" << std::setw(15) << "Quantity Available\n";

    for (Drink drink: drinks)
    {
        std::cout << serialNumber << ". " <<  std::left << std::setw(15) << drink.drinkName << "$" << std::setw(10) 
        << std::fixed << std::setprecision(2) << drink.drinkCost << std::right << std::setw(8) << drink.numberInMachine << "\n";

        ++serialNumber;
    }
}

/**
 * This checks if a Drink is available in the drink machine.
 * 
 * @return true if a Drink is available, else false.
*/
bool isDrinksAvailable()
{
    for (Drink drink: drinks)
    {
        if (drink.numberInMachine != 0)
            return true;
    }

    return false;
}

/**
 * Clears the input stream.
*/
void clearInput()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}

/**
 * Displays the main menu.
*/
void showMainMenu()
{
        // Displays the main menu and prompts the user to select an option.
        std::cout << "\n\t\t$N00B's Drinks Machine\n";
        std::cout << "\n1. Show Menu\n2. Exit\n";
        std::cout << "\nSelect an option: ";
}
