#pragma once
#include "OutOfRangeException.hpp"
#include <istream>
#include <ostream>

class EntertainmentAct
{
    // Utility functions of the EntertainmentAct class.
    public:
        EntertainmentAct();
        EntertainmentAct(std::string&, double);
        std::string getActPhoneNumber() const;
        double getEntertainmentActPrice() const;
        friend std::istream& operator>>(std::istream&, EntertainmentAct&);
        friend std::ostream& operator<<(std::ostream&, const EntertainmentAct&);

    // Attributes of an EntertainmentAct.
    private:
        std::string actPhoneNumber;
        double entertainmentActPrice;
};
