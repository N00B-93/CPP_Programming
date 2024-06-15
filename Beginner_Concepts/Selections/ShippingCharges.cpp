#include <iostream>

/**
    The Fast Freight Shipping Company charges the following rates: 
                    Weight of Package (in Kilograms)            Rate per 500 Miles Shipped
                    2 kg or less                                $1.10 
                    Over 2 kg but not more than 6 kg            $2.20 
                    Over 6 kg but not more than 10 kg           $3.70 
                    Over 10 kg but not more than 20 kg          $4.80
    This is a program that asks for the weight of the package and the distance it is to be shipped, and then displays the charges.
    NB: Package weight must be > 0 and <= 20 kg and distance to be shipped must be >= 10 and <= 3000 miles
*/

int main(int argc, char const *argv[])
{
    // Variables to hold the weight of the package and the distance it is to be shipped.
    float weightOfPackage, distanceToBeShipped;

    // Prompts the user to enter the weight of the package and the distance it is to be shipped.
    std::cout << "\nEnter the weight of the package in Kg and the distance it is to be shipped in miles: ";
    std::cin >> weightOfPackage >> distanceToBeShipped;

    // Displays an error message and terminates the program if the user input is invalid.
    if (std::cin.fail() || weightOfPackage <= 0 || weightOfPackage > 20 || distanceToBeShipped < 10 || distanceToBeShipped > 3000)
    {
        std::cout << "\nError: Weight of the package must be > 0\nDistance to be shipped must be between 10 and 3000 miles\nTry again.\n";
        exit(EXIT_FAILURE);
    }

    // Displays the charges of shipping the package based on the package weight.
    if (weightOfPackage <= 2)
    {
        float shippingCharges = 1.10f;
        std::cout << "\nYour shipping charges is: $" << shippingCharges << "\n";
    }
    else if (weightOfPackage > 2 && weightOfPackage <= 6)
    {
        float shippingCharges = 2.20f;
        std::cout << "\nYour shipping charges is: $" << shippingCharges << "\n";
    }
    else if (weightOfPackage > 6 && weightOfPackage <= 10)
    {
        float shippingCharges = 3.70f;
        std::cout << "\nYour shipping charges is: $" << shippingCharges << "\n";
    }
    else if (weightOfPackage > 10 && weightOfPackage <= 20)
    {
        float shippingCharges = 4.80;
        std::cout << "\nYour shipping charges is: $" << shippingCharges << "\n";
    }

    return (0);
}
