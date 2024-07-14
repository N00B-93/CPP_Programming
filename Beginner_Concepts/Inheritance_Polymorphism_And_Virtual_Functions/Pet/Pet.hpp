#pragma once
#include <string>

class Pet
{
	// Utility functions of the Pet class.
	public:
		Pet();
		Pet(std::string, int, double);
		virtual std::string getLifeSpan() const;
		std::string getName() const;
		int getAge() const;
		double getWeight() const;
		void setWeight(double);
		void setAge(int);
		void setName(std::string);
	
	// Attributes of a Pet.
	private:
		std::string name;
		int age;
		double weight;
};

