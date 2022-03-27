//
// Created by Christie on 2022/03/24.
//

#include <iostream>
#include "RomanType.h"

RomanType::RomanType(): decimal(0), roman("")
{}

RomanType::~RomanType() {}

int RomanType::getDecimal() const
{
    return decimal;
}

string RomanType::getRoman() const
{
    return roman;
}

void RomanType::setRoman(string romanNumeral)
{
    roman = convertToUpper(romanNumeral);
    cout << "Roman numeral set to " << roman << endl;
}

int RomanType::getValue(char romanChar) const
{
    switch(romanChar) {
        case 'M':
            return 1000;
            break;
        case 'D':
            return 500;
            break;
        case 'C':
            return 100;
            break;
        case 'L':
            return 50;
            break;
        case 'X':
            return 10;
        case 'V':
            return 5;
            break;
        case 'I':
            return 1;
            break;
        default:
            return -1;
    }
}

void RomanType::convertToDecimal()
{
    if(getValue(roman[0]) == -1)
    {
        cout << "Not a Roman numeral. Terminating...";
    }
    else
    {
        cout << "Converting..." << endl;
        for(int i = 0; i < roman.length(); i++)
        {
            if(getValue(roman[i]) < getValue(roman[i+1]))
            {
                decimal += getValue(roman[i+1]) - getValue(roman[i]);
                i++;
            }
            else
            {
                decimal += getValue(roman[i]);
            }
        }
    }

}

string RomanType::convertToUpper(string roman)
{
    for(int i = 0; i < roman.length(); i++)
    {
        roman.at(i) = toupper(roman.at(i));
    }
    return roman;
}
