#include <iostream>
using namespace std;
int main()
{
    int num, num2 = 0;
    cout << "Enter integer value : " << endl;
    cin >> num;
    int num1 = num;
    while (num != 0)
    {
        int temp = num % 10;
        num = num / 10;
        num2 = num2 * 10 + temp;
    }
    // cout<<" --- num 2: "<<num2<<endl;
    if (num1 == num2)
    {
        cout << "Number is palindrome" << endl;
    }
    else
    {
        cout << "Number is not palindrome" << endl;
    }
    return 0;
}