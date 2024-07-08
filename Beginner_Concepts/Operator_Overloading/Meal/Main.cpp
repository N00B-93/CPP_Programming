#include "Meal.hpp"
#include <iostream>

int main(int argc, char const *argv[])
{
    // Creates 4 Meal Objects.
    Meal breakfast("Bacon and eggs with toast", 23);
    Meal lunch("Tea and scones", 17);
    Meal dinner("Ramen noodles and pork chops", 50);
    Meal total = breakfast + lunch + dinner;

    // Displays the Meal Objects.
    std::cout << breakfast;
    std::cout << lunch;
    std::cout << dinner;
    std::cout << total;

    return (0);
}
