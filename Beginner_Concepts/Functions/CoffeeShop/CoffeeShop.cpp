#include <iostream>
#include <string>
#include <iomanip>
#include "CoffeeShop.hpp"

/**
 * Displays the Coffee shop's main menu.
*/
void displayMainMenu()
{
    std::cout << "\n\t\tWelcome to N00B's Coffee Shop\n";
    std::cout << "1. Buy Coffee\n";
    std::cout << "2. Show number of cups of each size sold\n";
    std::cout << "3. Show total amount of coffee sold.\n";
    std::cout << "4. Show total money made\n";
    std::cout << "5. Exit\n";
}

/**
 * Displays the list of coffee available.
*/
void displayCoffeeMenu()
{
    std::cout << "\n\t\tOur Coffee Menu\n";
    std::cout << "1. Small size (9 oz) $1.75 per cup\n";
    std::cout << "2. Medium size (12 oz) $1.90 per cup\n";
    std::cout << "3. Large size (15 oz) $2.00 per cup\n";
}

/**
 * Displays the number of cups of each type of coffee that has been sold.
 * 
 * @param smallCoffee The number of small sized cups of coffee sold.
 * @param mediumCoffee The number of medium sized cups of coffee sold.
 * @param largeCoffee The number of large sized cups of coffee sold.
*/
void displayNumberOfCupOfEachSizeSold(int smallCoffee, int mediumCoffee, int largeCoffee)
{
    std::cout << "\nNumber of small sized cup of coffee sold: " << smallCoffee << "\n";
    std::cout << "\nNumber of medium sized cup of coffee sold: " << mediumCoffee << "\n";
    std::cout << "\nNumber of large sized cup of coffee sold: " << largeCoffee << "\n";
}

/**
 * Displays the total amount of coffee sold in oz.
 * 
 * @param smallCoffee The number of small sized cups of coffee sold.
 * @param mediumCoffee The number of medium sized cups of coffee sold.
 * @param largeCoffee The number of large sized cups of coffee sold.
 * @param SMALLCUP The quantity of coffee in a small sized cup.
 * @param MEDIUMCUP The quantity of coffee in a medium sized cup.
 * @param LARGECUP The quantity of coffee in a large sized cup.
*/
void displayTotalAmountOfCoffeeSold(int smallCoffee, int mediumCoffee, int largeCoffee, const int SMALLCUP, const int MEDIUMCUP, const int LARGECUP)
{
     if (smallCoffee == 0 and  mediumCoffee == 0 and largeCoffee == 0)
     {
        std::cout << "\nNo coffee has been sold yet.\n";
        return;
    }
    std::cout << "\nThe total amount of coffee sold is: " << (smallCoffee * SMALLCUP) + (mediumCoffee * MEDIUMCUP) + (largeCoffee * LARGECUP) << " oz\n";
}

/**
 * Displays the amount of money realized from coffee sales.
 * 
 * @param smallCoffee The number of small cups sized of coffee sold.
 * @param mediumCoffee The number of medium sized cups of coffee sold.
 * @param largeCoffee The number of large cups of coffee sold.
 * @param PRICEOFSMALLCOFFEE The price of a small sized cup of coffee.
 * @param PRICEOFMEDIUMCOFFEE The price of a medium sized cup of coffee.
 * @param PRICEOFSMALLCOFFEE The price of a large sized cup of coffee.
*/
void displayTotalAmountOfMoneyMade(int smallCoffee, int mediumCoffee, int largeCoffee, const double PRICEOFSMALLCOFFEE, const double PRICEOFMEDIUMCOFFEE, const double PRICEOFLARGECOFFEE)
{
    std::cout << std::fixed << std::setprecision(2) << "\nThe total amount made is: $" << (smallCoffee * PRICEOFSMALLCOFFEE) + (mediumCoffee * PRICEOFMEDIUMCOFFEE) + (largeCoffee * PRICEOFLARGECOFFEE) << "\n";
}
