#include<iostream>
using namespace std;
int main()
{
    float a1,a2,a3;
    cout<<"Enter three angles of a traingle "<<endl;
    cin>>a1>>a2>>a3;
    if(a1+a2+a3 == 180)
    {
        cout<<"Traingle is valid "<<endl;
    }
    else
    {
         cout<<"Traingle is not valid "<<endl;
    }
    return 0;
}