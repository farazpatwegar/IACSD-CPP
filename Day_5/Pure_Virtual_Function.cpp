// pure virtual -> Abstract 
// The class which have minimum 1 pure virtual function , we can't create a object of that class.
// To create a pure virtual function, we assign a value 0 to the function as follows.

// virtual void sound() = 0;

// An abstract class has at least one abstract function (pure virtual function).

#include <iostream>
using namespace std;
class Employee                    //  abstract base class
{
	virtual int getSalary()=0 ;    // pure virtual function

    // The = 0 syntax indicates that this function is pure virtual. 
    // This means that the function has no implementation in the base class 
    // and must be implemented in any derived class before objects of the derived class can be created.

};
class Developer : public Employee
{
	int salary;
	public:
		Developer(int s)
		{
			salary = s;
		}
		int getSalary()
		{
			return salary;
		}
};
class Driver : public Employee
{
	int salary;
	public:
		Driver(int t)
		{
			salary = t;
		}
		int getSalary()
		{
			return salary;
		}
};
int main()
{
	Developer d1(5000);
	Driver d2(3000);
	int a, b;
	a = d1.getSalary();
	b = d2.getSalary();
	cout << "Salary of Developer : " << a << endl;
	cout << "Salary of Driver : " << b << endl;
	return 0;
}