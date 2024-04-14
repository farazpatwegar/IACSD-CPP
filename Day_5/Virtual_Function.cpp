#include<iostream>
using namespace std;
class A
{
  public: virtual void show()
   {
    cout<<"---- class A function -----"<<endl;
   }
};
class B:public A
{
   public : void show()
   {
    cout<<"---- class B function -----"<<endl;
   }
   void bFunc()
   {
    cout<<"------ Separate B function ------"<<endl;
   }
};
int main()
{
    B obj;
    A *obj1;
    obj1=&obj;
    obj1->show();
    return 0;
}

// Read from -> https://www.codesdope.com/cpp-virtual-and-abstract/