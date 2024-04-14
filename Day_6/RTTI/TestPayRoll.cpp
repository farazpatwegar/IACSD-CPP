#include <iostream>
#include <typeinfo>
using namespace std;
class Employee
{
private:
    int empid;
    string name;

protected:
    double salary;
    Employee()
    {
        empid = 10;
        name = "ABC";
        salary = 10000;
    }
    Employee(int empid, string name, double salary)
    {
        this->empid = empid;
        this->name = name;
        this->salary = salary;
    }
    virtual void calSalary()
    {
        cout << "Employee Salary=" << salary << endl;
    }
    virtual void display()
    {
        cout << empid << "   " << name << "    " << salary << endl;
    }
};
class Manager : public Employee
{
private:
    double incentives;
    string deptName;

public:
    Manager() // Employee defaul constr get invoked implicitly
    {
        this->incentives = 5000;
        deptName = "Abc";
    }
    Manager(int empid, string name, double salary, string deptName, double incentives) : Employee(empid, name, salary)
    {
        this->deptName = deptName;
        this->incentives = incentives;
    }
    void ManagerTask()
    {
        cout << "Manager task   " << endl;
    }
    void display()
    {
        Employee::display(); //
        cout << "Manager :" << incentives << "    " << deptName << endl;
    }
    // ManagerCalSalary
    void calSalary()
    { // if salary is private,not accessible outside employee class

        cout << "Manager Salary=" << incentives + this->salary << endl;
    }
};
class SalesPerson : public Employee
{

    double pa, fa, ta;

public:
    SalesPerson()
    {
        pa, fa, ta = 1000;
    }
    SalesPerson(int empid, string name, double salary, double pa, double fa, double ta) : Employee(empid, name, salary)
    {
        this->pa = pa;
        this->fa = fa;
        this->ta = ta;
    }
    void targets()
    {
        cout << "SalesPerson Task " << endl;
    }

    void display()
    {
        Employee::display();
        cout << "SalesPerson:" << pa << "   " << ta << "    " << fa << endl;
    }
    void calSalary()
    {
        cout << "SalesPerson Salary=" << (pa + fa + ta + this->salary) << endl;
    }
};
int main()
{
    Employee emp(202, "Nitesh", 30000);
    emp.calSalary();
    emp.display(); // empid name salary

    cout << "\n-----Manager---------" << endl;
    Manager mgr;
    mgr.calSalary();   // parent employee
    mgr.ManagerTask(); // manager
    mgr.display();     // parent  employee id name salary incentives deptName

    cout << "\n-----SalesPerson---------" << endl;
    SalesPerson sp(506, "Mukesh", 40000, 5000, 2000, 3000);
    // employee--->SalesPerson
    sp.display(); //
    sp.targets();
    sp.calSalary();

    cout << "----------collection of Employees-----" << endl;
    //
    Employee *iacsd[4];

    iacsd[0] = &emp;
    iacsd[1] = &mgr;
    iacsd[2] = &sp;
    iacsd[3] = &mgr1;

    Manager* mObj=dynamic_cast<Manager*>(Employee);//DownCasting  Parent---casted-->Manager
   mObj->ManagerTask();

    return 0;
}