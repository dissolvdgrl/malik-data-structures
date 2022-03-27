//
// Created by Christie on 2022/03/24.
//

#ifndef INC_01_ROMANTYPE_H
#define INC_01_ROMANTYPE_H

#include <string>
using namespace std;

class RomanType {
public:
    RomanType();
    // Default constructor.
    // Sets decimal to 0 and roman to an empty string.

    ~RomanType();
    // Destructor

    void convertToDecimal();
    // Converts the roman member to its decimal counterpart.
    // Precondition: the roman member has been set to a non-empty string.
    // Postcondition: Sets decimal member to -1 if the roman numeral is invalid
    //                  and displays an error message in the console window.

    int getDecimal() const;
    // Precondition: roman has been set and convertToDecimal() executed.
    // Postcondition: returns the decimal member variable.

    string getRoman() const;
    // Precondition: roman has been set and convertToDecimal() executed.
    // Postcondition: returns the roman member variable.

    void setRoman(string romanNumeral);
    // Precondition: a RomanType object has been created.
    // Postcondition: sets the roman member to romanNumeral and
    //                displays a message in the console window.

private:
    int decimal;
    string roman;
    int getValue(char romanChar) const;
    // Returns the decimal counterpart of romanChar, otherwise returns -1.
    string convertToUpper(string roman);
    // Converts the roman numeral string to uppercase characters for easier processing.
};


#endif //INC_01_ROMANTYPE_H
