#include<iostream>
using namespace std;

template<class T> 
class myClass
{
  public: T a=5;
          T b=6;
          void add()
          {
            cout<<"Addition : "<<a+b<<endl;
          }
};

int main()
{
    myClass<int> m;
    m.add();
    return 0;
}