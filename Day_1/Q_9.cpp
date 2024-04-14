#include<iostream>
using namespace std;
int main()
{
    int num,fact=1;
    cout<<"Enter any integer value : "<<endl;
    cin>>num;
    for(int i=num;i>=1;i--)
    {
        fact *= i;
    }
    cout<<"Factorial of "<<num<<" is : "<<fact<<endl;
    return 0;
}