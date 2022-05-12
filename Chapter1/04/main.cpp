#include <iostream>
#include "PersonType.h"

using namespace std;

int main() {
    PersonType person1("Roger", "Kat");
    PersonType person2("Daisy", "Kat");

    cout << person1.isLastNameEqualTo(person2.getLastName());

    return 0;
}
