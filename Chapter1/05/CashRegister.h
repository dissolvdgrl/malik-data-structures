//
// Created by Christie on 2023/01/03.
//

#ifndef CASHREGISTER_H
#define CASHREGISTER_H


class CashRegister {
public:
    CashRegister cashRegister();
    CashRegister cashRegister(int cashIn);

    int getCurrentBalance() const;
    void acceptAmount(int amountIn);

private:
    int cashOnHand;
};


#endif //MAIN_CPP_CASHREGISTER_H
