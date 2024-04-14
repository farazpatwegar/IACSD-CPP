#include <iostream>
using namespace std;
class Employee
{
   public :
          string name;
          int emp_Id;
          double salary;
          Employee()
          {
             name="default name";
             emp_Id=0;
             salary=0.0;
          }
          Employee(string name,int emp_Id,double salary)
          {
             this->name=name;
             this->emp_Id=emp_Id;
             this->salary=salary;
          }
         
          double calculate_Salary()
          {
             return salary;
          }
           void display()
          {
            cout<<"Employee Name : "<<name<<endl;
            cout<<"Employee ID  : "<<emp_Id<<endl;
            cout<<"Employee Salary : "<<calculate_Salary()<<endl;
          }
};
class Manager:public Employee
{ 
   public :  string department;
             
             Manager()
             {
                department="Sales";
             }
             Manager(string name,int emp_Id,double salary,string department):Employee(name,emp_Id, salary)
             {
                this->department=department;
             }
             void managerWork()
             {
                cout<<"------ Manager Method -----"<<endl;
             }
           
};
class Developer:public Employee
{
    public : string projectName;
             Developer()
             {
                projectName="ABCD";
             }
             Developer(string name,int emp_Id,double salary,string projectName): Employee(name, emp_Id, salary)
             {
                this->projectName=projectName;
             }
             void developerWork()
             {
                cout<<"----- Developer Method ------"<<endl;
             }
};
int main()
{
    Manager mg;
    mg.display();
    cout<<"--------------------------------------"<<endl;
    Developer dp;
    dp.display();
    return 0;
}