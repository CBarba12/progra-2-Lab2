//
// Created by alexb on 31/03/2022.
//

#include "gtest/gtest.h"

#include "FullTimeEmployee.h"

TEST(FullTimeEmployeeTestSuite,CalculaSalary){
    BankAccount* b1 = new BankAccount(123433);
    FullTimeEmployee * c5= new FullTimeEmployee("Pedro",24,1111,22222,1500,b1,345);




    EXPECT_EQ(c5->calculateSalary(),367425);




}