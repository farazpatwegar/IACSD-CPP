// Employee Inheritance:
// Problem Statement: Build a system for managing employees. Create a base class Employee with attributes such as name, employee ID, and salary. Then, derive classes like Manager and Developer, each with its own attributes and methods. Implement a common method, like calculate_salary(), in the base class.


#include<iostream>
#include<string.h>

using namespace std;

class Employee{
    char  name[30];
    int empID;
protected:   double salary;
public:
    Employee(){
        strcpy(name,"\0" );
        // name="\0";//error: incompatible types in assignment of 'const char [2]' to  char [30]'
        empID=0;
        salary=0.0;
        cout<<"emp default ctor"<<endl;
    }
    Employee(char * nm, int eID, double sal){
        strcpy(name,nm);
        empID=eID;
        salary=sal;
        cout<<"emp Parameterized  ctor"<<endl;

    }
    void CalSal(){
        cout<<"The employee salary:" <<salary<<endl;
    }

     void display(){
        cout<<"Employee Name: "<<name<<"  Employee ID: "<<empID<<endl;
    }

};

class Manager: public Employee{
    int deptID;
    double incentives;
public: 
    Manager(){
        deptID=0;
        cout<<"mger d ctor"<<endl;
    }
    Manager(char * nm,int eID,double sal, int deptID,double incentives):Employee(nm,eID,sal){
        this->deptID=deptID;
        this->incentives=incentives;
        cout<<"Manager Parameterized  ctor"<<endl;
    }
    void CalSal(){
        cout<<"The net salary(salary + incentives): "<<(salary+incentives)<<endl;
    }
    void display(){
        Employee::display();
        cout<<"DeptID: "<<deptID<<"  Salary: "<<salary<<"  Incentives: "<<incentives<<endl;
    }
};
class Developer: public Employee{
    int deptID;
    double overtime_pay;
public: 
    Developer(){
        deptID=0;
        overtime_pay=0;
        cout<<"developer d ctor"<<endl;
    }
    Developer(char * nm,int eID,double sal, int deptID,double overtime_pay):Employee(nm,eID,sal){
        this->deptID=deptID;
        this->overtime_pay=overtime_pay;
        cout<<"developer Parameterized  ctor"<<endl;
    }
    void CalSal(){
        cout<<"The net salary(salary + overtime_pay): "<<salary+overtime_pay<<endl;
    }
    void display(){
        Employee::display();
        cout<<"DeptID: "<<deptID<<"  Salary: "<<salary<<"  overtime pay: "<<overtime_pay<<endl;
    }
};
int main(){

    //  Employee e;
    //  e.display();
    Employee e1("Ram",1,10000);
    e1.display();
    e1.CalSal();

    // Manager m;
    // m.display();
    // Manager m1("Sham",2,50000,201,10000);
    // Manager m1(201,10000);//error 
    // m1.display();
    // m1.CalSal();


    // Developer d;
    // d.display();
    // Developer d1("Rohit",3,40000,301,10000);
    // d1.display();
    // d1.CalSal();



    
    return 0;
}