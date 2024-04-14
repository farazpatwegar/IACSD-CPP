#include<iostream>
using namespace std;
template<class T> auto sum(args...args)
{
    return (...+args);
}
int main()
{
    int addition = sum(1,2,3,4,5,6,7,8,9);
    cout<<"Addition : "<<addition<<endl;
    return 0;
}