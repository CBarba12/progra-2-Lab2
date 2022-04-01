//
// Created by alexb on 25/03/2022.
//

#ifndef LAB2CESAR_BANKACCOUNT_H
#define LAB2CESAR_BANKACCOUNT_H
#include "Tools.h"

class BankAccount {
private:
    int bankNumber;
public:
    BankAccount(int bankNumber);

    virtual ~BankAccount();

    int getBankNumber() const;

    void setBankNumber(int bankNumber);

    string toString() const;
};


#endif //LAB2CESAR_BANKACCOUNT_H
