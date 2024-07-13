#pragma once;
#include <string>

class Ship
{
    // Utility functions of the Ship class.
    public:
        Ship();
        Ship(std::string, int);
        std::string getShipName() const;
        int getYearBuilt() const;
        void setShipName(std::string);
        virtual void print() const;

    // Attributes of a Ship.
    protected:
        std::string shipName;
        int yearBuilt;
};
