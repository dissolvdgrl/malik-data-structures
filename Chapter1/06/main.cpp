#include <iostream>
#include "LineType.h"

int main() {
    LineType lineOne(1,1,1);
    int slope = lineOne.getSlope();
    std::cout << "Slope: " << slope << std::endl;
    return 0;
}
