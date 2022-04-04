//
// Created by Christie on 2022/03/27.
//

#include "DayType.h"
#include <iostream>
#include <string>
using namespace std;

DayType::DayType(): dayName(""), currentDay(0)
{}

DayType::DayType(string day)
{
    dayName = day;
    for(int i = 0; i < sizeof(days); i++)
    {
        if(days[i] == day)
        {
            currentDay = i;
        }
    }
}

void DayType::setDay(string day)
{
    dayName = day;

    for(int i = 0; i < sizeof(days); i++)
    {
        if(days[i] == day)
        {
            currentDay = i + 1;
        }
    }
}

DayType::~DayType() {}

void DayType::printDay()
{
    cout << "The day is: " << dayName << endl;
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
    // TODO
}