#pragma once
#include <string>

class City
{
    public:
        City();  // No-arg constructor.
        City(std::string&, std::string&, int);  // Parameterized constructor.
        std::string getCityName() const;  // Prototype of the getCityName method.
        std::string getStateName() const;  // Prototype of the getStateName function.
        int getZipCode() const;  // Prototype of the getZipCode function.
    
    // Attributes of a City.
    private:
        std::string cityName;
        std::string stateName;
        int zipCode;
};
