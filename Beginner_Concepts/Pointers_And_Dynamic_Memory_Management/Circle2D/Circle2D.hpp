#pragma once

/**
 *  The type Circle2D.
*/
class Circle2D
{
    public:
        Circle2D();  // No-arg constructor.
        Circle2D(double, double, double);  // Parameterized constructor.
        double getArea();  // Prototype of the getArea function.
        double getPerimeter();  // Prototype of the getPerimeter function.
        bool contains(double, double) const;  // Prototype of the overloaded contains function.
        bool contains(const Circle2D&) const;  // Prototype of the overloaded contains function.
        bool overlaps(const Circle2D&) const;  // Prototype of the overlap function.

    // Attributes of a Circle2D Object.
    private:
        double yCoord, xCoord, radius;
};