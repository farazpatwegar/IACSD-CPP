#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter any integer value : "<<endl;
    cin>>num;
    if(num%2 == 0)
    {
        cout<<"Entered number is even "<<endl;
    }
    else
    {
        cout<<"Entered number is odd "<<endl;
    }
    return 0;
}