#include<iostream>
using namespace std;

template<class T> void swapValues(T &a , T &b)
{
    T temp = a;
    a = b;
    b = temp;
    cout<<"a : "<<a<<"  b : "<<b<<endl;
}
int main()
{
    int a=10,b=20;
    string s1="abc";
    string s2="xyz";
    swapValues(a,b);
    swapValues(s1,s2);
    return 0;
}