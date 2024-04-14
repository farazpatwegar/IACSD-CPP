#ifndef EMPLOYEE_H
#define EMPLOYEE_H
#include <string>
class Employee
{
public:
    std::string name;
    int emp_Id;

    Employee();
    Employee(std::string name, int emp_Id);

    virtual double calculatePay() = 0;
};

class HourlyEmployee : public Employee
{
public:
    int worktime;
    double hourpay;

    HourlyEmployee();
    HourlyEmployee(std::string name, int emp_Id, int worktime, double hourpay);

    double calculatePay() ;
};

class SalariedEmployee : public Employee
{
public:
    double monthSalary;

    SalariedEmployee();
    SalariedEmployee(std::string name, int emp_Id, double monthSalary);

    double calculatePay() ;
};
#endif