//
//  Damien Ha
//  905539967
//

#include <iostream>
#include "VacationAccount.h"
using namespace std;

// constructor
VacationAccount::VacationAccount(int EmployeeID)
{
    mID = EmployeeID;
    mBalance = 0.0; // balance starts at 0
}

// accessor methods
double VacationAccount::getBalance()
{
    return mBalance;
}

int VacationAccount::getID()
{
    return mID;
}

// mutator methods
bool VacationAccount::addVacationToAccount(BloodDonation donation)
{
    // ID must match vacation account and none of the values may be -1 or they're invalid
    if(donation.getID() == mID && donation.getID() != -1 &&
       donation.getAge() != -1 && donation.getWeight() != -1)
    {
        mBalance += 4.0; // add 4 to balance when an employee donates blood
        return true;
    }
    else
    {
        return false; // when the conditions aren;t met we return false
    }
}
