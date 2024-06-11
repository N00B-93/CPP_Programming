#include <iostream>
#include <iomanip>

/**
 * A struct representing a Carpet.
*/
struct Carpet
{
	// Dimensions of a Carpet.
	double lengthInFeet;
	double widthInFeet;
	
	/**
	 * Determines the area of a Carpet.
	 */
	inline void getArea()
	{
		std::cout << std::fixed << std::setprecision(2) << "\nCarpet Area: " << widthInFeet * lengthInFeet << " sqfeet\n";
	}
};

