//
// Created by Christie on 2022/05/12.
//

#ifndef INC_04_PERSONTYPE_H
#define INC_04_PERSONTYPE_H

#include <string>
using namespace std;

class PersonType {
public:
    PersonType();
    // Default constructor.
    // Sets the firstName and lastName to null strings.
    // Postcondition: firstName = ""; lastName = "";

    PersonType(string first, string last);
    // Overloaded constructor.
    // Sets firstName and lastName according to the parameters.
    // Postcondition: firstName = first; lastName = last;

    void print() const;
    // Function to output the first name and last name
    // in the form firstName lastName

    void setName(string first, string last);
    // Function to se firstName and lastName according to
    // the parameters.
    // Postcondition: firtsName = first; lastName = last

    string getFirstName() const;
    // Function to return the first name.
    // Postcondition: The value of firstName is returned.

    string getLastName() const;
    // Function to return the last name.
    // Postcondition: the value of lastName is returned.

    void setFirstName(string newFirstName);
    // Function to set firstName.
    // Postcondition: sets firstName = newFirstName;

    void setLastName(string newLastName);
    // Function to set lastName.
    // Postcondition: sets lastName = newLastName;

    void setMiddleName(string newMiddleName);
    // Function to set middleName.
    // Postcondition: sets middleName = newMiddleName;

    bool isFirstNameEqualTo(string fName) const;
    // Function to compare fName to firstName.
    // Returns true if fName is the same as firstName.

    bool isLastNameEqualTo(string lName) const;
    // Function to compare lName to lastName.
    // Returns true if lName is the same as lastName.

private:
    string firstName, lastName, middleName;
};


#endif //INC_04_PERSONTYPE_H
