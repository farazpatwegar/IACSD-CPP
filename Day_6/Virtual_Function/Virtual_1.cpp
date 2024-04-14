#include<iostream>
using namespace std;
class Base
{
   public :  
           virtual void print()
           {
              cout<<"Print base class"<<endl;
           }
           void show()
           {
             cout<<"show base class"<<endl;
           }
};
class Derived : public Base
{
    void print()
           {
              cout<<"Print Derived class"<<endl;
           }
    void show()
           {
             cout<<"show Derived class"<<endl;
           }
};
int main()
{
    Base* ptr;
    Derived d;
    ptr = &d;

    ptr->print();
    ptr->show();
    return 0;
}