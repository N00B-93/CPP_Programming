#include <iostream>
#include <string>
#include "CoffeeShop.hpp"

/**
     A coffee shop at the beach sells coffee in three sizes: small (9 oz), medium (12 oz), and large (15 oz). The cost of one 
    small cup is $1.75, one medium cup is $1.90, and one large cup is $2.00. This is a program that makes the coffee shop operational and 
    allow the user to do the following;
                    a. Buy coffee in any size and in any number of cups.
                    b. At any time show the total number of cups of each size sold.
                    c. At any time show the total amount of coffee sold.
                    d. At any time show the total money made.
*/

int main(void)
{
    // Variable to hold invalid user inputs.
    std::string garbageCollector = "";

    // Variable to hold user's choice.
    int choice = 0;

    // Variables to hold the amount of each type of coffee sold.
    int smallCoffee = 0, mediumCoffee = 0, largeCoffee = 0;

    // Variables to hold the price of each type of coffee.
    const float PRICEOFSMALLCOFFEE = 1.75f, PRICEOFMEDIUMCOFFEE = 1.90f, PRICEOFLARGECOFFEE = 2.00f;

    // Variable to hold the capacity of each cup of coffee.
    const int SMALLCUP = 9, MEDIUMCUP = 12, LARGECUP = 15;

    while (true)
    {
        // Displays the main menu and prompts the user to select a choice.
        displayMainMenu();
        std::cout << "\nSelect an choice: ";
        std::cin >> choice;

        // Displays an error message if the user's option is invalid.
        if (std::cin.fail() or choice < 1 or choice > 5)
        {
            std::cout << "\nError: Select a choice from 1 to 5 only, Try again.\n";
            std::cin.clear();
            getline(std::cin, garbageCollector);
            continue;
        }

        if (choice == 1)
        {
            // Variable to hold the number of cups to be purchased.
            int numberOfCups;

            // Prompts the user to enter the number of cups of coffee to be purchased.
            std::cout << "\nEnter the number of cups of coffee to be purchased: ";
            std::cin >> numberOfCups;

            // Redirect to the main menu if the number of cups entered by the user is invalid.
            if (std::cin.fail() or numberOfCups <= 0)
            {
                std::cout << "\nError: Invalid number of cups, Try again\n";
                std::cin.clear();
                getline(std::cin, garbageCollector);
                continue;
            }

            // Displays the menu and prompts the user to select a type of coffee.
            displayCoffeeMenu();
            std::cout << "\nSelect an choice: ";
            std::cin >> choice;

            // Displays an error message if the user enters an invalid input.
            if (std::cin.fail() or choice < 1 or choice > 3)
            {
                std::cout << "\nError: Select a choice from 1 to 3 only, Try again.\n";
                std::cin.clear();
                getline(std::cin, garbageCollector);
                continue;
            }
            else if (choice == 1)
            {
                // Displays the type and price of coffee purchased.
                std::cout << "\n" << numberOfCups << " Small cup(s) of coffee purchased for " << "$" << PRICEOFSMALLCOFFEE * numberOfCups << "\n";
                smallCoffee += numberOfCups;
            }
            else if (choice == 2)
            {
                // Displays the type and price of coffee purchased.
                std::cout << "\n" << numberOfCups << " Medium cup(s) of coffee purchased for " << "$" << PRICEOFMEDIUMCOFFEE * numberOfCups << "\n";
                mediumCoffee += numberOfCups;
            }
            else
            {
                // Displays the type and price of coffee purchased.
                std::cout << "\n" << numberOfCups << " Large cup(s) of coffee purchased for " << "$" << PRICEOFLARGECOFFEE * numberOfCups << "\n";
                largeCoffee += numberOfCups;
            }
        }
        else if (choice == 2)
        {
            // Displays the size of each typeof coffee sold.
            displayNumberOfCupOfEachSizeSold(smallCoffee, mediumCoffee, largeCoffee);
        }
        else if (choice == 3)
        {
            // Displays the total volume of coffee sold in oz.
            displayTotalAmountOfCoffeeSold(smallCoffee, mediumCoffee, largeCoffee, SMALLCUP, MEDIUMCUP, LARGECUP);
        }
        else if (choice == 4)
        {
            // Displays the total amount of money realized from coffee sales.
            displayTotalAmountOfMoneyMade(smallCoffee, mediumCoffee, largeCoffee, PRICEOFSMALLCOFFEE, PRICEOFMEDIUMCOFFEE, PRICEOFLARGECOFFEE);
        }
        else
        // Exits the program.
            exit(EXIT_SUCCESS);
    }
}
