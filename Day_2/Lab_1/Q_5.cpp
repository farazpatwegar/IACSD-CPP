#include<iostream>
using namespace std;
int main()
{
    int num;
    cout<<"Enter a number : "<<endl;
    cin>>num;
    for(int i=1;i<num;i++)
    {
        if(num%i == 0)
        {
            cout<<"Factor : "<<i<<endl;
        }
    }
    return 0;
}