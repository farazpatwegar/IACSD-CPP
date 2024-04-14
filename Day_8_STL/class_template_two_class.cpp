#include<iostream>
using namespace std;

template<typename T> 
class myClass
{
  public: T a;
          T b;
          T c;
          myClass(T a, T b)
          {
            this->a=a;
            this->b=b;
          }

          void add()
          {
            c=a+b;
          }

          void display()
          {
             cout<<"Value of c : "<<c<<endl;
          }
};

template<typename T2> 
class myClass2
{
  public: T2 a1;
          T2 b1;
          T2 c1;
          myClass2(T2 a1, T2 b1)
          {
            this->a1=a1;
            this->b1=b1;
          }

          void substract()
          {
            c1=a1-b1;
          }

          void displaysub()
          {
             cout<<"Value of c : "<<c1<<endl;
          }
};

int main()
{
    myClass<int>obj(10,20);
    obj.add();
    obj.display();

    myClass2<double>obj2(10.402,5.201);
    obj2.substract();
    obj2.displaysub();
    return 0;
}