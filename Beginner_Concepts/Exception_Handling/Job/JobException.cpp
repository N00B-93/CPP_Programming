#include "JobException.hpp"

/**
 * Instantiates a new JobException Object.
 *
 * @param newJob A Job Object.
 * @param errorMessage A string describing a JobException.
 */
JobException::JobException(Job& newJob, std::string errorMessage): job(newJob), message(errorMessage), std::runtime_error(errorMessage){};

/**
 * Overrides the what function of the runtime_error class.
 *
 * @return An error message describing the exception.
 */
const char* JobException::what() const _NOEXCEPT
{
	return this->message.c_str();
}

