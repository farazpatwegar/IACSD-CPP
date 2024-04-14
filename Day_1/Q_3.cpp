#include<iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter Two Number : "<<endl;
    cin>>num1>>num2;
    cout<<" Before Swapping : "<<endl;
    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;
    int temp=num1;
    num1=num2;
    num2=temp;
    cout<<" After Swapping : "<<endl;
    cout<<"num1: "<<num1<<endl;
    cout<<"num2: "<<num2<<endl;
    return 0;
}