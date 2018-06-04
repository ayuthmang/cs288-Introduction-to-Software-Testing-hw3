// CommissionEmployee class member-function definitions.
#include <iostream>

using std::cout;

#include "commission.h"  // Commission class

// CommissionEmployee constructor 
CommissionEmployee::CommissionEmployee( const string &first,
   const string &last, const string &socialSecurityNumber,
   double grossWeeklySales, double percent )
   : Employee( first, last, socialSecurityNumber )  
{
   setGrossSales( grossWeeklySales );
   setCommissionRate( percent );

} // end CommissionEmployee constructor

// return commission worker's rate
double CommissionEmployee::getCommissionRate() const
{
    return commissionRate;

} // end function getCommissionRate

// return commission worker's gross sales amount
double CommissionEmployee::getGrossSales() const
{
    return grossSales;

} // end function getGrossSales

// set commission worker's weekly base salary
void CommissionEmployee::setGrossSales( double sales ) 
{ 
   grossSales = sales; 

} // end function setGrossSales

// set commission worker's commission
void CommissionEmployee::setCommissionRate( double rate )
{ 
    commissionRate = ( rate > 0.0 && rate < 1.0 ) ? rate : 0.0;

} // end function setCommissionRate

// calculate commission worker's earnings
double CommissionEmployee::earnings() const
{ 
   return getCommissionRate() * getGrossSales(); 

} // end function earnings

// print commission worker's name 
void CommissionEmployee::print() const
{
   cout << "\ncommission employee: ";
   Employee::print();  // code reuse
   cout << "Gross Sale : $" << grossSales
        << "   Rate of Commission : " << commissionRate*100 <<"%\n";
} // end function print

