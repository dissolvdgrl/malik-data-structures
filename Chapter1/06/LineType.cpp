//
// Created by Christie on 2023/05/04.
//

#include "LineType.h"
#include <stdexcept>

LineType::LineType(int x, int y, int c) :
    xCoefficient{x},
    yCoefficient{y},
    c{c}
{
    slope = 0;
    if (x == 0 || y == 0)
        throw std::invalid_argument("Both coefficients cannot be zero");
}

int LineType::getSlope()
{
    if (yCoefficient != 0)
        slope = -xCoefficient / yCoefficient;

    return slope;
}