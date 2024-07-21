#pragma once
#include "BasicShape.hpp"

class Rectangle: public BasicShape
{
    // Attributes of a Rectangle.
    private:
        double width, length;
    
    // Utility functions of the Rectangle class.
    public:
        Rectangle();
        Rectangle(double, double);
        void calcArea() override;
        double getWidth() const;
        double getLength() const;
};
