//
// Created by Christie on 2023/01/03.
//

#include "CashRegister.h"

CashRegister::CashRegister()
{
    cashOnHand = 500;
}

CashRegister::CashRegister(int cashIn)
{
    if (cashIn >= 0)
        cashOnHand = cashIn;
    else
        cashOnHand = 500;
}

int CashRegister::getCurrentBalance() const
{
    return cashOnHand;
}

void CashRegister::acceptAmount(int amountIn)
{
    cashOnHand = cashOnHand + amountIn;
}
