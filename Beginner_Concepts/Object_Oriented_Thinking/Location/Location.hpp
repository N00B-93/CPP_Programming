#pragma once

/**
 * The type Location.
*/
class Location
{
    // Attributes of a Location.
    public:
        int row, column;
        double maxValue;

        Location(int, int, double);  // Parameterized constructor.
};

// Variable to hold the column size of the array of numbers.
const int COLUMN_SIZE = 4;

Location locateLargest(const double array[][COLUMN_SIZE], int rowSize);  // Prototype of the locateLargest function.
