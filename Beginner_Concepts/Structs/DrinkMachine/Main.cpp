#include "Drink.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    // Variable to hold user option and the quantity of drinks to be purchased.
    int option, quantityOfDrinkToPurchase;

    // Variables to hold the value of the cash inserted into the drink machine and the money in the drink machine.
    double moneyInMachine = 0, money;
    
    // variable holding the maximum bill amount the user can insert into the machine.
    const double MAX_BILL_AMOUNT = 20.00;

    while (true)
    {
        // Displays the main menu.
        showMainMenu();
        std::cin >> option;

        // Displays an error message and clears the stdin if the user input is invalid.
        if (std::cin.fail() || option < 1 || option > 2)
        {
            std::cout << "\nError: Invalid choice, Select a valid option.\n";
            clearInput();
            continue;
        }
        else if (option == 1)
        {
            // Displays a message informing the user that all drinks in the machine has been sold out if 
            // drinks aren't available in the machine.
            if (!isDrinksAvailable())
            {
                std::cout << "\nAll drinks in the machine has been sold out, Try again later.\n";
                break;
            }

            while (isDrinksAvailable())
            {
                // Displays the list of beverages available and prompts the user to select an option.
                displayDrinksMenu();
                std::cout << "\nSelect an option(press 0 to exit): ";
                std::cin >> option;

                // Displays an error message and clears the stdin if the user input is invalid.
                if (std::cin.fail() || option < 0 || option > 5)
                {
                    std::cout << "\nError: Invalid option, Select a valid option.\n";
                    clearInput();
                    continue;
                }
		// Informs the user that a particular drink has been sold out.
		else if (drinks[option - 1].numberInMachine == 0)
		{
			std::cout << "\n" << drinks[option - 1].drinkName << " is no longer in stock, Select another drink.\n";
			continue;
		}
					
                else if (option == 0)
                    break;
                else
                {
                    // Prompts the user to enter the quantity of drinks to be purchased.
                    std::cout << "\nEnter quantity to be purchased: ";
                    std::cin >> quantityOfDrinkToPurchase;

                    // Displays an error message and clears the stdin if the user input is invalid.
                    if (std::cin.fail() || quantityOfDrinkToPurchase <= 0 || quantityOfDrinkToPurchase > drinks[option - 1].numberInMachine)
                    {
                        std::cout << "\nError: Only " << drinks[option - 1].numberInMachine << " " << drinks[option -1].drinkName << 
                        " available in the Drink machine, Try again with a number greater than 0 and less than or equal to 20.\n";
                        clearInput();
                        continue;
                    }

                    // Prompts the user to insert money into the machine.
                    std::cout << "\nInsert a bill less than $20.00 into the machine: $";
                    std::cin >> money;

                    // Determines the total cost of drink(s) purchased.
                    double totalPrice = quantityOfDrinkToPurchase * drinks[option - 1].drinkCost;

                    // Displays an error message and clears the stdin if the user input is invalid.
                    if (std::cin.fail() || money <= 0 || money > MAX_BILL_AMOUNT)
                    {
                        std::cout << "\nError: Insert a bill greater than $0.0 and less than " << MAX_BILL_AMOUNT << ", Try again.\n";
                        clearInput();
                        continue;
                    }
                    else if (totalPrice > money)
                    {
                        std::cout << "\nError: Your drink(s) costs: $" << totalPrice << "\nTry again.\n";
                        continue;
                    }
                
                    // Informs the user that a drink is finished if the quantity remaining in the machine is 0.
                    if (drinks[option - 1].numberInMachine == 0)
                    {
                        std::cout << "\n" << drinks[option - 1].drinkName << " is out of stock, Select another drink.\n";
                        continue;
                    }
                    else
                    {
                        // Determines the change due to the user.
                        double change = money - (quantityOfDrinkToPurchase * drinks[option - 1].drinkCost);

                        // Displays the quantity of drinks purchased.
                        if (quantityOfDrinkToPurchase == 1)
                            std::cout << "\n" << quantityOfDrinkToPurchase << " can of " << drinks[option -1].drinkName << " purchased!";
                        else
                            std::cout << "\n" << quantityOfDrinkToPurchase << " cans of " << drinks[option -1].drinkName << " purchased!";

                        // Display the user's change.
                        std::cout << "\nYour change is: $" << change << "\n";

                        // Decrements the number of drinks in the machine.
                        drinks[option - 1].numberInMachine -= quantityOfDrinkToPurchase;

                        // Adds money to the drink machine.
                        moneyInMachine += quantityOfDrinkToPurchase * drinks[option - 1].drinkCost;

                        continue;
                    }
                }
            }
        }
        // Exits the Menu loop.
        else if (option == 2)
        {
            std::cout << "\nThanks for your Patronage, Come back for more!!!\n";
            break;
        }
    }
    
    // Displays the amount made by the machine.
    std::cout << "\nAmount made by the machine is: $" << moneyInMachine << "\n";

    return 0;
}
