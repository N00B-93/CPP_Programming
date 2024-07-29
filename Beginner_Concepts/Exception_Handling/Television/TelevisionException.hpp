#pragma once
#include <stdexcept>
#include <string>

class TelevisionException: public std::runtime_error
{
    public:
        TelevisionException(std::string message): std::runtime_error(message){};
};
