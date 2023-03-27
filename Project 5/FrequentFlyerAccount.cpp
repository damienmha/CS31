//  Damien Ha
//  905539967

#include <iostream>
#include <string>
#include "FrequentFlyerAccount.h"
using namespace std;

// Constructor
FrequentFlyerAccount::FrequentFlyerAccount(string name)
{
    mName = name;
    mBalance = 0;
}

// Accessor methods
string FrequentFlyerAccount::getName()
{
    return mName;
}

double FrequentFlyerAccount::getBalance()
{
    return mBalance;
}

// Mutator methods
bool FrequentFlyerAccount::addFlightToAccount(PlaneFlight flight)
{
    // Check if the passenger's name matches the frequent flyer account name
    if(flight.getName() == mName)
    {
        // Check if the flight cost is valid
        if(flight.getCost() >= 0)
        {
            // Add the mileage to the balance
            mBalance += flight.getMileage();
            return true;
        }
    }
    return false;
}

bool FrequentFlyerAccount::canEarnFreeFlight(double mileage)
{
    // Check if there is enough mileage balance to earn a free flight
    return mBalance >= mileage;
}

bool FrequentFlyerAccount::freeFlight(string from, string to, double mileage, PlaneFlight &flight)
{
    // Check if there is enough mileage balance to redeem a free flight
    if(mBalance >= mileage)
    {
        // Create a new PlaneFlight object with zero cost
        PlaneFlight freeFlight(mName, from, to, 0, mileage);
            
        // Set the output parameter flight to the new PlaneFlight object
        flight = freeFlight;
            
        // Subtract the mileage from the balance
        mBalance -= mileage;
        return true;
    }
    return false;
}



