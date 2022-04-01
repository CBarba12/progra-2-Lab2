//
// Created by alexb on 26/03/2022.
//

#ifndef LAB2CESAR_CONTRACTOR_H
#define LAB2CESAR_CONTRACTOR_H

#include "Employee.h"
#include "Tools.h"
#include "IWorkingFromHome.h"
#include "IWorkingFromOffice.h"

class Contractor: public Employee,public IWorkingFromHome,public IWorkingFromOffice{
private:
    int fixedHours;
public:
    Contractor(const string &name, int age, int employeeId, int jobId, double paymentPerHour, BankAccount *bankAccount,
               int fixedHours);

    virtual ~Contractor();

    int getFixedHours() const;

    void setFixedHours(int fixedHours);

    virtual float calculateSalary() const override;

    string toString() const;


    virtual string returnOfficeAddress() ;
    virtual string returnHomeAddress() override;


};


#endif //LAB2CESAR_CONTRACTOR_H
