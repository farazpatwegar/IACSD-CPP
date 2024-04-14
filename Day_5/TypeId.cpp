// typeid is an operator in C++. 

// It is used where the dynamic type or runtime type information of an object is needed.
// It is included in the <typeinfo> library. Hence inorder to use typeid, 
// this library should be included in the program.
// The typeid expression is an lvalue expression.

#include <iostream> 
#include <typeinfo> 
using namespace std;
int main()
{
    int i,j;
    char c;
    if(typeid(i)==typeid(j))
    {
        cout << "i and j are of"<< " similar type" << endl; 
    }
    else
    {
        cout<<"i and j are not similar"<<endl;
    }
    if(typeid(i)==typeid(c))
    {
        cout << "i and c are of"<< " similar type" << endl; 
    }
    else
    {
        cout<<" i and c are not similar"<<endl;
    }
    return 0;
}