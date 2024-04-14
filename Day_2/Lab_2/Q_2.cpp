#include <iostream>
using namespace std;

int main() {
    int number, sum = 0, digit;

    // Accepting the number from the user
    cout << "Enter a number: ";
    cin >> number;

    // Calculating the sum of digits
    while (number > 0) {
        digit = number % 10;
        sum += digit;
        number /= 10;
    }

    // Displaying the sum of digits
    cout << "Sum of digits: " << sum << endl;

    return 0;
}
