#include "City.hpp"

City::City(std::string& cityName, std::string& stateName, int zipCode)
{
    this->cityName = cityName;
    this->stateName = stateName;
    this->zipCode = zipCode;
}

// No-arg constructor.
City::City(){}

/**
 * This returns the name of a City.
 * 
 * @return A City's name.
 */
std::string City::getCityName() const
{
    return this->cityName;
}

/**
 * This returns the name of the state the City can be found.
 * 
 * @return The name of the state the City can be found.
 */
std::string City::getStateName() const
{
    return this->stateName;
}

/**
 * This returns a City's zip code.
 * 
 * @return A City's zip code.
 */
int City::getZipCode() const
{
    return this->zipCode;
}
