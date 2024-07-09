#include "SalesPerson.hpp"
#include <iostream>

/**
 * Instantiates a new SalesPerson Object with default values.
 */
SalesPerson::SalesPerson(): IDNumber(0), lastName(""){};

/**
 * Instantiates a new SalesPerson Object.
 * 
 * @param IDNumber The ID number of SalesPerson.
 * @param lastName The last name of a SalesPerson.
 */
SalesPerson::SalesPerson(int IDNumber, std::string lastName)
{
    if (IDNumber < 100 || IDNumber > 999)
        this->IDNumber = 0;
    this->IDNumber = IDNumber;

    this->lastName = lastName;
}

/**
 * This returns the ID number of a SalesPerson.
 * 
 * @return The ID number of a SalesPerson. 
 */
int SalesPerson::getIDNumber() const
{
    return this->IDNumber;
}

/**
 * This returns the last name of a SalesPerson.
 * 
 * @return The last name of a salesPerson.
 */
std::string SalesPerson::getLastName() const
{
    return this->lastName;
}

/**
 * Sets the ID number of a SalesPerson to the specified value.
 * 
 * @param IDNumber The ID number of a SalesPerson.
 */
void SalesPerson::setIDNumber(int IDNumber)
{
    this->IDNumber = IDNumber;
}

/**
 * Sets the last name of a SalesPerson to the specified value.
 * 
 * @param lastName The last name of a SalesPerson.
 */
void SalesPerson::setLastName(std::string lastName)
{
    this->lastName = lastName;
}
