#include <iostream>
using namespace std;
class Employee
{
   public :
          string name;
          int emp_Id;


          Employee()
          {
            name="Shivanjali";
            emp_Id = 100;
          }
          Employee(string name,int emp_Id)
          {
            this->name=name;
            this->emp_Id=emp_Id;
          }

          virtual double calculatePay()=0;
};
class HourlyEmployee : public Employee
{
  public  : 
           int worktime;
           double hourpay;

           HourlyEmployee()
           {
            worktime = 3;
            hourpay=1000;
           }
           HourlyEmployee(string name,int emp_Id,int worktime,double hourpay):Employee(name,emp_Id)
           {
            this->worktime=worktime;
            this->hourpay=hourpay;
           }

           double calculatePay()
           {
             return worktime*hourpay;
           }
};
class SalariedEmployee : public Employee
{
    public :  double monthSalary;
              SalariedEmployee()
              {
                monthSalary=50000;
              }
              SalariedEmployee(string name,int emp_Id,double monthSalary):Employee(name,emp_Id)
              {
                this->monthSalary=monthSalary;
              }
              double calculatePay()
              {
                return monthSalary;
              }
};

int main()
{
    HourlyEmployee obj1("ABC", 101, 5, 5000.00);
    cout << "Hourly employee's pay: " << obj1.calculatePay() << endl;

    SalariedEmployee obj2("XYZ", 102, 100000);
    cout << "Salaried employee's pay: " << obj2.calculatePay() << endl;

    return 0;
}