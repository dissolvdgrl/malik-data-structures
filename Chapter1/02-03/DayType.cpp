//
// Created by Christie on 2022/03/27.
//

#include "DayType.h"
#include <iostream>
#include <string>
using namespace std;

DayType::DayType(): dayName{"Monday"}, currentDay{0}
{}

DayType::DayType(string day)
{
    dayName = day;
    for(int i = 0; i < sizeof(days); i++)
    {
        if(days[i] == dayName)
        {
            currentDay = i;
        }
    }
}

void DayType::setDay(string &day)
{
    dayName = day;

    for(int i = 0; i < 7; i++)
    {
        if(days[i] == dayName)
        {
            currentDay = i + 1;
        }
    }
}

DayType::~DayType() {}

void DayType::printDay()
{
    cout << "The current day is: " << dayName << endl;
}

string DayType::getDay()
{
    return dayName;
}

string DayType::getNextDay()
{
    if(currentDay == 7)
    {
        return days[0];
    }
    else {
        return days[currentDay];
    }
}

string DayType::getPreviousDay()
{
    if(currentDay == 1)
    {
        return days[6];
    }
    else {
        return days[currentDay - 2];
    }
}

string DayType::addDays(int numDaysToAdd) const
{
    int newDay = 0;

    if (numDaysToAdd < 7)
        newDay = currentDay - (7 % numDaysToAdd) - 1;
    else
        newDay = currentDay + (numDaysToAdd % 7) - 1;

    return days[newDay];
}