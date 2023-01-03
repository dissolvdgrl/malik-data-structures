//
// Created by Christie on 2023/01/03.
//

#include "Dispenser.h"

Dispenser Dispenser::dispenser()
{
    numberOfItems = 50;
    cost = 50;
}
Dispenser Dispenser::dispenser(int setNoOfItems, int setCost)
{
    if (setNoOfItems >= 0)
        numberOfItems = setNoOfItems;
    else
        numberOfItems = 50;

    if (setCost >= 0)
        cost = setCost;
    else
        cost = 50;
}

int Dispenser::getNoOfItems() const
{
    return numberOfItems;
}

int Dispenser::getCost() const
{
    return cost;
}

void Dispenser::makeSale()
{
    numberOfItems--;
}