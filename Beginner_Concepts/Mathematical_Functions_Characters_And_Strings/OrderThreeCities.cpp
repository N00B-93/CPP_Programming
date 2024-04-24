#include <iostream>
#include <cstring>

/**
	This is a program that prompts the user to enter three cities
	and displays them in ascending order.
*/

int main(void)
{
	// Declares variables to hold the cities.
	std::string city1, city2, city3;

	// Prompts the user to enter the first city.
	std::cout << "\nEnter the first city: ";
	getline(std::cin, city1);

	// Prompts the user to enter the second city.
	std::cout << "\nEnter the second city: ";
	getline(std::cin, city2);
	
	// Prompts the user to enter the third city.
	std::cout << "\nEnter the third city: ";
	getline(std::cin, city3);

	// Displays the cities in ascending order.
	if (city1 >= city2 and city2 >= city3)
		std::cout << "\nThe cities sorted in ascending order is: " << city3 << " " << city2 << " "  << city1 << std::endl;
	else if (city1 >= city3 and city3 >= city2)
		std::cout << "\nThe cities sorted in ascending order is: " << city2 << " " << city3 << " " << city1 << std::endl;
	else if (city2 >= city1 and city1 >= city3)
		std::cout << "\nThe cities sorted in ascending order is: " << city3 << " " << city1 << " " << city2 << std::endl;
	else if (city2 >= city3 and city3 >= city1)
		std::cout << "\nThe cities sorted in ascending order is: " << city1 << " " << city3 << " " << city2 << std::endl;
	else if (city3 >= city2 and city2 >= city1)
		std::cout << "\nThe cities sorted in ascending order is: " << city1 << " " << city2 << " " << city3 << std::endl;
	else
		std::cout << "\nThe cities sorted in alphabetical order is: " << city2 << " " << city1 << " " << city3 << std::endl;

	return (0);
}

