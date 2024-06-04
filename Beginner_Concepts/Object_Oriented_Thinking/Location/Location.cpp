#include "Location.hpp"

/**
 * Instantiates a new Location Object.
 * 
 * @param row The row number of the largest element of a 2-D array.
 * @param column The column number of the largest element of a 2-D array.
 * @param maxValue The maximum element in a 2-D array.
*/
Location::Location(int rowNumber, int columnNumber, double maximumValue)
{
    row = rowNumber;
    column = columnNumber;
    maxValue = maximumValue;
}

/**
 * This determines the largest value and its location in a 2-D array.
 * 
 * @param array The array whose maximum element and location of maximum element is too be determined.
 * @param rowSize The number off rows in the array.
 * @return A Location Object that contains the maximum element of the array and it's Location.
*/
Location locateLargest(const double array[][COLUMN_SIZE], const int rowSize)
{
    double max = array[0][0];
    int row = 0, column = 0;

    for (int i = 0; i < rowSize; ++i)
    {
        for (int j = 0; j < COLUMN_SIZE; ++j)
        {
            if (array[i][j] > max)
            {
                max = array[i][j];
                row = i;
                column = j;
            }
        }
    }
    return Location(row, column, max);
}