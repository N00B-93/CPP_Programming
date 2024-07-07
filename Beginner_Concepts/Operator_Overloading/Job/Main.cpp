#include <iostream>
#include <limits>
#include "Job.hpp"

int main()
{
    // Create instances of Job
    Job job1, job2;

    // Prompt user to enter details for job1
    std::cout << "\nEnter details for job 1 (jobNumber, hoursToComplete, hourlyRate): ";
    std::cin >> job1;

    // Displays an error message and terminates the program if the data fields entered by the user for the Job Object is invalid.
    if (std::cin.fail() || job1.getHourlyRate() <= 0 || job1.getHoursToComplete() <= 0 || job1.getJobNumber() <= 0)
    {
        std::cout << "\nError: Job details must be positive real numbers > 0, Try again\n";
        return (1);
    }

    // Prompt user to enter details for job2
    std::cout << "\nEnter details for job 2 (jobNumber, hoursToComplete, hourlyRate): ";
    std::cin >> job2;

    // Displays an error message and terminates the program if the data fields entered by the user for the Job Object is invalid.
    if (std::cin.fail() || job2.getHourlyRate() <= 0 || job2.getHoursToComplete() <= 0 || job2.getJobNumber() <= 0)
    {
        std::cout << "\nError: Job details must be positive real numbers > 0, Try again\n";
        return (1);
    }

    // Output job details using overloaded <<
    std::cout << "\nDetails of job 1:" << job1 << std::endl;
    std::cout << "\nDetails of job 2:" << job2 << std::endl;

    // Test overloaded + and - operators
    std::cout << "\nTotal hours to complete for job 1 + job 2: " << (job1 + job2) << std::endl;
    std::cout << "\nDifference in hours to complete between job 1 and job 2: " << (job1 - job2) << std::endl;

    return (0);
}
