#include "OutOfRangeException.hpp"

/**
 * Instantiates an OutOfRangeException Object.
 * 
 * @param lowerLimit The lower limit of the range of acceptable values.
 * @param upperLimit The upper limit of the range of acceptable values.
 * @param valueOutOfRange The value out of range of the limit.
 */
OutOfRangeException::OutOfRangeException(double lowerLimit, double upperLimit, double valueOutOfRange): std::out_of_range("\nError: ")
{
    this->lowerLimit = lowerLimit;
    this->upperLimit = upperLimit;
    this->valueOutOfRange = valueOutOfRange;
}

/**
 * This returns the upper limit of the values allowed.
 * 
 * @param The upper limit of the values allowed.
 */
double OutOfRangeException::getUpperLimit() const
{
    return this->upperLimit;
}

/**
 * This returns the value out of range.
 * 
 * @return The value out of range.
 */
double OutOfRangeException::getValueOutOfRange() const
{
    return this->valueOutOfRange;
}

/**
 * This returns the lower limit of the values allowed.
 * 
 * @return The lower limit of the values allowed.
 */
double OutOfRangeException::getLowerLimit() const
{
	return this->lowerLimit;
}