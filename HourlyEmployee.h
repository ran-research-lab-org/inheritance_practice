#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H

#include "Employee.h"

class HourlyEmployee : public Employee {
public:
    double payPerHour;
    double workedHours;

    HourlyEmployee(const std::string& name, int id, double payPerHour, double workedHours);

    double calculatePay() const override;
};

#endif

