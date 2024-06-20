#pragma once
#include <vector>
#include <string>

class Country
{
    public:
        Country(std::string countryName, long int population, double landArea);  // Parameterized Constructor.
        double getLandArea() const;  // Prototype of the getLandArea function.
        long int getPopulation() const;  // Prototype of the getPopulation function.
        std::string getCountryName() const;  // Prototype of the getCountryName function.

    // Attributes of a Country.
    private:
        std::string countryName;
        long int population;
        double landArea;
};

// Prototype of the getCountryWithHighestPopulationDensity function
Country getCountryWithHighestPopulationDensity(std::vector<Country> countries);
