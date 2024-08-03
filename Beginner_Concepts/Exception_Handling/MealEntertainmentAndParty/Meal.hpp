#pragma once
#include "OutOfRangeException.hpp"
#include <string>
#include <istream>
#include <ostream>

class Meal
{
    // Utility functions of the Meal class.
    public:
        Meal();
        Meal(std::string&, double price);
        std::string getEntree() const;
        double getPrice() const;
        friend std::ostream& operator<<(std::ostream&, const Meal&);
        friend std::istream& operator>>(std::istream&, Meal&);

    // Attributes of a Meal Object.
    private:
        std::string entree;
        double price;
};
