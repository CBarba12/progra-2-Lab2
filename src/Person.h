//
// Created by alexb on 25/03/2022.
//

#ifndef LAB2CESAR_PERSON_H
#define LAB2CESAR_PERSON_H

#include "Tools.h"

class Person {

protected:
    string name;
    int age;
public:
    Person(const string &name, int age);

    virtual ~Person();

    const string &getName() const;

    void setName(const string &name);

    int getAge() const;

    void setAge(int age);

    string toString() const;


};


#endif //LAB2CESAR_PERSON_H
