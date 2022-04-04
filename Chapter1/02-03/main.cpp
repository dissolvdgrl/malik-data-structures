#include <iostream>
#include "DayType.h"
using namespace std;

int main() {
    DayType *today = new DayType();

    today->setDay("Wednesday");
    today->printDay();
    cout << "The previous day is: " << today->getPreviousDay() << endl;
    cout << "The next day is: " << today->getNextDay() << endl;
    cout << "Add 3 days: " << today->addDays(3) << endl;

    delete today;
    return 0;
}
