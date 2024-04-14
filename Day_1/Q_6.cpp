#include <iostream>
using namespace std;
int main()
{
    int basic;
    float tax=0;
    cout << "Enter annual bassic salary : " << endl;
    cin >> basic;
    if(basic > 300000)
    {
        tax = 0.3;
        cout << "Income tax : " << tax * basic;
    }
    else if  (basic > 150000 && basic <= 300000)
    {
        tax = 0.2;
        cout << "Income tax : " << tax * basic;
    }
    else
    {
        tax = 0;
        cout << "Income tax : " << tax;
    }
    return 0;
}