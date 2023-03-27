//
//  Damien Ha
//  905539967
//

#ifndef VacationAccount_h
#define VacationAccount_h

#include <iostream>
#include "BloodDonation.h"
using namespace std;

class VacationAccount
{
public:
    // constructor
    VacationAccount(int EmployeeID);
    
    // accessor methods
    int getID();
    double getBalance();
    
    // mutator methods
    bool addVacationToAccount(BloodDonation donation);
    
private:
    int mID;
    double mBalance;
};


#endif /* VacationAccount_h */
