// CommissionEmployee class derived from Employee.
#ifndef COMMISSION_H
#define COMMISSION_H

#include "employee.h"  // Employee class definition

class CommissionEmployee : public Employee {

public:
   CommissionEmployee( const string &, const string &,
      const string &, double = 0.0, double = 0.0 );

   void setCommissionRate( double );
   double getCommissionRate() const;

   void setGrossSales( double );
   double getGrossSales() const;

   virtual double earnings() const;
   virtual void print() const;

private:
   double grossSales;      // gross weekly sales
   double commissionRate;  // commission percentage

}; // end class CommissionEmployee

#endif  // COMMISSION_H

