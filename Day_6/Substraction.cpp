#include <iostream>
using namespace std;
class Box
{
  public : int num1,num2;
  Box()
  {
    num1=10;
    num2=20;
  }
  Box(int num1,int num2)
  {
    this->num1 = num1;
    this->num2=num2;
  }
  Box operator-(const Box& b1)
  {
    Box b2;
    b2.num1=num1 - b1.num1;
    b2.num2=num2 - b1.num2;
    return b2;
  }
  void show()
  {
    cout<<" num 1: "<<num1<<endl;
    cout<<" num 2: "<<num2<<endl;
  }
}; 
int main()
{
    Box a(4,5);
    Box b(1,3);
    Box c = a - b;
    c.show(); 
    return 0;
}