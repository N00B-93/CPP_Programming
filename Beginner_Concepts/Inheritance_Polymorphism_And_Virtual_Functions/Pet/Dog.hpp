#pragma once
#include "Pet.hpp"

class Dog: public Pet
{
	// Utility functions of the Dog class.
	public:
		Dog();
		Dog(std::string, int, double, std::string);
		std::string getLifeSpan() const;
		std::string getBreed() const;
		void setBreed(std::string);
	
	// Attribute of a Dog.
	private:
		std::string breed;
};

