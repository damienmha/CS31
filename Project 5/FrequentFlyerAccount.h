//  Damien Ha
//  905539967

#ifndef FrequentFlyerAccount_h
#define FrequentFlyerAccount_h
#include <iostream>
#include <string>
#include "PlaneFlight.h"
using namespace std;

class FrequentFlyerAccount
{
public:
    // Constructor
    FrequentFlyerAccount(string name);

    // Accessor methods
    string getName();
    double getBalance();

    // Mutator methods
    bool addFlightToAccount(PlaneFlight flight);
    bool freeFlight(string from, string to, double mileage, PlaneFlight& flight);
    bool canEarnFreeFlight(double mileage);

private:
    string mName;
    double mBalance;
};

#endif
