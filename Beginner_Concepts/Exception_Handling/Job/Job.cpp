#include "Job.hpp"
#include "JobException.hpp"
#include <limits>
#include <iostream>

/**
 * Instantiates a new Job Object with default values.
 */
Job::Job(): jobID(0), jobCost(0.0){};

/**
 * Instantiates a new Job Object.
 *
 * @param IDNumber The Job's ID number.
 * @param value The amount the Job costs.
 */
Job::Job(int IDNumber, double value): jobID(IDNumber), jobCost(value){};

/**
 * This returns the ID number of a Job.
 *
 * @return A Job's ID number.
 */
int Job::getJobID() const
{
	return this->jobID;
}

/**
 * This returns a Job's cost.
 *
 * @return A Job's cost.
 */
double Job::getJobCost() const
{
	return this->jobCost;
}

/**
 * This sets the ID number of a Job to the specified value.
 *
 * @param jobID The new ID number of a Job.
 */
void Job::setJobID(const int jobID)
{
	this->jobID = jobID;
}

/**
 * Sets a Job's cost to the specified value.
 *
 * @param jobCost The new cost of a Job.
 */
void Job::setJobCost(const double jobCost)
{
	this->jobCost = jobCost;
}

/**
 * Overloads the stream insertion operator for the Job class.
 *
 * @param outputStream A reference to an ostream Object.
 * @param Job A reference to the Job Object to be displayed.
 * @return A reference to an ostream Object.
 */
std::ostream& operator<<(std::ostream& outputStream, const Job& job)
{
	outputStream << "\nJob ID: " << job.getJobID();
	outputStream << "\nCost: $" << job.getJobCost() << "\n";

	return outputStream;
}

/**
 * Overloads the stream extraction operator for the Job class.
 *
 * @param inputStream A reference to an istream Object.
 * @param job A Job Object whose fields are to be read from the user.
 * @return A reference to an istream Object.
 */
std::istream& operator>>(std::istream& inputStream, Job& job)
{
	int jobID;
	double jobCost;

	std::cout << "\nEnter the job ID number and cost: ";
	inputStream >> jobID >> jobCost;

	if (inputStream.fail())
	{
		inputStream.clear();
		inputStream.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		throw std::runtime_error("Error: Job ID should be a positive non-zero integer and,\nJob cost should be greater than or equal to $250.0.\n");
	}

	job.setJobID(jobID);
	job.setJobCost(jobCost);

	if (job.getJobID() <= 0)
		throw JobException(job, "Error: Job ID should be a positive integer > 0.");
	else if (job.getJobCost() < 250)
		throw JobException(job, "Error: Job cost must be greater than or equal to $250.00.");

	return inputStream;
}

