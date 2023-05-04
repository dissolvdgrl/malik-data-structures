#include <iostream>
#include "CashRegister.h"
#include "Dispenser.h"

using namespace std;

void sellProduct(Dispenser& product, CashRegister& pCounter)
{
    int amount;
    int amount2;

    if (product.getNoOfItems() > 0)
    {
        cout << "Please deposit " << product.getCost() << " cents" << endl;
        cin >> amount;

        while (amount < product.getCost())
        {
            cout << "Please deposit another " << product.getCost() - amount << " cents" << endl;
            cin >> amount2;
            amount += amount2;
        }

        if (amount < product.getCost())
        {
            cout << "Please deposit another " << product.getCost() - amount << " cents" << endl;
            cin >> amount2;
            amount = amount + amount2;
        }

        if (amount >= product.getCost())
        {
            pCounter.acceptAmount(amount);
            product.makeSale();
            cout << "Collect your item at the bottom and enjoy!" << endl;
        }

        cout << "*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-*-" << endl << endl;
    }
    else
        cout << "Sorry, this item is sold out." << endl;
} // end sellProduct

void showSelection()
{
    cout << "*** Welcome to Shelly's Fruit Juice Shop ***" << endl;
    cout << "To select an item, enter " << endl;
    cout << "1 for apple juice" << endl;
    cout << "2 for orange juice" << endl;
    cout << "3 for mango lassi" << endl;
    cout << "4 fruit punch" << endl;
    cout << "9 to exit" << endl;
} // end showSelection

int main() {
    CashRegister counter;
    Dispenser appleJuice(100, 50);
    Dispenser orangeJuice(100, 65);
    Dispenser mangoLassi(75, 45);
    Dispenser fruitPunch(100, 85);

    int choice;
    showSelection();

    cin >> choice;

    while (choice != 9)
    {
        switch(choice)
        {
            case 1:
                sellProduct(appleJuice, counter);
                break;
            case 2:
                sellProduct(orangeJuice, counter);
                break;
            case 3:
                sellProduct(mangoLassi, counter);
                break;
            case 4:
                sellProduct(fruitPunch, counter);
                break;
            default:
                cout << "Invalid selection.";
        }

        showSelection();
        cin >> choice;
    }
    return 0;
}
