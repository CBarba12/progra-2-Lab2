//
// Created by alexb on 25/03/2022.
//

#include "Employee.h"


Employee::Employee(const string &name, int age, int employeeId, int jobId, double paymentPerHour,
                   BankAccount *bankAccount) : Person(name, age), employeeId(employeeId),
                                                                      jobId(jobId), paymentPerHour(paymentPerHour),
                                                                      bankAccount(bankAccount){
    cant=0;
    tam=5;

    addressList = new Address* [tam];
    for(int i = 0 ; i< tam; i++) addressList[i] = NULL;

}


Employee::~Employee() {

    for (int i = 0; i < cant; i++)
        delete addressList[i];
    delete[] addressList;

}

bool Employee::addAddress(Address * ptr) {
    if(cant < tam){
        addressList[cant++] = ptr;
        return true;
    }
    return false;
}

int Employee::getEmployeeId() const {
    return employeeId;
}

void Employee::setEmployeeId(int employeeId) {
    Employee::employeeId = employeeId;
}

int Employee::getJobId() const {
    return jobId;
}

void Employee::setJobId(int jobId) {
    Employee::jobId = jobId;
}

double Employee::getPaymentPerHour() const {
    return paymentPerHour;
}

void Employee::setPaymentPerHour(double paymentPerHour) {
    Employee::paymentPerHour = paymentPerHour;
}

BankAccount *Employee::getBankAccount() const {
    return bankAccount;
}

void Employee::setBankAccount(BankAccount *bankAccount) {
    Employee::bankAccount = bankAccount;
}

Address **Employee::getAddressList() const {
    return addressList;
}

void Employee::setAddressList(Address **addressList) {
    Employee::addressList = addressList;
}

int Employee::getCant() const {
    return cant;
}

void Employee::setCant(int cant) {
    Employee::cant = cant;
}

int Employee::getTam() const {
    return tam;
}

void Employee::setTam(int tam) {
    Employee::tam = tam;
}

string Employee::toString() const {

    stringstream s;
    s<<Person::toString()<<endl
     <<"EmployeeId: "<<getEmployeeId()<<endl
     <<"JobId: "<<getJobId()<<endl
     <<"PaymentPerHour: "<<getPaymentPerHour()<<endl
     <<bankAccount->toString() <<endl;
    for(int i=0; i<cant; i++){
        if(addressList[i] != NULL) {
            s<<"--------------- LIST OF ADDRESSES-------"<<endl;
            s << addressList[i]->toString() << endl;
        }
    }
    return s.str();



}
















