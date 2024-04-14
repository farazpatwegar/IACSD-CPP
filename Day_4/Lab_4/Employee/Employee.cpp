#include "Employee.h"

// Employee methods
Employee::Employee()
{
    name = "Shivanjali";
    emp_Id = 100;
}

Employee::Employee(std::string name, int emp_Id)
{
    this->name = name;
    this->emp_Id = emp_Id;
}

// HourlyEmployee methods
HourlyEmployee::HourlyEmployee()
{
    worktime = 3;
    hourpay = 1000;
}

HourlyEmployee::HourlyEmployee(std::string name, int emp_Id, int worktime, double hourpay) : Employee(name, emp_Id)
{
    this->worktime = worktime;
    this->hourpay = hourpay;
}

double HourlyEmployee::calculatePay()
{
    return worktime * hourpay;
}

// SalariedEmployee methods
SalariedEmployee::SalariedEmployee()
{
    monthSalary = 50000;
}

SalariedEmployee::SalariedEmployee(std::string name, int emp_Id, double monthSalary) : Employee(name, emp_Id)
{
    this->monthSalary = monthSalary;
}

double SalariedEmployee::calculatePay()
{
    return monthSalary;
}
