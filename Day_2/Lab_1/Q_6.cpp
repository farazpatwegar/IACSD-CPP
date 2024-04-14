#include <iostream>
using namespace std;
int main()
{
    int num1,num2;
    cout<<"Enter two number : "<<endl;
    cin>>num1>>num2;
    int num3 = (num1>num2)?num1:num2;
    // cout<<num3<<endl;
    for(int i=num3;i>=1;i--)
    {
        if(num1%i == 0 && num2%i == 0)
        {
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}