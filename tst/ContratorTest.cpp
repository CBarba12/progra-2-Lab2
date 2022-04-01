//
// Created by alexb on 26/03/2022.
//



#include "gtest/gtest.h"

#include "Contractor.h"

TEST(ContractorTesSuite,CalculaSalary){
    BankAccount* b1 = new BankAccount(123433);
    Contractor contractor("Pedro",24,1111,22222,1500,b1,20);


    EXPECT_EQ(contractor.calculateSalary(),30000);




}
