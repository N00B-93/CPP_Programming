#pragma once
#include "BasicShape.hpp"

class Circle: public BasicShape
{
    // Attributes of a Circle.
    private:
        double centerX, centerY, radius;

    // Utility functions of the Circle class.
    public:
        Circle();
        Circle(double, double, double);
        void calcArea() override;
        double getCenterX() const;
        double getCenterY() const;
        double getRadius() const;
};