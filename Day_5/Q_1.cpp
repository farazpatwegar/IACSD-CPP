#include <iostream>
using namespace std;

class Employee
{
public:
    int empid;
    string name;
    int deptid;
    double basicSalary;

    Employee()
    {
        empid = 101;
        name = "Shivanjali";
        deptid = 10;
        basicSalary = 30000;
    }

    Employee(int empid, string name, int deptid, double basicSalary)
    {
        this->empid = empid;
        this->name = name;
        this->deptid = deptid;
        this->basicSalary = basicSalary;
    }

    double NetSalary()
    {
        return basicSalary;
    }

    void display()
    {
        cout << "Employee ID : " << empid << endl;
        cout << "Employee Name : " << name << endl;
        cout << "Department ID : " << deptid << endl;
        cout << "Basic Salary : " << basicSalary << endl;
    }
};

class Manager : public Employee
{
public:
    double perfBonus;
    Manager()
    {
        perfBonus = 5000;
    }
    Manager(int empid, string name, int deptid, double basicSalary, double perfBonus) : Employee(empid, name, deptid, basicSalary)
    {
        this->perfBonus = perfBonus;
    }
    double NetSalary()
    {
        return basicSalary + perfBonus;
    }
    void display()
    {
        Employee::display();
        cout << "Performance bonus : " << perfBonus << endl;
        cout << "Net Salary : " << NetSalary() << endl;
    }
};

class Worker : public Employee
{
public:
    int hoursWorked;
    int hourlyRate;

    Worker()
    {
        hoursWorked = 10;
        hourlyRate = 600;
    }
    Worker(int empid, string name, int deptid, double basicSalary, int hoursWorked, int hourlyRate) : Employee(empid, name, deptid, basicSalary)
    {
        this->hoursWorked = hoursWorked;
        this->hourlyRate = hourlyRate;
    }
    double NetSalary()
    {
        return basicSalary + (hoursWorked * hourlyRate);
    }
    int getHrlyRate()
    {
        return hoursWorked * hourlyRate;
    }
    void display()
    {
        Employee::display();
        cout << "Hours Worked : " << hoursWorked << endl;
        cout << "Hourly Rate : " << hourlyRate << endl;
        cout << "Net Salary : " << NetSalary() << endl;
    }
};

int main() {
    Employee emp;
    Manager mg;
    Worker wr;
    int choice;

    Employee* employees[30] = { nullptr };
    int numEmployees = 0;

    do {
        cout << "------ Enter choice as per menu -------" << endl;
        cout << "1.Hire Manager\n2.Hire Worker\n3.Display Net Salary information\n4.Exit" << endl;
        cin >> choice;

        switch (choice) {
        case 1: {
            int empid, deptid;
            string name;
            double basicSalary, perfBonus;
            cout << "Enter Manager details: " << endl;
            cout << "Employee ID: ";
            cin >> empid;
            cout << "Name: ";
            cin >> name;
            cout << "Department ID: ";
            cin >> deptid;
            cout << "Basic Salary: ";
            cin >> basicSalary;
            cout << "Performance Bonus: ";
            cin >> perfBonus;
            employees[numEmployees++] = new Manager(empid, name, deptid, basicSalary, perfBonus);
            break;
        }
        case 2: {
            int empid, deptid, hoursWorked, hourlyRate;
            string name;
            double basicSalary;
            cout << "Enter Worker details: " << endl;
            cout << "Employee ID: ";
            cin >> empid;
            cout << "Name: ";
            cin >> name;
            cout << "Department ID: ";
            cin >> deptid;
            cout << "Basic Salary: ";
            cin >> basicSalary;
            cout << "Hours Worked: ";
            cin >> hoursWorked;
            cout << "Hourly Rate: ";
            cin >> hourlyRate;
            employees[numEmployees++] = new Worker(empid, name, deptid, basicSalary, hoursWorked, hourlyRate);
            break;
        }
        case 3:
            cout << "Displaying information of all employees net salary:" << endl;
            for (int i = 0; i < numEmployees; ++i) {
                employees[i]->display();
                cout << endl;
            }
            break;
        }
    } while (choice != 4);

    // Deallocate memory for dynamic objects
    for (int i = 0; i < numEmployees; ++i) {
        delete employees[i];
    }

    return 0;
}