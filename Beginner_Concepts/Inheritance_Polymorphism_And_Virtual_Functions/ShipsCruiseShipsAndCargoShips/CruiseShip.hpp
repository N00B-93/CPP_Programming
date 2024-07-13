#pragma once
#include "Ship.hpp"

class CruiseShip: public Ship
{
    // Utility functions of the CruiseShip class.
    public:
        CruiseShip();
        CruiseShip(std::string, int, int);
        int getMaxNumberOfPassengers() const;
        void setMaxNumberOfPassengers() const;
        void print() const;
    
    // Attribute of a CruiseShip.
    protected:
        int maxNumberOfPassengers;
};
