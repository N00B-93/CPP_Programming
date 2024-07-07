#include "Job.hpp"

// No-arg constructor that instantiates a Job with default values.
Job::Job(): jobNumber(0), hoursToComplete(0), hourlyRate(0.0){}; 

/**
 * Overloaded stream insertion operator
 * 
 * @param outputStream The ostream Object.
 * @param job The Job Object whose details is to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, const Job& job)
{
    outputStream << "\nJob Number: " << job.jobNumber
                 << "\nHours To Complete: " << job.hoursToComplete
                 << "\nHourly Rate: $" << job.hourlyRate;

    return outputStream;
}

/**
 * Overloaded stream extraction operator.
 * 
 * @param inputStream Th instream Object.
 * @param job The Job Object whose details is to be displayed.
 * @return A reference to an istream Object.
 */
std::istream& operator>>(std::istream& inputStream, Job& job)
{
    inputStream >> job.jobNumber >> job.hoursToComplete >> job.hourlyRate;

    return inputStream;
}

/**
 * Overloaded + operator
 * 
 * @param job The Job Object whose hoursToComplete is to be added to the hoursToComplete of the current instance.
 * @return The sum of the hoursToComplete of the current instance and that of a specified Job.
 */
int Job::operator+(const Job& job) const
{
    return this->hoursToComplete + job.hoursToComplete;
}

/**
 * Overloaded - operator
 * 
 * @param job The Job Object whose hoursToComplete is to be subtracted from the hoursToComplete of the current instance.
 * @return The difference between the hoursToComplete of the current instance and that of a specified Job.
 */
int Job::operator-(const Job& job) const
{
    if (this->getHoursToComplete() > job.getHoursToComplete())
        return this->hoursToComplete - job.hoursToComplete;
    return job.hoursToComplete - this->getHoursToComplete();
}

/**
 * This returns the job number of a Job.
 * 
 * @return The job number of a Job.
 */
int Job::getJobNumber() const
{
    return this->jobNumber;
}

/**
 * This returns the hours to complete a Job.
 * 
 * @return The hours to complete a Job.
 */
int Job::getHoursToComplete() const
{
    return this->hoursToComplete;
}

/**
 * This returns a Job's hourly rate.
 * 
 * @return A Job's hourly rate.
 */
double Job::getHourlyRate() const
{
    return this->hourlyRate;
}
