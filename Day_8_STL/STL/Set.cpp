#include<iostream>
#include<set>
#include<algorithm>
using namespace std;
int main()
{
    set<int> inset = {1,4,2,6,9,7,3,5,10,8};
    int choice;
    int num;
    do
    {
        cout<<"1.add \n 2.remove \n 3.show \n 4.reverse 5.exit"<<endl;
    cin>>choice;

    switch(choice)
    {
        case 1:
              cout<<"Enter a element to add : "<<endl;
              cin>>num;
              inset.insert(num);
              break;
        case 2:
              
    }
    }while(choice!=5);
    
   
    return 0;
}