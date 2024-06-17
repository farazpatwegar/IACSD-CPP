//5. Write a program to calculate factors of a given number.

#include<iostream>
using namespace std;

int main(){
	int n,i=1,cnt=0;
	cout<<"\nEnter a number: ";
	cin>>n;
	
	cout<<"\nThe factors of the number "<<n<< " are ";
	while(i<=n){
//		cout<<"inside loop"<<endl;
		if(n%i==0){
//			cout<<"inside if"<<endl;
			cout<<i<<" ";
			cnt++;
		}
		i++;
	}
	cout<<"\nThe total number of factors of the number "<<n<< " are "<<cnt<<endl;
	return 0;
}
