#include "PayRoll.hpp"
#include <iostream>
#include <limits>

/**
 * This determines the total pay of an HourlyWorker.
 * 
 * @param hourlyPaidWorker A struct representing an Hourly Paid Worker.
 * @return The total pay of an Hourly Paid Worker.
*/
double getTotalPay(HourlyPaid& hourlyPaidWorker)
{
    return hourlyPaidWorker.hourlyRate * hourlyPaidWorker.hoursWorked;
}

/**
 * This determines the total pay of an SalariedWorker.
 * 
 * @param salariedWorker A struct representing an Salaried Worker.
 * @return The total pay of an Salarieds Worker.
*/
double getTotalPay(Salaried& salariedWorker)
{
    return salariedWorker.bonus + salariedWorker.salary;
}

/**
 * Clears the input stream of unwanted characters.
*/
void clearInputStream()
{
    std::cin.clear();
    std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}