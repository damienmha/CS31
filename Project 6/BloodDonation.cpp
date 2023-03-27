//
//  Damien Ha
//  905539967
//

#include <iostream>
#include "BloodDonation.h"
using namespace std;

// constructor
BloodDonation::BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight)
{
    setID(EmployeeID);
    setAge(EmployeeAge);
    setWeight(EmployeeWeight);
}

// accessor methods
int BloodDonation::getID()
{
    return mID;
}

int BloodDonation::getAge()
{
    return mAge;
}

double BloodDonation::getWeight()
{
    return mWeight;
}

// mutator methods
void BloodDonation::setID(int EmployeeID)
{
    // valid employee IDs are 6 digits long, so they will be numbers between 100000 and 999999
    if(EmployeeID >= 100000 && EmployeeID <= 999999)
    {
        mID = EmployeeID;
    }
    // otherwise, it's stored as -1
    else
    {
        mID = -1;
    }
}

void BloodDonation::setAge(int EmployeeAge)
{
    // valid employee ages are between 21 and 65
    if(EmployeeAge >= 21 && EmployeeAge <= 65)
    {
        mAge = EmployeeAge;
    }
    // otherwise, it's stored as -1
    else
    {
        mAge = -1;
    }
}

void BloodDonation::setWeight(double EmployeeWeight)
{
    // valid employee weights are between 101.00 and 280.00
    if(EmployeeWeight >= 101.00 && EmployeeWeight <= 280.00)
    {
        mWeight = EmployeeWeight;
    }
    // otherwise, it's stored as -1
    else
    {
        mWeight = -1;
    }
}
