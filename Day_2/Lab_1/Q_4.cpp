#include<iostream>
using namespace std;
int main()
{
    int num;
    int fact=1;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    for(int i=1;i<=num;i++)
    {
       fact *= i;
    }
    cout<<"factorial : "<<fact<<endl;
    return 0;
}