// //1:Write a program that accepts numbers continuously as long as the number is positive and prints the 
// sum of the given numbers. 
//loops
#include<iostream>
using namespace std;

int main(){
    int no;
    int sum=0;
    do{
        cout<<"\nEnter number: ";
        cin>>no;
        if(no>0)
        	sum+=no;
    }while(no>0);
    cout<<"\nThe sum of numbers is: "<<sum<<endl;
    
    return 0;
}
