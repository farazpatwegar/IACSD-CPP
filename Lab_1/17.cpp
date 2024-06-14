
// 17:Write a program to check entered number is Armstrong number or not.
#include<iostream>
using namespace std;

int main(){
    int n,dig,res=0;
    cout<<"Enter a number:";
    cin>>n;

    int tmp=n;

    for(int i=0;tmp>0;i++){
        dig=tmp%10;
        res=res+(dig*dig*dig);
        tmp/=10;
    }
    cout<<res<<endl;
    if(res==n){
        cout<<"Armstrong"<<endl;
    }
    else{
        cout<<"No an armstrong "<<endl;
    }
    return 0;
}