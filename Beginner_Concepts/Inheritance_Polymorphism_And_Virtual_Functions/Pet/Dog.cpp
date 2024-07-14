#include "Dog.hpp"

/**
 * No-arg constructor that sets the data fields of a Dog to default values.
 */
Dog::Dog()
{
	this->breed = "";
}

/**
 * Instantiates a new Dog.
 *
 * @param dogName The name of a Dog.
 * @param dogAge The age of a Dog.
 * @param dogWeight The weight of a Dog.
 * @param dogBreed The breed of a Dog.
 */
Dog::Dog(std::string dogName, int dogAge, double dogWeight, std::string dogBreed): Pet(dogName, dogAge, dogWeight)
{
	this->breed = dogBreed;
}

/**
 * This returns a string describing the lifespan of a Dog.
 *
 * @return A string describing the lifespan of a Dog.
 */
std::string Dog::getLifeSpan() const
{
	if (this->getWeight() >= 100)
		return "Approximately 7 years.";
	return "Approximately 13 years.";
}

/**
 * This returns the breed of a Dog.
 *
 * @return The breed of a Dog.
 */
std::string Dog::getBreed() const
{
	return this->breed;
}

/**
 * This sets the breed of a Dog to the specified value.
 *
 * @param newBreed A Dog's new breed.
 */
void Dog::setBreed(std::string newBreed)
{
	this->breed = newBreed;
}

