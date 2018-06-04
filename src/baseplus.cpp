// BasePlusCommissionEmployee member-function definitions.
#include <iostream>

using std::cout;

#include "baseplus.h"

// constructor for class BasePlusCommissionEmployee
BasePlusCommissionEmployee::BasePlusCommissionEmployee( 
   const string &first, const string &last, 
   const string &socialSecurityNumber, 
   double baseSalaryAmount,
   double grossSalesAmount, 
   double rate )
   : CommissionEmployee( first, last, socialSecurityNumber, 
     grossSalesAmount, rate )  
{
   setBaseSalary( baseSalaryAmount );

} // end BasePlusCommissionEmployee constructor

// set base-salaried commission worker's wage
void BasePlusCommissionEmployee::setBaseSalary( double salary )
{ 
   baseSalary = salary < 0.0 ? 0.0 : salary; 

} // end function setBaseSalary

// return base-salaried commission worker's base salary
double BasePlusCommissionEmployee::getBaseSalary() const
{ 
    return baseSalary; 

} // end function getBaseSalary

// return base-salaried commission worker's earnings
double BasePlusCommissionEmployee::earnings() const
{ 
    return getBaseSalary() + CommissionEmployee::earnings(); 

} // end function earnings

// print base-salaried commission worker's name 
void BasePlusCommissionEmployee::print() const
{
   cout << "\nbase-salaried commission worker: ";
   Employee::print();  // code reuse
   cout << "Gross Sale : $" << getGrossSales()
        << "   Rate of Commission : " << getCommissionRate()*100 <<"%\n";

} // end function print

