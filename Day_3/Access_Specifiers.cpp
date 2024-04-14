#include<iostream>
using namespace std;
 class MyClass{
     public:int x;
            int y;

            void setA(int a) 
            {
                this->a = a;
            }
            int getA() {
               return a;
            }
            void setB(int b) {
               this->b = b;
            }
            int getB() {
               return b;
            }
     private: int a;
              int b;
    };

int main()
{
    MyClass myObj;
    myObj.x=25;
    myObj.y=20;
    // myObj.a=10;  We cant directly access private datamembers
    // myObj.b=5;  

    myObj.setA(10);
    myObj.setB(5);

    cout << "x = " << myObj.x << endl;
    cout << "y = " << myObj.y << endl;

    cout << "a = " << myObj.getA() << endl;
    cout << "b = " << myObj.getB() << endl;

    return 0;
}