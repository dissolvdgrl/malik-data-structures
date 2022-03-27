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
    cout << "It's weekday number " << currentDay << endl;
}

string DayType::getDay()
{
    return dayName;
}

string DayType::getNextDay()
{


}

string DayType::getPreviousDay()
{

}

string addDays(int numDaysToAdd)
{

}