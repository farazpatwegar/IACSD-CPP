//4:. Write a  program to print all Prime numbers between 1 to n. 

#include<iostream>
using namespace std;

int is_prime(int a){
	for(int i=2; i<a; i++){
		if(a%i==0)
			return 0;
	}
}

int main(){
	int n;
	cout<<"\nEnter number: ";
	cin>>n;
	int i=2;
	while(i<n){
		if(is_prime(i)){
			cout<<i<<" ";
		}
		i++;
	}
	
	
	return 0;
}
