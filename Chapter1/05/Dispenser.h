//
// Created by Christie on 2023/01/03.
//

#ifndef DISPENSER_H
#define DISPENSER_H


class Dispenser {
public:
    Dispenser();
    Dispenser(int setNoOfItems, int setCost);
    int getNoOfItems() const;
    int getCost() const;
    void makeSale();

private:
    int numberOfItems;
    int cost;
};


#endif //MAIN_CPP_DISPENSER_H
