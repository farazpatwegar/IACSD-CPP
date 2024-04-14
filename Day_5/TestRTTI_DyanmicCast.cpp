#include <iostream>
#include <typeinfo>
using namespace std;
class Emp
{
public:
    void calSalary()
    {
        cout << "----Employee CalSalary----" << endl;
    }
    void display()
    {
        cout << "----Employee details----" << endl;
    }
};
class Manager : public Emp
{
public:
    void ManagerTask()
    {
        cout << "---- Manager Task ----" << endl;
    }
    void calSalary()
    {
        cout << "----Manager CalsSalary----" << endl;
    }
};
class Admin : public Emp
{
public:
    void AdminTask()
    {
        cout << "-----Admin Task-----" << endl;
    }
    void calSalary()
    {
        cout << "----Admin CalsSalary----" << endl;
    }

};
int main()
{

    return 0;
}