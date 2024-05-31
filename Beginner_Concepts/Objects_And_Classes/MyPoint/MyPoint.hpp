#pragma once

/**
 * The type MyPoint.
*/
class MyPoint
{
    public:
        double xCoord, yCoord;

        MyPoint();  // Un-parameterrized constructor's prototype.

        MyPoint(double, double);  // Parameterized constructor's prototype.

        double getDistance(MyPoint, MyPoint);  // Prototype of the getDistance method.
};