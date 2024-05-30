#include <iostream>
#include "Car.hpp"

/**
    This is a program that tests the functionalities of the Car class.
*/

int main(int argc, char const *argv[])
{
    // Creates a Car Object.
    Car car(2024, "MayBach", 35);

    // Displays the Car's speed before accelerating.
    std::cout << "\nSpeed before accelerating: " << car.getSpeed() << "\n";

    // Calls the accelerate function 5 times.
    for (int i = 0; i < 5; ++i)
        car.accelerate();

    // Displays the car's speed after accelerating.
    std::cout << "\nSpeed after accelerating: " << car.getSpeed() << "\n";

    // Calls the brake function 5 times.
        for (int i = 0; i < 5; ++i)
            car.brake();

    // Displays the Car's speed after deceleration.
    std::cout << "\nSpeed after decelerating: " << car.getSpeed() << "\n";

    return (0);
}
