#include<iostream>
#include<iterator>
#include<vector>
using namespace std;
int main()
{
    vector<int> ar = {1,2,3,4,5};

    //declaring iterator to a vector
    vector<int>::iterator ptr;

    cout<<"The vector elements are : ";
    for(ptr = ar.begin(); ptr<ar.end();ptr++)
        cout<<*ptr<<" ";
    return 0;
}