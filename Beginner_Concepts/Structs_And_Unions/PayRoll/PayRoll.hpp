#pragma once

// A struct representing HourlyPaid workers.
struct HourlyPaid
{
    double hourlyRate;
    int hoursWorked;
};

// A struct representing Salaried workers.
struct Salaried
{
    double salary;
    double bonus;
};

// A union representing a worker.
union Worker
{
    HourlyPaid hourlyPaidWorker;
    Salaried salariedWorker;
};

double getTotalPay(HourlyPaid&);  // Prototype of the overloaded getTotalPay function.

double getTotalPay(Salaried&);  // Prototype of the overloaded getTotalPay function.

void clearInputStream();  // Prototype of the clearInput function.
