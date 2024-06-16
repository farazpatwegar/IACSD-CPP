//3. Write a program to accept a character, an integer n and display the next n characters.

#include<iostream>
using namespace std;

int main(){
	int n;
	char ch;
	int i=1;
	
	cout<<"\nEnter a char (from A or from a): ";
	cin>>ch;
	
	cout<<"\nEnter the number of characters: ";
	cin>>n;
	
	if(ch+n<='Z' || ch+n<='z'){
//		cout<<"\ninside if"<<endl;
	
	
		while(n!=0){
			cout<<(char)(ch+i)<<" ";
			i++;
			n--;
		}
	}
	else{
		cout<<"\nInvalid number of characters."<<endl;
	}
	
	return 0;
}
