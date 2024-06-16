//2. Write a program to accept two integers x and n and compute x raised to n.

#include<iostream>
using namespace std;

int main(){
	int x=0,n=0,res=1;
	cout<<"\nEnter number: ";
	cin>>x;
	cout<<"\nEnter power of number: ";
	cin>>n;
	
	for(int i=1;i<=n; i++)
	{
		res=res*x;
	}
	
	cout<<"\nThe result: "<<res<<endl;
	return 0;
}
