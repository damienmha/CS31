//  Damien Ha
//  905539967

#ifndef PlaneFlight_h
#define PlaneFlight_h

#include <iostream>
#include <string>
using namespace std;

class PlaneFlight
{
public:
    // Constructor
    PlaneFlight(string PassengerName, string FromCity, string ToCity, double cost, double mileage);
    
    // Accessor methods
    string getName();
    double getCost();
    string getFromCity();
    string getToCity();
    double getMileage();
    
    // Mutator methods
    void setName(string passengerName);
    void setCost(double cost);
    void setFromCity(string fromCity);
    void setToCity(string toCity);
    void setMileage(double mileage);
    
private:
    double mCost, mMileage;
    string mFromCity, mToCity, mName;
    
};

#endif
