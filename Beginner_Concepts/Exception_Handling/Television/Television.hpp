#pragma once
#include "TelevisionException.hpp"

class Television
{
    // Utility functions of the Television class.
    public:
        Television();
        Television(int, int, double);
        friend std::ostream& operator<<(std::ostream&, const Television&);
        friend std::istream& operator>>(std::istream&, Television&) throw (TelevisionException, std::runtime_error);
        int getModelNumber() const;
        int getScreenSize() const;
        double getPrice() const;

    // Attributes of a Television.
    private:
        int modelNumber;
        int screenSize;
        double price;
};
