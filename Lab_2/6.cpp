//6. Accept two numbers and calculate GCD of them.

#include<iostream>
using namespace std;

int main(){
	int a,b,i=1;
	cout<<"\nEnter two numbers: ";
	cin>>a>>b;
	int gcd=0;
	
	while(i<=a || i<=b){
		if(a%i==0 && b%i==0){
			gcd=i;
			
		}
		i++;
	}
	cout<<"\n The GCD of "<<a<< " and "<<b<<" is "<<gcd<<endl;
	
	return 0;
}
