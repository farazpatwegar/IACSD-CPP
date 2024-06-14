// 6. Write a program, which accepts annual basic salary of an employee and calculates and displays the 
// Income tax as per the following rules. 
// Basic: < 1, 50,000 Tax = 0
//  1, 50,000 to 3,00,000 Tax = 20% 
//  > 3,00,000 Tax = 30% 

#include<iostream>
using namespace std;

int main(){
    int basic_sal=0;
    float tax;
    cout<<"Enter basic salary :";
    cin>>basic_sal;

    if(basic_sal < 150000){
        cout<<"The tax is zero percent";
    }
    else if(basic_sal>=150000 && basic_sal<=300000){
        tax= basic_sal * 20/100;
        cout<<"The tax is 20% i.e. "<<tax<<" rupees"<<endl;
    }
    else if(basic_sal>300000 ){
        tax= basic_sal * 30/100;
        cout<<"The tax is 30% i.e. "<<tax<<" rupees"<<endl;
    }
    return 0;
}