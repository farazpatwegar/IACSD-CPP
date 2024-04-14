#include <iostream>
using namespace std;

int power(int x, int n) 
{
    int result = 1;

    for (int i = 0; i < n; ++i) {
        result *= x;
    }

    return result;
}

int main()
{
    int x, n;

    cout << "Enter the base (x): ";
    cin >> x;

    cout << "Enter the exponent (n): ";
    cin >> n;

    int result = power(x, n);

    cout << x << " raised to the power of " << n << " is: " << result << endl;

    return 0;
}