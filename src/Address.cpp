//
// Created by alexb on 25/03/2022.
//

#include "Address.h"

Address::Address(const string &type, const string &address) : type(type), address(address) {}

Address::~Address() {

}

const string &Address::getType() const {
    return type;
}

void Address::setType(const string &type) {
    Address::type = type;
}

const string &Address::getAddress() const {
    return address;
}

void Address::setAddress(const string &address) {
    Address::address = address;
}

string Address::toString() const {
    stringstream  s;
    s<<"Type: "<<getType()<<endl
     <<"Address: "<<getAddress()<<endl;
    return s.str();
}
