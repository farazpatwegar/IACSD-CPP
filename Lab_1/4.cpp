// 4. Write a program to accept an integer and check if it is even or odd.

#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no: ";
    cin>>n;
    if(n%2){
        cout<<"\nOdd";
    }else{
        cout<<"\nEven";
    }
    return 0;
}