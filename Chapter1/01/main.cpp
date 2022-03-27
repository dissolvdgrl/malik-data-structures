/**
 * Chapter 1 - Programming Exercise 1:
 *             A program that converts a number entered
 *             in Roman numerals to decimal form
 *
 */

#include "RomanType.h"
#include <iostream>
#include <string>
using namespace std;

int main() {
    RomanType romanNum;
    string romanInput;

    cout << "Enter any Roman numeral:";
    getline(cin, romanInput);

    romanNum.setRoman(romanInput);
    romanNum.convertToDecimal();

    cout << "Converted roman numeral: " << romanNum.getDecimal() << endl;

    return 0;
}
