#include "Rock.hpp"

/**
 * No-arg constructor that sets the fields of a Rock to default values.
 */
Rock::Rock(){};

/**
 * Instantiates a new Rock.
 *
 * @param rockName The name of a Rock.
 * @param rockAge The age of a Rock.
 * @param rockWeight The weight of a Rock.
 */
Rock::Rock(std::string rockName, int rockAge, double rockWeight): Pet(rockName, rockAge, rockWeight){};

/**
 * This returns a string describing the lifespan of a Rock.
 *
 * @return A string describing the lifespan of a Rock.
 */
std::string Rock::getLifeSpan() const
{
	return "Thousands of years.";
}

