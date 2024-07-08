#pragma once
#include <string>
#include <ostream>
#include <istream>

class Meal
{
    //  Utility functions of the Meal class.
    public:
        Meal();
        Meal(std::string, int);
        friend std::istream& operator>>(std::istream&, Meal&);
        friend std::ostream& operator<<(std::ostream&, const Meal&);
        friend Meal operator+(const Meal&, const Meal&);


    //  Attributes of a Meal.
    protected:
        std::string mainCourse;
        int calorieCount;
};
