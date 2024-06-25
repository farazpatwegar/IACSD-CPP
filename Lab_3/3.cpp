//3:. Write a  program to find sum of all even and odd numbers between 1 to n. 

#include<iostream>
using namespace std;

void even_sum(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(i%2==0){
			sum+=i;
		}
	}
	cout<<"\nThe sum of all even nos between 1 to "<<n<<" (including 1 and "<<n<<")is "<<sum<<endl;
}

void odd_sum(int n){
	int sum=0;
	for(int i=1;i<=n;i++){
		if(i%2){
			sum+=i;
		}
	}
	cout<<"\nThe sum of all odd nos between 1 to "<<n<<" (including 1 and "<<n<<")is "<<sum<<endl;
}


int main(){
	int n;
	cout<<"\nEnter a number: ";
	cin>>n;
	
	even_sum(n);
	cout<<"\n\n\n";
	odd_sum(n);
	
	return 0;
}
