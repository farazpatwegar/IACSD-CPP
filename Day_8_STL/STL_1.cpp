#include<iostream>
using namespace std;

template <typename T > 
T max(T &a, T &b)
{
   return (a>b)?a:b;
}

int main()
{
    cout<<max(10,20)<<endl;
    cout<<max('A','R')<<endl;
    cout<<max("abc","xyz")<<endl;
    cout<<max(12.345,54.987);
    return 0;
}