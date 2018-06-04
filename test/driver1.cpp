// Driver for Employee hierarchy.
#include <iostream>

using namespace std;

#include <iomanip>

using std::setprecision;
  
#include <vector>

using std::vector;

#include <typeinfo>

#include "../src/employee.h"    // Employee base class
#include "../src/commission.h"  // CommissionEmployee class
#include "../src/baseplus.h"    // BasePlusCommissionEmployee class

int main()
{
   // set floating-point output formatting
   cout << fixed << setprecision( 2 );

   // create vector employees
   vector < Employee * > employees( 2 );

   // initialize vector with Employees
   employees[ 0 ] = new CommissionEmployee( "Sue", "Jones",
      "222-22-2222", 10000, .06 );
   employees[ 1 ] = new BasePlusCommissionEmployee( "Bob",
      "Lewis", "333-33-3333", 300, 5000, .04 );

   // generically process each element in vector employees
   for ( int i = 0; i < employees.size(); i++ ) {

      // output employee information
      employees[ i ]->print();

      // downcast pointer
      BasePlusCommissionEmployee *commissionPtr =
         dynamic_cast < BasePlusCommissionEmployee * >
            ( employees[ i ] );

      // determine whether element points to base-salaried
      // commission worker
      if ( commissionPtr != 0 ) {
         cout << "Base salary: $"
              << commissionPtr->getBaseSalary() << endl;
      }

      cout << "earned $" << employees[ i ]->earnings() << endl;

   }

   // release memory held by vector employees
   for ( int j = 0; j < employees.size(); j++ ) {

      // output class name
      cout << "\ndeleting object of "
           << typeid( *employees[ j ] ).name();

      delete employees[ j ];

   } // end for

   cout << endl;

   getchar();
   return 0;

} // end main

