#include "HouseThatIsAnInvestment.hpp"
#include <iostream>
#include <vector>

int main(int argc, char* const argv[])
{
	// Creates a vector of HouseThatIsAnInvestment Objects.
	std::vector<HouseThatIsAnInvestment> houseInvestments;
	
	// Creates 5 HouseThatIsAnInvestment Objects.
	HouseThatIsAnInvestment houseInvestment1(3'5600, 1'024.5, "No 10, Olaide Street, Bariga Lagos State.", 102.55);

	HouseThatIsAnInvestment houseInvestment2(1'509.23, 7'899.87, "No 5 Ibikunle Street, Akinyele Bus-Stop, Ipaja Lagos State.", 345.99);

	HouseThatIsAnInvestment houseInvestment3(34'578.99, 101'211.76, "No 65 Anisere Street, Ifelodun Ayobo, Lagos-State.", 456.77);

	HouseThatIsAnInvestment houseInvestment4(55'626.11, 32'111.56, "No 6, Ayodele Okeowo Street, Soluyi Gbagada, Lagos State.", 303.22);

	// Add all HouseThatIsAnInvestment Objects to the vector of HouseThatIsAnInvestment Objects.
	houseInvestments.push_back(houseInvestment1);
	houseInvestments.push_back(houseInvestment2);
	houseInvestments.push_back(houseInvestment3);
	houseInvestments.push_back(houseInvestment4);

	// Calls the display function of all Objects in the HouseThatIsAnInvestment vector.
	std::cout << "\n\t\tHouse Investments";
	for (HouseThatIsAnInvestment house: houseInvestments)
	{
		house.display();
		std::cout << "\n";
	}

	return (0);
}

