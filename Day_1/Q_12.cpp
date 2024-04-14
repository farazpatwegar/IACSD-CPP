#include<iostream>
using namespace std;
int main()
{
    int num,sum=0;
    cout<<"Sum of series"<<endl;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
       sum += i;
    }
    cout<<" SUm of series : "<<sum<<endl;
    return 0;
}