#include <iostream>
#include <iomanip>

float totalCharges(const float hospitalServices, const float medicationServices);  // Prototype of the overloaded total charges function.
float totalCharges(const float hospitalServices, const float medicationServices, const int numberOfDays, const float dailyRate);  // Prototype of the overloaded total charges function.

int main(int argc, char const *argv[])
{
    // Variable to hold the patient's status(either in-patient or out-patient).
    int patientStatus;

    // Variables to hold hospital services, medication services and daily rate.
    float hospitalServices, medicationServices, dailyRate;

    // Variable to hold the number of days the patient spent in the hospital.
    int numberOfDaysInHospital;

    // Prompts the user to enter his/her patient status.
    std::cout << "\n1. Out-patient\n2. In-patient\n";
    std::cout << "\nSelect patient status: ";
    std::cin >> patientStatus;

    // Validates the user's patient status.
    if (std::cin.fail() || patientStatus < 1 || patientStatus > 2)
    {
        std::cout << "\nError: Select patient status that is either 1 or 2, Try again.\n";
        exit(EXIT_FAILURE);
    }

    // Prompts the user to enter the charges for hospital services and hospital medication services.
    std::cout << "\nEnter the charges for hospital services and medication services: $";
    std::cin >> hospitalServices >> medicationServices;

    // Displays the total charges based on the patient's status.
    switch (patientStatus)
    {
        case 1:
            std::cout << "\nThe total charges is: $" << totalCharges(hospitalServices, medicationServices);
            break;
        case 2:
            std::cout << "\nEnter the number of days spent in the hospital and the daily rate: ";
            std::cin >> numberOfDaysInHospital >> dailyRate;

            if (std::cin.fail() || numberOfDaysInHospital <= 0 || dailyRate <= 0)
            {
                std::cout << "\nError: Number of days spent in hospital and the daily rate must be greater than 0, Try again.\n";
                exit(EXIT_FAILURE);
            }
            std::cout << "\nThe total charges is: $" << totalCharges(hospitalServices, medicationServices, numberOfDaysInHospital, dailyRate);
    }

    return 0;
}

/**
 * Determines the total charges of a patient.
 * 
 * @param hospitalServices The price of the hospital services rendered to the patient.
 * @param medicationServices The price of the medication services rendered to the patient.
 * @return The patient's total charges.
*/
float totalCharges(const float hospitalServices, const float medicationServices)
{
    return hospitalServices + medicationServices;
}

/**
 * Determines the total charges of a patient.
 * 
 * @param hospitalServices The price of the hospital services rendered to the patient.
 * @param medicationServices The price of the medication services rendered to the patient.
 * @param numberOfDays The number of days the patient spent in the hospital.
 * @param dailyRate The amount of money the Hospital charges the patient daily for staying in the hospital.
 * @return The patient's total charges.
*/
float totalCharges(const float hospitalServices, const float medicationServices, const int numberOfDays, const float dailyRate)
{
    return hospitalServices + medicationServices + (numberOfDays * dailyRate);
}
