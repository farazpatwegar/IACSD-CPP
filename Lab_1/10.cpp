//10:Write a program to find m to the power n. m=3 and n=4 so 3*3*3*3

#include<iostream>
using namespace std;

int main(){
    int m,n,res=1;
    cout<<"Enter m and power of m: ";
    cin>>m>>n;

    while(n>0){
        res=res*m;
        n--;
    }
    cout<<"The result: "<<res<<endl;
    
    return 0;
}