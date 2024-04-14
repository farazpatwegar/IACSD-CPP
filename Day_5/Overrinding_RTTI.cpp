#include<iostream>
using namespace std;
class Employee
{
  private: int empid;
           string name;
  public: int salary;
             Employee()
			{
				empid=101;
				name="Shiva";
				salary=20000;
			}
            Employee(int empid,string name,double salary)
			{
				this->empid=empid;
				this->name=name;
				this->salary=salary;
			}
            void calSalary()
			{
				cout<<"Employee Salary="<<salary<<endl;
			}
            void display()
			{
			cout<<"Employee ID :"<<empid<<"\n Name : "<<name<<"\n Salary : "<<salary<<endl;
				
			}
};
class Manager:virtual public Employee
{
  private:
         double incentives;
         string deptName;
  public:
        Manager()
        {
            this->incentives=5000;
	       	deptName="XYZ";
        }
        Manager(int empid,string name,double salary,string deptName,double incentives):Employee(empid,name,salary)
        {
            this->deptName=deptName;
		   	this->incentives=incentives;
        }
        void ManagerTask()
		{
			cout<<"Manager task   "<<endl;
		}
        void display()
		{
			Employee::display();
			cout<<"Incentives : "<<incentives<<"\nDepartment Name : "<<deptName<<endl;
		}
        void calSalary()
        {
            cout<<"Manager Total Salary(including incentive) : "<<salary+incentives<<endl;
        }
			
};
class SalesPerson:virtual public Employee
{
  double pa,fa,ta;
  public:SalesPerson()
         {
            pa,fa,ta=1000;
         }
         SalesPerson(int empid,string name,double salary,double pa,double fa,double ta):Employee(empid,name,salary)
         {
            this->pa=pa;
            this->fa=fa;
            this->ta=ta;
         }
         void targets()
         {
            cout<<"------ SalesPerson task ------"<<endl;
         }
         void display()
         {
            Employee::display();
            cout<<"SalesPerson : "<<pa<<" "<<fa<<" "<<ta<<endl;
         }
         void calSalary()
         {
            cout<<"SalesPerson Salary : "<<(pa+fa+ta+salary)<<endl;
         }
};
class SalesManager:public Manager,public SalesPerson
{
   private:
          int xyz;

   public:SalesManager()
          {
            xyz=100;
          }
          SalesManager(int empid,string name,double salary,double pa,double fa,double ta,int xyz):SalesPerson(empid,name,salary,pa,fa,ta)
          {
               this->xyz=xyz;
          }
           SalesManager(int empid,string name,double salary,string deptName,double incentives,int xyz):Manager(empid,name,salary,deptName,incentives)
          {
               this->xyz=xyz;
          }
           void display1()
         {
           
            cout<<"SalesManager : "<<xyz<<endl;
         }
         void calSalary()
         {
            cout<<"SalesManager Salary : "<<(xyz+salary)<<endl;
         }
};
int main()
{
    Manager mObj(35,"Shivanjali",30000,"IT",5000.00);
    // // mObj.calSalary();
    // mObj.display();
    // // mObj.calSalary();

    SalesManager sObj;
    cout<<"------------------------------------------"<<endl;
    sObj.Manager::display();
    cout<<"------------------------------------------"<<endl;
    sObj.SalesPerson::display();
    cout<<"------------------------------------------"<<endl;
    sObj.display1();
    // sObj.SalesPerson::calSalary();
    return 0;
}