#include "Menu.hpp"
#include "OrderItemType.hpp"
#include <iostream>
#include <vector>
#include <limits>

int main()
{
    // Creates a vector to hold items on the menu and also initializes the vector with items.
    std::vector<menuItemType> menu;
    initializeMenu(menu);

    int option;  // Variable to hold user's options.

    // A vector the hold the items ordered by the user.
    std::vector<orderItemType> orderedItems;

    while (true)
    {
    // Displays the main menu.
        std::cout << "\n\t\tWelcome to $N00B's Diner\n";
        std::cout << "1. Show Menu\n2. Exit\n";
        std::cout << "\nPlease select an option: ";
        std::cin >> option;

        // Prompts the user to select an option.
        if (std::cin.fail() || option < 1 || option > 2)
        {
            std::cout << "\nError: Invalid option selected, Try again.\n";
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            continue;
        }

        if (option == 1)
        {        
            while (true)
            {
            // Displays the items menu.
                showMenu(menu);
                std::cout << "\nEnter item number to order (enter 0 to finish): ";
                std::cin >> option;

                if (std::cin.fail())
                {
                    std::cout << "\nError: Invalid item selected, Try again.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continue;
                }

                if (option == 0)
                    break;
                
                else if (option < 1 || option > static_cast<int>(menu.size()))
                {
                    std::cout << "\nError: Invalid item selected, Try again.\n";
                    continue;
                }

                // Prompts the use to enter the quantity of the item selected to be purchased.
                int quantity;
                std::cout << "\nEnter number of portion: ";
                std::cin >> quantity;

                if (std::cin.fail() || quantity < 1)
                {
                    std::cout << "\nError: Invalid quantity, Try again.\n";
                    std::cin.clear();
                    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                    continue;
                }
                // Adds the item purchased to the user's order list.
                addItemToOrder(orderedItems, menu[option - 1], quantity);
                std::cout << "\nAdded " << quantity << " " << menu[option - 1].menuItem << "(s) to your order.\n";
            }

            // Displays the user's receipt after ordering and clears the user's cart.
            printReceipt(orderedItems);
            orderedItems.clear();
        }
        // Exits the program.
        else if (option == 2)
        {
            std::cout << "\nThank you for visiting $N00B's Diner. Goodbye!\n";
            exit(EXIT_SUCCESS);
        }
    }
    return (0);
}
