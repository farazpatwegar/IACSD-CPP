// 8. Write a  program to input angles of a triangle and check whether triangle is valid or not.

#include<iostream>
using namespace std;

int main(){

    int a,b,c;
    cout<<"Enter angles of a triangle: ";
    cin>>a>>b>>c;

    if((a+b+c)==180){
        cout<<"Valid triangle";
    }
    else{
        cout<<"Invalid triangle";
    }
    
    return 0;
}