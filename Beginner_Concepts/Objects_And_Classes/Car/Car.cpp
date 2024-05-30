#include "Car.hpp"
#include <iostream>

/**
 * Instantiates a new Car.
 * 
 * @param carYearModel The Car's year model.
 * @param carmake The Car's make.
 * @param carSpeed The Car's speed.
*/
Car::Car(int CarYearModel, std::string carMake, int carSpeed)
{
    yearModel = CarYearModel;
    make = carMake;
    speed = carSpeed;
}

/**
 * This returns the Car's year model.
 * 
 * @return The Car's year model.
*/
int Car::getYearModel()
{
    return yearModel;
}

/**
 * This returns the Car's make.
 * 
 * @return The Car's make.
*/
std::string Car::getMake()
{
    return make;
}

/**
 * This returns the Car's speed.
 * 
 * @return The Car's speed.
*/
int Car::getSpeed()
{
    return speed;
}

/**
 * This increases a Car's speed by 5 units.
*/
void Car::accelerate()
{
    speed += 5;
}

/**
 * This reduces a Car's speed by 5 units.
*/
void Car::brake()
{
    if (speed >= 5)
        speed -= 5;
    else
        std::cout << "\nError: Car can't decelerate as speed < 5.\n";
}
