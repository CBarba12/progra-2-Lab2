//
// Created by alexb on 25/03/2022.
//

#ifndef LAB2CESAR_ADDRESS_H
#define LAB2CESAR_ADDRESS_H
#include "Tools.h"

class Address {
private:
    string type;
    string address;
public:
    Address(const string &type, const string &address);

    virtual ~Address();

    const string &getType() const;

    void setType(const string &type);

    const string &getAddress() const;

    void setAddress(const string &address);

    string toString() const;
};


#endif //LAB2CESAR_ADDRESS_H
