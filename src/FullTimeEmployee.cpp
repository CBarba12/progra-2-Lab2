//
// Created by alexb on 26/03/2022.
//

#include "FullTimeEmployee.h"









string FullTimeEmployee::toString() const {
    stringstream s;

    s<<"Salary: "<<calculateSalary()<<endl;
    return s.str();
}

float FullTimeEmployee::calculateSalary() const {
    float salary = workingHours * paymentPerHour;
    const float tax = salary * 0.29;
    return salary - tax;
}

string FullTimeEmployee::returnHomeAddress() {
    stringstream  s;


    for (int i = 0; i < cant; i++){
        if (addressList[i]->getType()== "HOME"){
            s<<addressList[i]->toString()<<endl;

        }

    }

    return s.str();

}

FullTimeEmployee::FullTimeEmployee(const string &name, int age, int employeeId, int jobId, double paymentPerHour,
                                   BankAccount *bankAccount, int workingHours) : Employee(name, age, employeeId, jobId,
                                                                                          paymentPerHour, bankAccount),
                                                                                 workingHours(workingHours) {}

FullTimeEmployee::~FullTimeEmployee() {

}

int FullTimeEmployee::getWorkingHours() const {
    return workingHours;
}

void FullTimeEmployee::setWorkingHours(int workingHours) {
    FullTimeEmployee::workingHours = workingHours;
}
