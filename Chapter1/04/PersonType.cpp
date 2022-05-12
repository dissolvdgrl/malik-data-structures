//
// Created by Christie on 2022/05/12.
//

#include "PersonType.h"
#include <iostream>
using namespace std;

PersonType::PersonType()
    : firstName(""), lastName("") {}

PersonType::PersonType(string first, string last)
    : firstName(first),
      lastName(last) {}

void PersonType::print() const
{
    cout << firstName << " " << lastName;
}

void PersonType::setName(string first, string last)
{
    firstName = first;
    lastName = last;
}

string PersonType::getFirstName() const
{
    return firstName;
}

string PersonType::getLastName() const
{
    return lastName;
}

void PersonType::setMiddleName(string newMiddleName)
{
    middleName = newMiddleName;
}

bool PersonType::isFirstNameEqualTo(string fName) const
{
    if (fName == firstName)
        return true;
    else
        return false;
}

bool PersonType::isLastNameEqualTo(string lName) const
{
    if (lName == lastName)
        return true;
    else
        return false;
}
