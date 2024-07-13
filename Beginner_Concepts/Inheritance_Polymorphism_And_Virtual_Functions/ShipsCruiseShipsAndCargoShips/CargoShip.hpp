#pragma once
#include "Ship.hpp"

class CargoShip: public Ship
{
    // Utility functions of the CargoShip class.
    public:
        CargoShip();
        CargoShip(std::string, int, int);
        void print() const;
        double getCapacity()  const;
    
    // Attribute of a CargoShip
    protected:
        int cargoCapacity;
};
