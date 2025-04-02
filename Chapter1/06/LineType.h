//
// Created by Christie on 2023/05/04.
//

#ifndef INC_06_LINETYPE_H
#define INC_06_LINETYPE_H

class LineType {
public:
    LineType(int x, int y, int c);

    bool isParallel(LineType &otherLine);
    bool isPerpendicular(LineType &otherLine);
    bool isEqual(LineType &otherLine);
    int getSlope();

private:
    int xCoefficient, yCoefficient, c, slope;
};


#endif //INC_06_LINETYPE_H
