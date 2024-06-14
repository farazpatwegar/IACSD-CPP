// 13:Check whether the number is palindrome or not?

#include<iostream>
using namespace std;

int main(){
    int n,dig=0,res=0;
    cout<<"Enter number:";
    cin>>n;

    int tmp=n;
    for(int i=1;tmp>0;i++){
        dig=tmp%10;
        res=(res*10)+dig;
        tmp/=10;
    }
    if(n==res){
        cout<<"Yes";
    }
    else{
        cout<<"NO";
    }
    
    return 0;
}