//
// Created by alexb on 26/03/2022.
//

#ifndef LAB2CESAR_FULLTIMEEMPLOYEE_H
#define LAB2CESAR_FULLTIMEEMPLOYEE_H


#include "Employee.h"
#include "Tools.h"
#include "IWorkingFromHome.h"

class FullTimeEmployee: public Employee,public IWorkingFromHome{
private:
    int workingHours;
public:
    int getWorkingHours() const;

    void setWorkingHours(int workingHours);

    virtual ~FullTimeEmployee();

    FullTimeEmployee(const string &name, int age, int employeeId, int jobId, double paymentPerHour,
                     BankAccount *bankAccount, int workingHours);


    virtual float calculateSalary() const override;


    string toString() const;

    virtual string returnHomeAddress();


};

#endif //LAB2CESAR_FULLTIMEEMPLOYEE_H
