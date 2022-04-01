//
// Created by alexb on 25/03/2022.
//

#include "BankAccount.h"

BankAccount::BankAccount(int bankNumber) : bankNumber(bankNumber) {}

BankAccount::~BankAccount() {

}

int BankAccount::getBankNumber() const {
    return bankNumber;
}

void BankAccount::setBankNumber(int bankNumber) {
    BankAccount::bankNumber = bankNumber;
}

string BankAccount::toString() const {
    stringstream  s;
    s<<"BankAccount: "<<getBankNumber()<<endl;
    return s.str();
}
