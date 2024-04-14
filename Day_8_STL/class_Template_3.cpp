#include<iostream>
using namespace std;

template<typename T, typename T2> 
class myClass
{
  public: T a;
          T2 b;
          T2 c;
          myClass(T a, T2 b)
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

int main()
{
    myClass<int,float>obj(10,20.45);

    obj.add();
    obj.display();
    return 0;
}