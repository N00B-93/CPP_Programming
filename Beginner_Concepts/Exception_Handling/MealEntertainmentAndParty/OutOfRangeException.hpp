#pragma once
#include <stdexcept>

class OutOfRangeException: public std::out_of_range
{
    // Utility functions of the OutOfRangeException.
    public:
        OutOfRangeException(double, double, double);
        double getLowerLimit() const;
        double getUpperLimit() const;
        double getValueOutOfRange() const;

    // Attributes of an OutOfRange Exception.
    private:
        double lowerLimit, upperLimit, valueOutOfRange;
};
