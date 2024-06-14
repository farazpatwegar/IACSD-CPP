// 15: Write a  program to enter a number and print its reverse.

#include<iostream>
using namespace std;

int main(){
    
    int n,dig=0,res=0;
    cout<<"Enter no:";
    cin>>n;
    int tmp=n;
    for(int i=1;tmp>0;i++){
        dig=tmp%10;
        res=(res*10)+dig;
        tmp/=10;
    }
    cout<<"Original No:"<<n<<endl;
    cout<<"Reverse No:"<<res<<endl;
    return 0;
}