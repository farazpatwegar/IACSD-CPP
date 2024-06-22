//7. Write a menu driven program to do following operations :
//a) Compute area of circle
//b) Compute area of rectangle
//c) Compute area of triangle
//d) Exit
//Display menu, ask choice to the user, depending on choice accept the parameters and perform the 
//operation. Continue this process until user selects exit option.

#include<iostream>
#include<iomanip>
#include <bits/stdc++.h>
using namespace std;

void area_circle(){
	double area,r;
	cout<<"\nEnter radius of circle: ";
	cin>>r;
	area= 3.14 * r * r;
	cout<<"\nThe area of circle is: "<<fixed<<setprecision(6)<<area<<endl;
	
	
}

void area_rectangle(){
	float area,l,b;
	cout<<"\nEnter length of rectangle: ";
	cin>>l;
	cout<<"\nEnter breadth of rectangle: ";
	cin>>b;
	area= l * b;
	cout<<"\nThe area of rectangle is: "<<area<<endl;
	
}
void area_triangle(){
	float area,b,h;
	cout<<"\nEnter base of rectangle: ";
	cin>>b;
	cout<<"\nEnter height of rectangle: ";
	cin>>h;
	area= b * h * 0.5;
	cout<<"\nThe area of triangle is: "<<area<<endl;
}
int main(){
	int ch;
	
	do{
		cout<<"\n\n\nEnter your choice:\n 1.Area of circle\n2.Area of rectangle\n3.Area of triangle\n4.Exit\n\n\n";
		cin>>ch;
		
		switch(ch){
			case 1:area_circle();
				break;
			case 2:area_rectangle();
				break;
			case 3:area_triangle();
				break;
			case 4:return 0;
				break;
			default:cout<<"\nInvalid choice\n\n\n";
				break;
		}		
		
		
	}while(ch!=4);
	
	return 0;
}
