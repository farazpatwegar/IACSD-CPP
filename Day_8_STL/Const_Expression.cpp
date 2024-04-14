#include<iostream>
using namespace std;

template<typename T> void printInfo(const T &value)
            {
                if constexpr(is_integral<T>)
                {
                    cout<<"--- Integer ---"<<endl;
                }
                else
                {
                    cout<<"--- Non-Integer ---"<<endl;
                }
            }


int main()
{
    // myClass obj;
    // obj.
    printInfo(10);
    return 0;
}