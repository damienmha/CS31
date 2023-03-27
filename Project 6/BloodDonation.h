//
//  Damien Ha
//  905539967
//

#ifndef BloodDonation_h
#define BloodDonation_h

#include <iostream>
using namespace std;

class BloodDonation
{
public:
    // constructor
    BloodDonation(int EmployeeID, int EmployeeAge, double EmployeeWeight);
    
    // accessor methods
    int getID();
    int getAge();
    double getWeight();
    
    // mutator methods
    void setID(int EmployeeID);
    void setAge(int EmployeeAge);
    void setWeight(double EmployeeWeight);
    
private:
    int mID, mAge;
    double mWeight;
};


#endif /* BloodDonation_h */
