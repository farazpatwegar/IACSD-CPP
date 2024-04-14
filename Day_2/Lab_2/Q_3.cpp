#include <iostream>
using namespace std;

int main() {
    int n, sum_even = 0, sum_odd = 0;

    // Accepting the value of n from the user
    cout << "Enter the value of n: ";
    cin >> n;

    // Finding sum of even and odd numbers between 1 to n
    for (int i = 1; i <= n; ++i) {
        if (i % 2 == 0) {
            sum_even += i; // Add even number to sum_even
        } else {
            sum_odd += i; // Add odd number to sum_odd
        }
    }

    // Displaying the sum of even and odd numbers
    cout << "Sum of even numbers between 1 to " << n << ": " << sum_even << endl;
    cout << "Sum of odd numbers between 1 to " << n << ": " << sum_odd << endl;

    return 0;
}
