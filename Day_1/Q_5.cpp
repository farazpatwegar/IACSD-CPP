#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any integer value : "<<endl;
    cin>>num;
    if(num%5 == 0 && num%7 == 0)
    {
        cout<<"Entered number is divisible by 5 and 7 "<<endl;
    }
    else
    {
        cout<<"Entered number is not divisible by 5 and 7  "<<endl;
    }
    return 0;
}