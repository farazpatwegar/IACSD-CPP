//4. Write a program to calculate factorial of a number. 

#include<iostream>
using namespace std;

int main(){
	int fact=1, n=0;
	cout<<"\nEnter number: ";
	cin>>n;
	
	for(int i=1;i<=n;i++){
		fact=fact*i;
	}
	cout<<"\nThe fact of number "<<n<<" is "<<fact<<endl;
	
	return 0;
}
