//
// Created by Christie on 2022/03/27.
//

#ifndef INC_02_03_DAYTYPE_H
#define INC_02_03_DAYTYPE_H
#include <string>
using namespace std;

class DayType {
public:
    DayType();
    // Default constructor.
    // Initialises dayName to empty string and currentDay to 0.

    explicit DayType(string day);
    // Overloaded constructor.
    // Initialises dayName to day and currentDay to its corresponding array key.

    ~DayType();
    // Destructor

    void setDay(string &day);
    // Precondition: DayType has been created.
    // Postcondition: Sets the day to day

    void printDay();
    // Precondition: DayType has been created and the day member
    // has been set to non-empty string
    // Postcondition: outputs the day member to the console.

    string getDay();
    // Precondition: DayType has been created and the day member
    // has been set to non-empty string
    // Poscondition: returns the day


    string getNextDay();
    // Precondition: DayType has been created and the day member
    // has been set to non-empty string
    // Poscondition: returns the next day

    string getPreviousDay();
    // Precondition: DayType has been created and the day member
    // has been set to non-empty string
    // Poscondition: returns the previous day

    string addDays(int numDaysToAdd) const;
    // Precondition: DayType has been created and the day member
    // has been set to non-empty string
    // Poscondition: returns the name of the day that is numDaysToAdd
    // after the current value of day.

private:
    string dayName;
    int currentDay;
    string days[7] = { "Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
};


#endif //INC_02_03_DAYTYPE_H
