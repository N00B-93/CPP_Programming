#include <iostream>
#include <cmath>

/**
    Buoyancy is the ability of an object to float. Archimedes’ Principle states that the buoyant force is equal to the weight of the 
    fluid that is displaced by the submerged object. The buoyant force can be computed by
                        Fb = V * g
    where Fb is the buoyant force, V is the volume of the submerged object, and g is the specific weight of the fluid. If Fb 
    is greater than or equal to the weight of the object, then it will float, otherwise it will sink.
    This is a program that inputs the weight (in pounds) and radius (in feet) of a sphere and outputs whether the sphere will sink or float in water.
    g is taken as 62.4 lb/ft3.
*/

int main(int argc, char const *argv[])
{
    // Constants representing PI and the specific weight of water.
    const double PI = 3.14159;
    const double SPECIFIC_WEIGHT_OF_WATER = 62.4;

    // Variables to hold the weight and radius of a spherical submerged object.
    double weight, radius;

    // Prompts the user to enter the weight and radius of the object.
    std::cout << "\nEnter the weight in lbs and radius in ft of a spherical submerged object: ";
    std::cin >> weight >> radius;

    // Displays an error message and terminates the program if the user's input is invalid.
    if (std::cin.fail() || weight <= 0 || radius <= 0)
    {
        std::cout << "\nError: Weight and radius should be positive and non-zero, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Determines the volume of the spherical object.
    double volume = (4 / 3.0) * PI * pow(radius, 3);

    // Determines the buoyant force.
    double buoyantForce = volume * SPECIFIC_WEIGHT_OF_WATER;

    // Determines whether the spherical object will float in water or not.
    if (buoyantForce >= weight)
        std::cout << "\nThe object will float in water.\n";
    else
        std::cout << "\nThe object will sink in water.\n";

    return (0);
}
