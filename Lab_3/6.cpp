//6:Write a program to print following pattern.
//*
//* *
//* * *
//* * * *
//* * * * *


#include<iostream>
using namespace std;

int main(){
	int n=5;
	for(int i=0;i<n;i++)
	{
		for(int j=0;j<i+1;j++){
			cout<<"*"<<" ";
		}
		cout<<endl;
	}
	
	return 0;
}
