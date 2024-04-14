#include<iostream>
using namespace std;
int main()
{
    int num;
    int even=0,odd=0;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    for(int i=1;i<=num ;i++)
    {
        if(i%2==0)
        {
           even += i;
        }
        else
        {
            odd += i;
        }
    }
    cout<<"Even number sum is : "<<even<<endl;
    cout<<"Odd number sum is : "<<odd<<endl;
    return 0;
}