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
    cout<<"Reverse number is : "<<num2<<endl;
    
    return 0;
}