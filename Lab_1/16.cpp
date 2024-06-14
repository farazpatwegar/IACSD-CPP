
// 16:Write a  program to print all Prime numbers between 1 to n.

#include<iostream>
using namespace std;
int check_prime(int n){
    for(int i=2;i<n;i++){
        if(n%i==0){
            return 0;
        }
    }
    return 1;
}
int main(){
    int n;
    cout<<"Enter no:";
    cin>>n;

    int j=2;
    while(j<n){
        if(check_prime(j)){
            cout<<j<<" ";
        }
        j++;
    }
    
    return 0;
}