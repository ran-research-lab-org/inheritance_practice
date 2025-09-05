#ifndef SALARIEDEMPLOYEE_H
#define SALARIEDEMPLOYEE_H

#include "Employee.h"

class SalariedEmployee : public Employee {
public:
    double yearlyPayment;

    SalariedEmployee(const std::string& name, int id, double yearlyPayment);

    double calculatePay() const override;
};

#endif

