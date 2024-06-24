#include "Clothing.hpp"
#include <iostream>
#include <iomanip>

void displayClothingFacts(const Shirt& shirt)
{
    std::cout << std::fixed << std::setprecision(2) << "\nClothing Type: Shirt" 
              << "\nCollar Size: " << shirt.collarSize << " inches" << "\nSleeve Length: " 
              << shirt.sleeveLength << " inches\n";
}

void displayClothingFacts(const Pants& pants)
{
    std::cout << std::fixed << std::setprecision(2) << "\nClothing Type: Pant"<< "\nWaist Size: " 
              << pants.waistSize << " inches" << "\nIn Seam: " << pants.inSeam << " inches\n";
}
