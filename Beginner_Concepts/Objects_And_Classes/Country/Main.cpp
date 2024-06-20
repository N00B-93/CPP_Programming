#include <iostream>
#include <iomanip>
#include "Country.hpp"

/**
    This is a driver program for the Country class.
 */

int main(int argc, char* const argv[])
{
    // Creating Country objects for five countries
    Country country1("USA", 331449281, 9372610.0); // USA: population, land area in sq km
    Country country2("China", 1444216107, 9596961.0); // China: population, land area in sq km
    Country country3("India", 1393409038, 3287263.0); // India: population, land area in sq km
    Country country4("Brazil", 213993437, 8515767.0); // Brazil: population, land area in sq km
    Country country5("Russia", 145912025, 17098242.0); // Russia: population, land area in sq km

    // Creating a vector of countries
    std::vector<Country> countries;
    countries.push_back(country1);
    countries.push_back(country2);
    countries.push_back(country3);
    countries.push_back(country4);
    countries.push_back(country5);

    // Displaying properties of each country
    std::cout << "\n\t\tCountries and their properties:" << std::endl;
    for (const Country& country : countries)
    {
        std::cout << "Country: " << country.getCountryName() << std::endl;
        std::cout << "Population: " << country.getPopulation() << std::endl;
        std::cout << std::fixed << std::setprecision(2) << "Land Area: " << country.getLandArea() << " sq km" << std::endl;
        std::cout << std::endl;
    }

    // Finding country with highest population density
    Country countryWithHighestDensity = getCountryWithHighestPopulationDensity(countries);

    // Displaying the country with highest population density
    std::cout << "Country with highest population density: " << countryWithHighestDensity.getCountryName() << std::endl;

    return (0);
}
