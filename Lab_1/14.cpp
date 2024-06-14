
// 14:Write a  program to find sum of all even and odd numbers between 1 to n. 
#include<iostream>
using namespace std;

void even(int n){
    int even_sum=0;
    int i=1;
    while(i<=n){
        if(i%2==0){
            even_sum+=i;
        }
        i++;
    }
    cout<<"Even sum: "<<even_sum<<endl;
}


void odd(int n){
    int odd_sum=0;
    int i=1;
    while(i<=n){
        if(i%2){
            odd_sum+=i;
        }
        i++;
    }
    cout<<"Odd sum: "<<odd_sum<<endl;
}
int main(){
    int n;
    cout<<"Enter number:";
    cin>>n;

    even(n);
    odd(n);

    
    return 0;
}