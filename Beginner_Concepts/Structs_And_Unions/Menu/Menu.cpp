#include "Menu.hpp"
#include <iostream>
#include <iomanip>

/**
 * Initializes the vector containing item that can be ordered with items.
 * 
 * @param A vector containing items that are on the menu.
 */
void initializeMenu(std::vector<menuItemType>& menu)
{
    menu = {
        {"Plain Eggs", 1.45},
        {"Bacon and Eggs", 2.45},
        {"Muffin", 0.99},
        {"French Toast", 1.99},
        {"Fruit Basket", 2.49},
        {"Cereal", 0.69},
        {"Coffee", 0.50},
        {"Tea", 0.75}
    };
}

/**
 * Displays the Items available to be ordered.
 * 
 * @param menu A vector containing items that can be ordered.
 */
void showMenu(const std::vector<menuItemType>& menu)
{
    std::cout << "\n\tMenu List\n";
    std::cout << std::left << std::setw(20) << "Items" << std::right << std::setw(6) << "Price\n";

    for (size_t i = 0; i < menu.size(); ++i)
    {
        std::cout << std::left << std::setw(20) << std::to_string(i + 1) + ". " + menu[i].menuItem
                  << std::right << "$" << std::fixed << std::setprecision(2) << menu[i].menuPrice << '\n';
    }
}

/**
 * Adds an item ordered by the customer to a vector containing ordered items.
 * 
 * @param orderedItems A vector containing items ordered by the customer.
 * @param item An item ordered by the user.
 * @param quantity The number of items ordered.
 */
void addItemToOrder(std::vector<orderItemType>& orderedItems, const menuItemType& item, int quantity)
{
    for (auto& orderedItem : orderedItems)
    {
        if (orderedItem.item.menuItem == item.menuItem)
        {
            orderedItem.quantity += quantity;
            return;
        }
    }
    orderedItems.push_back({item, quantity});
}

/**
 * Displays a customer's receipt after he/she has finished ordering.
 * 
 * @param orderedItems A vector containing items ordered by the customer.
 */
void printReceipt(const std::vector<orderItemType>& orderedItems)
{
    double total = 0.0;
    std::cout << "\n\tReceipt\n";
    std::cout << std::left << std::setw(20) << "Items" << std::right << std::setw(10) << "Quantity" << std::setw(10) << "Price\n";
    
    for (const auto& order : orderedItems)
    {
        double itemTotal = order.item.menuPrice * order.quantity;
        std::cout << std::left << std::setw(20) << order.item.menuItem << std::right << std::setw(10) << order.quantity << std::setw(5) << "$" << std::fixed << std::setprecision(2) << itemTotal << '\n';
        total += itemTotal;
    }

    std::cout << std::left << std::setw(20) << "Total" << std::right << std::setw(15) << "$" << std::fixed << std::setprecision(2) << total << '\n';
}
