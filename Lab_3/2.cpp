//2: Write a program to Accept a number and display its sum of digits.:ex 568    5+6+8

#include<iostream>
using namespace std;

int main(){
	int n;
	cout<<"\nEnter a number: ";
	cin>>n;
	int i=0,sum=0;
	while(n>0){
		sum=sum+(n%10);
		n/=10;		
	}
	cout<<"\nSum of digits of number: "<<sum<<endl;
	
	
	return 0;
}
