#ifndef REALESTATE_HPP
#define REALESTATE_HPP

#include <ostream>
#include <istream>

class RealEstate
{
	// Utility functions of the RealEstate class.
	public:
		RealEstate();
		RealEstate(double, int, int);
		double getPrice() const;
		int getNumberOfBedrooms() const;
		int getNumberOfBaths() const;
		void setPrice(const double);
		void setNumberOfBedrooms(const int);
		void setNumberOfBaths(const int);
		friend std::ostream& operator<<(std::ostream&, const RealEstate&);
		friend std::istream& operator>>(std::istream&, RealEstate&);
		

	// Attributes of a RealEstate.
	private:
		double price;
		int numberOfBedrooms, numberOfBaths;};

#endif /* REALESTATE_HPP */

