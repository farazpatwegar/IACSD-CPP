// 11:Check if number is a prime number or not
#include<iostream>
using namespace std;

int check_prime(int n){
    int i=2;
    while(i<n){
        if(n%i==0){
            return 0;
        }
        i++;
    }
    return 1;
}
int main(){
    
    int n;
    cout<<"Enter number: ";
    cin>>n;
    if(n==1){cout<<"not Prime";}
    else if(n==2){cout<<"Prime";}

    else if(check_prime(n)){
        cout<<"Prime"<<endl;
    }
    else{
        cout<<"Not Prime"<<endl;
    }
    return 0;
}