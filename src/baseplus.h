// BasePlusCommissionEmployee class derived from Employee.
#ifndef BASEPLUS_H
#define BASEPLUS_H

#include "commission.h"  // Employee class definition

class BasePlusCommissionEmployee : public CommissionEmployee {

public:
   BasePlusCommissionEmployee( const string &, const string &,
      const string &, double = 0.0, double = 0.0, double = 0.0 );

   void setBaseSalary( double );
   double getBaseSalary() const;
   
   virtual double earnings() const;
   virtual void print() const;

private:
   double baseSalary;       // base salary per week

}; // end class BasePlusCommissionEmployee

#endif // BASEPLUS_H

