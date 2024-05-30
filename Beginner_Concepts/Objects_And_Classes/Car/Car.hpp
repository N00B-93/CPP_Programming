#pragma once
#include <string>

/**
 * The type Car.
*/
class Car
{
    public:
        Car(int, std::string, int);  // Parameterized constructor.

        int getYearModel();  // Prototype of the getYearModel function.
        std::string getMake();  // Prototype of the getMake function.
        int getSpeed();  // Prototype of the getSpeed function.

        void accelerate();  // Prototype of the accelerate function.
        void brake();  // Prototype of the brake function.

    private:
    // Attributes of a Car.
        int yearModel, speed;
        std::string make;
};
