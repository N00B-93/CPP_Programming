#include "Dog.hpp"
#include "Rock.hpp"
#include  <iostream>

int main(int argc, char* const argv[])
{
	// Creates an instance of a Dog.
	Dog dog("Spike", 2, 24.5, "German Shepard");

	std::cout << dog.getLifeSpan();
}

