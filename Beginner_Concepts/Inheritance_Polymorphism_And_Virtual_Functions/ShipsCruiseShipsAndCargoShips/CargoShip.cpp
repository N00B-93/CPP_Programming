#include "CargoShip.hpp"
#include <iostream>

/**
 * No-arg constructor that sets the field of a CargoShip to default values.
 */
CargoShip::CargoShip(): cargoCapacity(0){};

/**
 * Instantiates a new CargoShip.
 * 
 * @param name The name of the CargoShip.
 * @param year The year the cargoShip was built.
 * @param cargoCapacity The cargo capacity of the CargoShip.
 */
CargoShip::CargoShip(std::string name, int year, int cargoCapacity): Ship(name, year)
{
    this->cargoCapacity = cargoCapacity;
}

/**
 * Displays a CargoShip's name and cargo capacity.
 */
void CargoShip::print() const
{
    std::cout << "\nName: " << this->getShipName();
    std::cout << "\nCargo Capacity: " << this->cargoCapacity << " tonnes\n";
}