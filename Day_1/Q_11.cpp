#include<iostream>
using namespace std;
int main()
{
    int num;
    int flag=0;
    cout<<"Checking entered number is prime or not "<<endl;
    cout<<"Enter any integer value :"<<endl;
    cin>>num;
    for(int i=2;i<num;i++)
    {
       if(num % i == 0)
       {
        flag=1;
        break;
       }
       else
       {
        flag=0;
       }
    }
    if(flag==1)
    {
        cout<<"Entered number is not prime "<<endl;
    }
    else
    {
        cout<<"Entered number is prime "<<endl;
    }
    return 0;
}