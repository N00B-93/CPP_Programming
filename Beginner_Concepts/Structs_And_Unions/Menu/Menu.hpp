#pragma once
#include "MenuItemType.hpp"
#include "OrderItemType.hpp"
#include <vector>

// Function to initialize the menu with predefined items.
void initializeMenu(std::vector<menuItemType>& menu);

// Function to display the menu items.
void showMenu(const std::vector<menuItemType>& menu);

// Function to print the receipt.
void printReceipt(const std::vector<orderItemType>& orderedItems);

// Function to add an item to the order.
void addItemToOrder(std::vector<orderItemType>& orderedItems, const menuItemType& item, int quantity);
