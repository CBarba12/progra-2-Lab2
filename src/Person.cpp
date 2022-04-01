//
// Created by alexb on 25/03/2022.
//

#include "Person.h"

Person::Person(const string &name, int age) : name(name), age(age) {}

Person::~Person() {

}

const string &Person::getName() const {
    return name;
}

void Person::setName(const string &name) {
    Person::name = name;
}

int Person::getAge() const {
    return age;
}

void Person::setAge(int age) {
    Person::age = age;
}

string Person::toString() const {
    stringstream s;
    s<<"Name: "<<name<<endl
     <<"Age: "<<age<<endl;
    return s.str();
}

