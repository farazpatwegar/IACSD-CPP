#include<iostream>
using namespace std;
class Random
{
    private: int num1;
     public : 
             int num2;
             int add;
             Random()
             {
                num1=0;
                num2=0;
                add=0;
             }
            
             void getData()
             {
                cout<<"Enter num 1 : "<<endl;
                cin>>num1;
                cout<<"Enter num 2 : "<<endl;
                cin>>num2;
             }
             void setData(int a,int b)
             {
                num1=a;
                num2=b;
             }
           void show()
             {
                cout<<"num 1 : "<<num1<<endl;
                cout<<"num 2 : "<<num2<<endl;
                // cout<<" Value of C : "<<c.add<<endl;
                
             }
             Random operator+(const Random& r2)
             {
                 Random rd;
                 rd.num1 = this->num1 + r2.num1;
                 rd.num2  = this->num2 + r2.num2;
                 return rd;
             }
};

           
int main()
{
    Random c;
    Random r1;
    Random r2;
    r1.getData();
    r2.getData();

    c = r1 + r2;
    c.show();
    cout<<"c:"<<c.num2<<endl;
    return 0;
}