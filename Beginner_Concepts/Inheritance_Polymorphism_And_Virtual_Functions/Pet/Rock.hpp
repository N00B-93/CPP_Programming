#pragma once
#include "Pet.hpp"

class Rock: public Pet
{
	// Utility functions of the Rock class.
	public:
		Rock();
		Rock(std::string, int, double);
		std::string getLifeSpan() const;
};

