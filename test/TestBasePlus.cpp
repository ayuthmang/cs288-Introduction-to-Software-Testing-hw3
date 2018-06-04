//
// Created by Ayuth Mangmesap on 4/6/2018 AD.
//

#include <iostream>
#include "../src/employee.h"
#include "../src/commission.h"

using namespace std;

Employee *employee;
string firstname = "Manee";
string lastname = "Meena";
string socialSecurityNumber = "333-33-3333";


// Function type
void tearUp();

void runAllTest();

void testSetFirstName();
void testGetFirstName();

void testSetLastName();
void testGetLastName();

void testSetSocialSecurityNumber();
void testGetSocialSecurityNumber();

void tearDown();

int main() {
    tearUp();
    runAllTest();
    tearDown();
    return 0;
} // end main

void tearUp() {
    employee = new CommissionEmployee(firstname, lastname, socialSecurityNumber, 0.0, 0.0);
}

void tearDown() {
//    delete employee;
}

void runAllTest() {

    cout << "[*] Unit Test For BasePlus Class\n";
    testSetFirstName();
    testGetFirstName();

    testSetLastName();
    testGetLastName();

    testSetSocialSecurityNumber();
    testGetSocialSecurityNumber();
}

void testSetFirstName() {
    try {
        employee->setFirstName(firstname);
        cout << "\t[x] setFirstName function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] setFirstName function test failed with " << e.what() << endl;
    }
}

void testGetFirstName() {
    if (employee->getFirstName() == firstname)
        cout << "\t[x] getFirstName function test passed\n";
    else cout << "\t[-] getFirstName function test failed\n";
}

void testSetLastName() {
    try {
        employee->setLastName(lastname);
        cout << "\t[x] setLastName function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] setLasName function test failed with " << e.what() << endl;
    }
}

void testGetLastName() {
    if (employee->getLastName() == lastname)
        cout << "\t[x] getLastName function test passed\n";
    else cout << "\t[-] getLastName function test failed\n";
}

void testSetSocialSecurityNumber() {
    try {
        employee->setSocialSecurityNumber(socialSecurityNumber);
        cout << "\t[x] setSocialSecurityNumber function test passed\n";
    } catch (const std::exception &e) { // caught by reference to base
        cout << "\t[-] setSocialSecurityNumber function test failed with " << e.what() << endl;
    }
};

void testGetSocialSecurityNumber() {
    if (employee->getSocialSecurityNumber() == socialSecurityNumber)
        cout << "\t[x] getSocialSecurityNumber function test passed\n";
    else cout << "\t[-] getSocialSecurityNumber function test failed\n";
};