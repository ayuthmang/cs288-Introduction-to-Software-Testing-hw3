//
// Created by Ayuth Mangmesap on 5/6/2018 AD.
//

#include "TestBasePlusCommissionEmployee.h"
#include <iostream>
#include "../src/baseplus.h"

using namespace std;

BasePlusCommissionEmployee *basePlusCommissionEmployee;

string firstname = "Manee";
string lastname = "Meena";
string socialSecurityNumber = "333-33-3333";
double baseSalaryAmount = 15000;
double grossWeekSales = 0.0;
double percent = 0.0;

int main() {
    tearUp();
    runAllTest();
    tearDown();
    return 0;
}


void tearUp() {
    basePlusCommissionEmployee = new BasePlusCommissionEmployee(
            firstname,
            lastname,
            socialSecurityNumber,
            baseSalaryAmount,
            grossWeekSales,
            percent
    );
}

void tearDown() {
    delete basePlusCommissionEmployee;
}

void runAllTest() {

    cout << "[*] Unit Test For BasePlusCommissionEmployee Class\n";
    testSetCommissionRate();
    testGetCommissionRate();

    testSetGrossSales();
    testGetGrossSales();

    testSetBaseSalary();
    testGetBaseSalary();

    testEarnings();
    testPrint();
}

void testSetCommissionRate() {
    try {
        basePlusCommissionEmployee->setCommissionRate(percent);
        cout << "\t[x] setCommissionRate function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] setCommissionRate function test failed with " << e.what() << endl;
    }
}

void testGetCommissionRate() {
    if (basePlusCommissionEmployee->getCommissionRate() == percent)
        cout << "\t[x] getCommissionRate function test passed\n";
    else cout << "\t[-] getCommissionRate function test failed\n";
}

void testSetGrossSales() {
    try {
        basePlusCommissionEmployee->setGrossSales(grossWeekSales);
        cout << "\t[x] setGrossSales function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] setGrossSales function test failed with " << e.what() << endl;
    }
}

void testGetGrossSales() {
    if (basePlusCommissionEmployee->getGrossSales() == grossWeekSales)
        cout << "\t[x] getGrossSales function test passed\n";
    else cout << "\t[-] getGrossSales function test failed\n";
}

void testSetBaseSalary() {
    try {
        basePlusCommissionEmployee->setBaseSalary(baseSalaryAmount);
        cout << "\t[x] setBaseSalary function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] setBaseSalary function test failed with " << e.what() << endl;
    }
}

void testGetBaseSalary() {
    if (basePlusCommissionEmployee->getBaseSalary() == baseSalaryAmount)
        cout << "\t[x] getBaseSalary function test passed\n";
    else cout << "\t[-] getBaseSalary function test failed\n";
}

void testEarnings() {
    try {
        basePlusCommissionEmployee->earnings();
        cout << "\t[x] earnings function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] earnings function test failed with " << e.what() << endl;
    }
}

void testPrint() {
    try {
        basePlusCommissionEmployee->print();
        cout << "\t[x] print function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] print function test failed with " << e.what() << endl;
    }
}