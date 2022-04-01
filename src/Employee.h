//
// Created by alexb on 25/03/2022.
//

#ifndef LAB2CESAR_EMPLOYEE_H
#define LAB2CESAR_EMPLOYEE_H
#include "Tools.h"
#include "Person.h"
#include "BankAccount.h"
#include "Address.h"

class Employee :public Person{
protected:
    int employeeId;
    int jobId;
    double paymentPerHour;
    BankAccount* bankAccount;
    Address* *addressList;
    int cant;
    int tam;
public:
    int getEmployeeId() const;

    void setEmployeeId(int employeeId);

    int getJobId() const;

    void setJobId(int jobId);

    double getPaymentPerHour() const;

    void setPaymentPerHour(double paymentPerHour);

    BankAccount *getBankAccount() const;

    void setBankAccount(BankAccount *bankAccount);

    Address **getAddressList() const;

    void setAddressList(Address **addressList);

    int getCant() const;

    void setCant(int cant);

    int getTam() const;

    void setTam(int tam);

    Employee(const string &name, int age, int employeeId, int jobId, double paymentPerHour, BankAccount *bankAccount);


    virtual ~Employee();

    bool  addAddress(Address*);

    virtual string toString() const;

    virtual float calculateSalary() const = 0;




};


#endif //LAB2CESAR_EMPLOYEE_H
