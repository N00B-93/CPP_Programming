#pragma once
#include "OutOfRangeException.hpp"
#include "Meal.hpp"
#include "EntertainmentAct.hpp"

class Party
{
    // Utility functions of the Party class.
    public:
        Party();
        Party(Meal&, EntertainmentAct&, int);
        friend std::istream& operator>>(std::istream&, Party&);
        friend std::ostream& operator<<(std::ostream&, const Party&);
        Meal getMealServed() const;
        EntertainmentAct getEntertainmentAct() const;
        int getNumberOfGuests() const;
        double getTotalCost() const;

    // Attributes of a Party.
    private:
        Meal mealServed;
        EntertainmentAct partyEntertainment;
        int numberOfGuests;
        double totalCostOfParty;
};
