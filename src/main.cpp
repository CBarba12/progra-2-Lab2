#include <iostream>

#include "Address.h"
#include "BankAccount.h"
#include "Person.h"
#include "Employee.h"
#include "Contractor.h"
#include"FullTimeEmployee.h"

int main() {

    BankAccount* b1 = new BankAccount(123433);
    Contractor* c1 = new Contractor("Pedro",24,1111,22222,1500,b1,20);
    FullTimeEmployee * c5= new FullTimeEmployee("Pedro",24,1111,22222,1500,b1,345);

    Address* a1 = new Address("HOME","san jose");
    Address* a3 = new Address("HOME","san jose");
    Address* a2 = new Address("OFFICE","Alajuela");

    c1->addAddress(a1);
    c1->addAddress(a3);

    c5->addAddress(a3);
  // cout<< c1->toString();

   cout<<c5->returnHomeAddress()<<endl;














    return 0;
}
