#include<iostream>
using namespace std;
class B
{
    virtual void function()
    {

    }
};
class D:public B
{

};
int main()
{
   B *b = new D;    //Allow base class poniter to point Derived class 
   D *d = dynamic_cast<D*>(b);  // Dynamic_Casting used to safe down casting 
                               // from a pointer of a base class to a pointer of a derived class
                               
   if(d != NULL)
   {
     cout<<"Works"<<endl;
   }
   else
   {
    cout<<"Cannot cast B* to D"<<endl;
   }

   return 0;
}