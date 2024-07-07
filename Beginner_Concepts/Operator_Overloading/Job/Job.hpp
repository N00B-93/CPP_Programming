#pragma once
#include <ostream>
#include <istream>

class Job
{
    public:
        Job();  // No-arg constructor.
        friend std::ostream& operator<<(std::ostream&, const Job& job);  // Prototype of the overloaded << function.
        friend std::istream& operator>>(std::istream&, Job& job);  // Prototype of the overloaded >> function.
        int operator+(const Job& job) const;  // Prototype of the overloaded + function.
        int operator-(const Job& job) const;  // Prototype of the overloaded - function.
        int getJobNumber() const;  // Prototype of the getJobNumber function.
        int getHoursToComplete() const;  // Prototype of the getHoursToComplete function.
        double getHourlyRate() const;  // Prototype of the getHourlyRate function.

    // Attributes of a Job.
    private:
        int jobNumber;
        int hoursToComplete;
        double hourlyRate;
};
