//
// Created by Ayuth Mangmesap on 5/6/2018 AD.
//

#include <iostream>
#include "../src/commission.h"

using namespace std;

CommissionEmployee *commissionEmployee;

string firstname = "Manee";
string lastname = "Meena";
string socialSecurityNumber = "333-33-3333";
double grossWeekSales = 0.0;
double percent = 0.0;

void tearUp();
void tearDown();
void runAllTest();

void testSetCommissionRate();
void testGetCommissionRate();

void testSetGrossSales();
void testGetGrossSales();

void testEarnings();
void testPrint();

int main() {
    tearUp();
    runAllTest();
    tearDown();
    return 0;
}

void tearUp() {
    commissionEmployee = new CommissionEmployee(firstname, lastname, socialSecurityNumber, grossWeekSales, percent);
}
void tearDown() {
    delete commissionEmployee;
}
void runAllTest() {
    cout << "[*] Unit Test For CommissionEmployee Class\n";
    testSetCommissionRate();
    testGetCommissionRate();
    testSetGrossSales();
    testGetGrossSales();
    testEarnings();
    testPrint();
}

void testSetCommissionRate() {
    try {
        commissionEmployee->setCommissionRate(percent);
        cout << "\t[x] setCommissionRate function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] setCommissionRate function test failed with " << e.what() << endl;
    }
}
void testGetCommissionRate() {
    if (commissionEmployee->getCommissionRate() == percent)
        cout << "\t[x] getCommissionRate function test passed\n";
    else cout << "\t[-] getCommissionRate function test failed\n";
}

void testSetGrossSales() {
    try {
        commissionEmployee->setGrossSales(grossWeekSales);
        cout << "\t[x] setGrossSales function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] setGrossSales function test failed with " << e.what() << endl;
    }
}
void testGetGrossSales() {
    if (commissionEmployee->getGrossSales() == grossWeekSales)
        cout << "\t[x] getGrossSales function test passed\n";
    else cout << "\t[-] getGrossSales function test failed\n";
}

void testEarnings() {
    try {
        commissionEmployee->earnings();
        cout << "\t[x] earnings function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] earnings function test failed with " << e.what() << endl;
    }
}
void testPrint() {
    try {
        commissionEmployee->print();
        cout << "\t[x] print function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] print function test failed with " << e.what() << endl;
    }
}