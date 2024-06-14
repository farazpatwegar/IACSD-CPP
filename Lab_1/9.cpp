// 9:Write a program to find factorial of a given number. ex:no5  fact=5*4*3*2*1=120
#include<iostream>
using namespace std;

int main(){
    int fact=1,i=1;
    int n,tmp;
    cout<<"Enter number: ";
    cin>>n;
    tmp=n;

    while(n>0){
        fact=fact*i;
        i++;
        n--;
    }
    cout<<"The factorial of number "<<tmp<<" is "<<fact<<endl;
    
    return 0;
}