//  Damien Ha
//  905539967

#include <iostream>
#include <string>
#include "PlaneFlight.h"
using namespace std;

// Constructor
PlaneFlight::PlaneFlight(string passengerName, string fromCity, string toCity, double cost, double mileage)
{
    setName(passengerName);
    setFromCity(fromCity);
    setToCity(toCity);
    setCost(cost);
    setMileage(mileage);
}

// Accessor methods
string PlaneFlight::getName()
{
    return mName;
}

double PlaneFlight::getCost()
{
    return mCost;
}

string PlaneFlight::getFromCity()
{
    return mFromCity;
}

string PlaneFlight::getToCity()
{
    return mToCity;
}

double PlaneFlight::getMileage()
{
    return mMileage;
}

// Mutator methods
void PlaneFlight::setName(string passengerName)
{
    if(!passengerName.empty())
    {
        mName = passengerName;
    }
}

void PlaneFlight::setCost(double cost)
{
    if(cost >= 0)
    {
        mCost = cost;
    }
    else
    {
        mCost = -1;
    }
}

void PlaneFlight::setFromCity(string fromCity)
{
    if(!fromCity.empty())
    {
        mFromCity = fromCity;
    }
}

void PlaneFlight::setToCity(string toCity)
{
    if(!toCity.empty() && toCity != mFromCity)
    {
        mToCity = toCity;
    }
}

void PlaneFlight::setMileage(double mileage)
{
    if(mileage > 0)
    {
        mMileage = mileage;
    }
    else
    {
        mMileage = -1;
    }
}


