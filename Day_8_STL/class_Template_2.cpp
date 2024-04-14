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

int main()
{
    myClass<int>obj(10,20);

    obj.add();
    obj.display();
    return 0;
}