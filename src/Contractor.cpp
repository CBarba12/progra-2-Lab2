//
// Created by alexb on 26/03/2022.
//

#include "Contractor.h"

Contractor::Contractor(const string &name, int age, int employeeId, int jobId, double paymentPerHour,
                       BankAccount *bankAccount, int fixedHours) : Employee(name, age, employeeId, jobId,
                                                                            paymentPerHour, bankAccount),
                                                                   fixedHours(fixedHours) {}

Contractor::~Contractor() {

}

int Contractor::getFixedHours() const {
    return fixedHours;
}

void Contractor::setFixedHours(int fixedHours) {
    Contractor::fixedHours = fixedHours;
}

string Contractor::toString() const {
    stringstream s;
    s<<Employee::toString();
    s<<"Salary: "<<calculateSalary()<<endl;
    return s.str();
}

float Contractor::calculateSalary() const {
    return fixedHours * paymentPerHour;
}

string Contractor::returnHomeAddress() {
    stringstream  s;


       for (int i = 0; i < cant; i++){
          if (addressList[i]->getType()== "HOME"){
              s<<addressList[i]->toString()<<endl;

          }

       }

    return s.str();



}

string Contractor::returnOfficeAddress() {
    stringstream  s;



    for (int i = 0; i < cant; i++){
        if (addressList[i]->getType()== "OFFICE"){
            s<<addressList[i]->toString()<<endl;

        }

    }




    return s.str();
}
