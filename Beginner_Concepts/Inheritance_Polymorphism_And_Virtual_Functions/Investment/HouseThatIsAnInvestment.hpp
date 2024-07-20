#include "Investment.hpp"
#include "House.hpp"

class HouseThatIsAnInvestment: public Investment, public House
{
	// Utility functions of the HouseThatIsAnInvestment class.
	public:
		HouseThatIsAnInvestment();
		HouseThatIsAnInvestment(double, double, std::string, double);
		void display();
};

