#include <iostream>
using namespace std;
class BankAccount
{
public:
    int accno;
    string name;
    double balance;
    BankAccount()
    {
        accno = 0;
        name = "No Name";
        balance = 0.0;
    }
    BankAccount(int accno, string name, double balance)
    {
        this->accno = accno;
        this->name = name;
        this->balance = balance;
    }

    // Business logic methods
    void withdraw(double amt)
    {
        if (amt > balance)
        {
            cout << "Insufficient balance!" << endl;
        }
        else
        {
            balance -= amt;
            cout << "Remaining balance: " << balance << endl;
        }
    }

    void deposit(double amt)
    {
        balance += amt;
        cout << "Total balance: " << balance << endl;
    }

};

int main()
{
    // Creating an object of BankAccount
    BankAccount acc(123456, "ABCDEFG", 1000.0);

    // Testing withdraw and deposit methods
    cout << "Initial balance: " << acc.balance << endl;
    acc.withdraw(500.0);
    acc.deposit(200.0);

    return 0;
}