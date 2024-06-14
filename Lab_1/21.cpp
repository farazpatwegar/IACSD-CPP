// 21. Write a program, which accepts two integers and an operator as a character (+ - * / ), performs the 
// corresponding operation and displays the result.

#include<iostream>
using namespace std;

int main(){
    

    int num1, num2;
    char ch;
    cout<<"Enter any two numbers and any arithmetic character: \n";
    cin>>num1>>num2>>ch;
 switch(ch)
 {
     case '+':
        cout<<"The Addition of two numbers is: "<<(num1+num2);
        break;
    case '-':
        cout<<"The Subtraction of two numbers is:"<<(num1-num2);
        break;
    case '*':
        cout<<"The Multipliction of two numbers is:"<<(num1*num2);
        break;
    case '/':
    cout<<"The division of two numbers is:"<<(num1/num2);
        break;
    default:
        cout<<"Invalid entry \n";
 }
    
    return 0;
}