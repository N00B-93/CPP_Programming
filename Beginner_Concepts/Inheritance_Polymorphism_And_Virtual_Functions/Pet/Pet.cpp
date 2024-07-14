#include "Pet.hpp"

/**
 * No-arg constructor that sets the field on a new Pet to default values.
 */
Pet::Pet(): name(""), age(0), weight(0.0){};

/**
 * Instantiates a new Pet.
 *
 * @param petName The name of the Pet.
 * @param petAge The age of the Pet.
 * @param petWeight The weight of the Pet.
 */
Pet::Pet(std::string petName, int petAge, double petWeight)
{
	this->name = petName;

	if (petAge < 0)
		this->age = 0;
	else
		this->age = petAge;

	if (petWeight <= 0)
		this->weight = 1;
	else
		this->weight = petWeight;
}

/**
 * This returns a string describing the lifespan of a Pet.
 *
 * @return A string describing the lifespan of a Pet.
 */
std::string Pet::getLifeSpan() const
{
	return "Unknown Lifespan.";
}

/**
 * This returns the name of a Pet.
 *
 * @return A Pet's name.
 */
std::string Pet::getName() const
{
	return this->name;
}

/**
 * This returns the age of a Pet.
 *
 * @return The age of a Pet.
 */
int Pet::getAge() const
{
	return this->age;
}

/**
 * This returns the weight of a Pet.
 *
 * @return The age of a Pet.
 */
double Pet::getWeight() const
{
	return this->weight;
}

/**
 * Sets a Pet's new name to the specified value.
 *
 * @param newName A pet's new name.
 */
void Pet::setName(std::string newName)
{
	this->name = newName;
}

/**
 * Set's a Pet's age to the specified value.
 *
 * @param newAge A Pet's new age.
 */
void Pet::setAge(int newAge)
{
	this->age = newAge;
}

/**
 * Set's a Pet's weight to the specified value.
 *
 * @param newWeight A Pet's new Weight.
 */
void Pet::setWeight(double newWeight)
{
	this->weight = newWeight;
}

