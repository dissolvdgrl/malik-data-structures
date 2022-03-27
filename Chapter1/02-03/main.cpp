#include <iostream>
#include "DayType.h"
using namespace std;

int main() {
    DayType *today = new DayType();

    today->setDay("Monday");
    today->printDay();

    delete today;
    return 0;
}
