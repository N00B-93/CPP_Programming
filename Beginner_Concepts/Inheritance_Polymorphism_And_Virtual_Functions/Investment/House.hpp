#pragma once
#include <string>

class House
{
	// Utility functions of a House.
	public:
		House();
		House(std::string, double);
		void display() const;
		std::string getAddress() const;
		double getSquareFeet() const;
		void setAddress(std::string);
		void setSquareFeet(double);
	
	// Attributes of a House.
	private:
		std::string address;
		double squareFeet;
};

