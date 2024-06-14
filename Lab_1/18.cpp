
// 18:Write a program to find greatest of three numbers using nested if-else.
#include<iostream>
using namespace std;

int main(){
    int a,b,c,max=0;
    cout<<"Enter 3 nos:";
    cin>>a>>b>>c;

    if(a>b){
        if(a>c){
            max=a;
        }
    }
    else if(b>a){
        if(b>c){
            max=b;
        }
        else if(c>a && c>b){
            max=c;
        }
    }
    
    cout<<"The max of 3 nos:"<<max<<endl;

    return 0;
}