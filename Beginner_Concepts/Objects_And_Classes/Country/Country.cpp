#include "Country.hpp"
#include <vector>

/**
 * Instantiates a new Country.
 * 
 * @param countryName The name of a Country.
 * @param population The number of people living in a Country.
 */
Country::Country(std::string countryName, long int population, double landArea)
{
    this->countryName = countryName;
    this->population = population;
    this->landArea  = landArea;
}

/**
 * This returns the number of people living in a Country.
 * 
 * @return A Country's population.
 */
long int Country::getPopulation() const
{
    return this->population;
}

/**
 * This returns the name of a Country.
 * 
 * @return A Country's name.
 */
std::string Country::getCountryName() const
{
    return this->countryName;
}

/**
 * This returns the land area of a Country.
 * 
 * @return A Country's land area.
 */
double Country::getLandArea() const
{
    return this->landArea;
}

/**
 * Determines the Country with the highest Population density in a vector of Countries.
 * 
 * @param countries A vector containing Country Objects.
 * @return A Country with the highest Population density.
 */
Country getCountryWithHighestPopulationDensity(std::vector<Country> countries)
{
    Country countryWithHighestDensity = countries[0];

    for (Country country: countries)
    {
        double currentDensity = country.getPopulation() / country.getLandArea();

        if ((countryWithHighestDensity.getPopulation() / countryWithHighestDensity.getLandArea()) < currentDensity)
            countryWithHighestDensity = Country(country);
    }

    return countryWithHighestDensity;
}
