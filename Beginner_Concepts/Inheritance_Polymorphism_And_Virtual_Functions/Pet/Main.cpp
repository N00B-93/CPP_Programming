#include "Dog.hpp"
#include "Rock.hpp"
#include  <iostream>

int main(int argc, char* const argv[])
{
	// Creates an instance of a Dog.
	Dog dog("Spike", 2, 24.5, "German Shepard");

	// Creates an instance of a Rock.
	Rock rock("Kilimanjaro", 4577,  3455675.90);
	
	// Calls the getLifeSpan function of both Objects.
	std::cout << "\nLife span of the dog: " << dog.getLifeSpan() << std::endl;
	std::cout << "\nLife span of the rock: " << rock.getLifeSpan() << std::endl;

	return (0);
}

