#pragma once

#include <string>

/**
 * The Type MyInteger.
*/
class MyInteger
{
    public:
        MyInteger(int);  // Parameterized constructor.
        int getValue() const;  // Prototype of the getValue function.
        bool isEven() const;  // Prototype of the isEven function.
        bool isOdd() const;  // Prototype of the isOdd function.
        bool isPrime() const;  // Prototype of the isPrime function.
        static bool isEven(int);  // Prototype of the static isEven function taking an integer as argument.
        static bool isOdd(int);  // Prototype of the static isOdd function taking an integer as argument.
        static bool isPrime(int);  // Prototype of the static isPrime function taking an integer as argument.
        static bool isEven(const MyInteger&);  // Prototype of the static isEven function taking a MyInteger Object reference as argument.
        static bool isOdd(const MyInteger&);  // Prototype of the static isOdd function taking a MyInteger Object reference as argument.
        static bool isPrime(const MyInteger&);  // Prototype of the static isPrime function taking a MyInteger Object reference as argument.
        bool equals(int) const;  // Prototype of the equals function.
        bool equals(const MyInteger&) const;  // Prototype of the equals function taking a MyInteger Object reference as argument.
        static int parseInt(const std::string&);  // Prototype of the parseInt function.

    // Value of a MyInteger Object.
    private:
        int value;
};