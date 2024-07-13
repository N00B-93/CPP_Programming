#include "Ship.hpp"
#include <iostream>

/**
 * No-arg constructor that sets the fields of a Ship to default values.
 */
Ship::Ship(): shipName(""), yearBuilt(0){};

/**
 * Instantiates a new Ship.
 * 
 * @param name The name of the Ship.
 * @param year The year the Ship was built.
 */
Ship::Ship(std::string name, int year): shipName(name), yearBuilt(year){};

/**
 * This returns the name of a Ship.
 * 
 * @return The name of a Ship.
 */
std::string Ship::getShipName() const
{
    return this->shipName;
}

/**
 * This returns the year a Ship was built.
 * 
 * @return The year a Ship was built.
 */
int Ship::getYearBuilt() const
{
    return this->yearBuilt;
}

/**
 * This sets the name of a Ship to the specified value.
 * 
 * @param The new name of the Ship.
 */
void Ship::setShipName(std::string newName)
{
    this->shipName = newName;
}

/**
 * Displays the properties of a Ship Object.
 */
void Ship::print() const
{
    std::cout << "\nShip Name: " << this->getShipName();
    std::cout << "\nYear Built: " << this->getYearBuilt() << "\n";
}