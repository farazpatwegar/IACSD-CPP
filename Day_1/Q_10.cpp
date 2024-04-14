#include<iostream>
using namespace std;
int main()
{
    int m,n,ans=1;
    cout<<" Calculating m to power n "<<endl;
    cout<<"Enter the values of m and n : "<<endl;
    cin>>m>>n;
    for(int i=n;i>=1;i--)
    {
        ans *= m;
    }
    cout<<"ans : "<<ans<<endl;
    return 0;
}