#include "Inventory.hpp"
#include <iostream>
#include <vector>
#include <fstream>
#include <limits>

int main(int argc, char const *argv[])
{
    	std::string itemDatabase("items.dat");

	createDatabase(itemDatabase);
	
	while (true)
	{
		int choice;

		displayMenu();
		std::cout << "\nPlease select a choice: ";
		std::cin >> choice;
		
		if (std::cin.fail() || choice < 1 || choice > 6)
		{
			std::cerr << "\nError: Invalid choice selected, Try again with a valid choice.\n";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
			continue;
		}

		switch (choice)
		{
			case 1:
				addItem(itemDatabase);
				break;
			case 2:
				searchItem(itemDatabase);
				break;
		}
	}



    
    	return 0;
}
