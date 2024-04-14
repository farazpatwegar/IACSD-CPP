#include <iostream>
#include "Employee.h"

int main()
{
    HourlyEmployee obj1("ABC", 101, 5, 5000.00);
    std::cout << "Hourly employee's pay: " << obj1.calculatePay() << std::endl;

    SalariedEmployee obj2("XYZ", 102, 100000);
    std::cout << "Salaried employee's pay: " << obj2.calculatePay() << std::endl;

    return 0;
}
