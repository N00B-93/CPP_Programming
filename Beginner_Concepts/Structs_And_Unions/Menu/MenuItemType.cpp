#include "MenuItemType.hpp"


/**
 * Displays the list of items on the menu.
 */
void showMenu()
{
	std::cout << "\n\t\tWelcome to $N00B's Diner\n";
	std::cout << "\n\tMenu List\n";
	std::cout << std::left << std::setw(20) << "Items" << std::right << std::setw(6) << "Price\n";
	std::cout << std::left << std::setw(20) << "1. Plain Eggs" << std::right << std::setw(6) << "$1.45\n"
		  << std::left << std::setw(20) << "2. Bacon and Eggs" << std::right << std::setw(6) << "$2.45\n"
		  << std::left << std::setw(20) << "3. Muffin" << std::right << std::setw(6) << "$0.99\n"
		  << std::left << std::setw(20) << "4. French Toast" << std::right << std::setw(6) << "$1.99\n"
		  << std::left << std::setw(20) << "5. Fruit Basket" << std::right << std::setw(6) << "$2.49\n"
		  << std::left << std::setw(20) << "6. Cereal" << std::right << std::setw(6) << "$0.69\n"
		  << std::left << std::setw(20) << "7. Coffee" << std::right << std::setw(6) << "$0.50\n"
		  << std::left << std::setw(20) << "8. Tea" << std::right << std::setw(6) << "$0.75\n"; 
}

