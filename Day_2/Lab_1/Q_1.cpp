#include <iostream>
using namespace std;
int main()
{
    int num;
    int sum = 0;
    do
    {
        cout << "Enter a number : " << endl;
        cin >> num;
        if (num >= 0)
        {
            sum += num;
        }

    } while (num >= 0);
    cout << "Sum of the numbers: " << sum << endl;
    return 0;
}