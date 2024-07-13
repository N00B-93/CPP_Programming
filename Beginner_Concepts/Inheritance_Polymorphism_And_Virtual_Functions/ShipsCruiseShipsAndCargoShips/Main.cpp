#include "CargoShip.hpp"
#include "CruiseShip.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    // Size of the array of Ship pointers.
    const int SIZE = 4;

    // Array of Ship pointers.
    Ship *ships[SIZE] = 
    {
        new Ship("Demeter", 1705),
        new CruiseShip("Titanic", 1932, 5236),
        new CargoShip("Erasmus", 1625, 5644),
        new CruiseShip("Poseidon", 1967, 2366)
    };

    // Calls the print function for each element in the array of Ship pointers.
    std::cout << "\n\t\tShip Details";
    for (int i = 0; i < SIZE; ++i)
        ships[i]->print();

    return (0);
}
