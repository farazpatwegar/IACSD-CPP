
// 5. Write a program to accept a number and check if it is divisible by 5 and 7.
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter no:";
    cin>>n;
    if(n%5==0 && n%7==0){
        cout<<"The no "<<n<<" is divisible by both 5 and 7"<<endl;
    }
    else if(n%5==0){
        cout<<"The no "<<n<<" is divisible by 5 and not by 7"<<endl;
    }
    else if(n%7==0){
        cout<<"The no "<<n<<" is divisible by 7 and not by 5"<<endl;
    }
    else{
        cout<<"The no "<<n<<" is not divisible by both 7 and 5"<<endl;
    }
    
    return 0;
}