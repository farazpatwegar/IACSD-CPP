// Bank Account Inheritance:
// Problem Statement: Design a system for managing bank accounts. Create a base class BankAccount with attributes like account number and balance. Derive classes like SavingsAccount and CheckingAccount, each with specialized methods like withdraw() and calculate_interest().


#include<iostream>
using namespace std;


class BankAccount{
    long long actNum;
protected:    double balance;
public:
    BankAccount(){
        actNum=0;
        balance=0.0;
        cout<<"BankAccount default ctor"<<endl;
    }
    BankAccount(long long actNum, double balance){
        this->actNum=actNum;
        this->balance=balance;
        cout<<"BankAccount Parameterized  ctor"<<endl;

    }

     void display(){
        cout<<"BankAccount Number: "<<actNum<<"  Balance: "<<balance<<endl;
    }

};

class SavingsAccount: public BankAccount{
public: 
    SavingsAccount(){
        cout<<"SavingsAccount default ctor"<<endl;
    }
    SavingsAccount(long long actNum, double balance):BankAccount(actNum,balance){
        
        cout<<"SavingsAccount Parameterized  ctor"<<endl;
    }
    void withdraw(long long amount){
        cout<<"The current balance is:"<<balance<<endl;
        if(amount < balance){
            balance=balance-amount;
            cout<<"Withdrawal of "<<amount<<" is done successfully."<<endl;
            cout<<"The new balance is: "<<balance<<endl;
            
        }
        else{
            cout<<"Insufficint balance to withdraw"<<endl;
        }
    }
};
class CheckingAccount: public BankAccount{
    int interest;
    int interest_amount;
    int AccType;
public: 
    CheckingAccount(){
        interest=0;
        AccType=1;
        cout<<"CheckingAccount default ctor"<<endl;
    }
    CheckingAccount(long long actNum, double balance,int interest,int AccType):BankAccount(actNum,balance){
        
        this->AccType=AccType;
        this->interest=interest;
        cout<<"CheckingAccount Parameterized  ctor"<<endl;
    }
    void calInterest(){ 
        interest_amount=   balance * interest / 100 ;
        cout<<"The interest on account balance of "<<balance<< " is "<<interest_amount<<" rupees."<<endl;        
    }
    void checkAccType(){
        if(AccType==1){
            cout<<"The account type is savings."<<endl;
        }
        else if(AccType==0){
            cout<<"The account type is current."<<endl;
        }
    }
};

int main(){
    
    // BankAccount ac;
    // ac.display();
    // BankAccount ac1(123456789,50000.0);
    // ac1.display();

    // SavingsAccount s;
    // s.display();
    // s.withdraw(20000);
    // SavingsAccount s1(123456789,50000.0);
    // s1.display();
    // s1.withdraw(25000);


    // CheckingAccount c;
    // c.display();
    // c.checkAccType();//savings by default
    // c.calInterest();
    CheckingAccount c1(123456789,50000, 12,1);//enter 1 for savings account and 2 for current account
    c1.display();
    c1.checkAccType();
    c1.calInterest();
    return 0;
}