#include "CruiseShip.hpp"
#include <iostream>

/**
 * No-arg constructor that creates a CruiseShip with default values.
 */
CruiseShip::CruiseShip(): maxNumberOfPassengers(0){};

/**
 * Instantiates a new CruiseShip.
 * 
 * @param name The name of the CruiseShip.
 * @param year The year the CruiseShip was built.
 * @param maxPassengers The maximum number of passengers the CruiseShip can carry.
 */
CruiseShip::CruiseShip(std::string name, int year, int maxPassengers): Ship(name, year)
{
    this->maxNumberOfPassengers = maxPassengers;
}

/**
 * Displays a CruiseShip's name and maximum number of passengers.
 */
void CruiseShip::print() const
{
    std::cout << "\nShip Name: " << this->getShipName();
    std::cout << "\nMaximum Number of Passengers: "  << this->getMaxNumberOfPassengers() << "\n";
}

/**
 * This returns a CruiseShip's maximum number of passengers.
 * 
 * @return A CruiseShip's maximum number of passengers.
 */
int CruiseShip::getMaxNumberOfPassengers() const
{
    return this->maxNumberOfPassengers;
}
