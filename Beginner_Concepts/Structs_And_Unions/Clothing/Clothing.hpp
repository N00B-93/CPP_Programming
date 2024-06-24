#pragma once

// A struct representing a Shirt.
struct Shirt
{
    double collarSize;
    double sleeveLength;
};

// A struct representing Pants.
struct Pants
{
    double waistSize;
    double inSeam;
};

/**
 * Displays information about a Shirt.
 * 
 * @param shirt The Shirt whose information is to be displayed.
 */
void displayClothingFacts(const Shirt& shirt);

/**
 * Displays information about a Pant.
 * 
 * @param pants The Pant whose information is to be displayed.
 */
void displayClothingFacts(const Pants& pants);
