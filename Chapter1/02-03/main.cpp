#include <iostream>
#include <string>
#include "DayType.h"
using namespace std;

int main() {
    DayType today;
    string todayName = "Wednesday";
    int daysToAdd = 5;

    today.setDay(todayName);
    today.printDay();
    cout << "The previous day is: " << today.getPreviousDay() << endl;
    cout << "The next day is: " << today.getNextDay() << endl;
    cout << "Add "<< daysToAdd <<" days: " << today.addDays(daysToAdd) << endl;

    return 0;
}
