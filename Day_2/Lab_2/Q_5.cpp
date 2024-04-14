#include <iostream>
using namespace std;

int main() {
    int size;

    // Accepting the size of the array from the user
    cout << "Enter the size of the array: ";
    cin >> size;

    if (size <= 0) {
        cout << "Invalid size!";
        return 1;
    }

    int arr[size];

    // Accepting elements of the array from the user
    cout << "Enter " << size << " integers for the array:\n";
    for (int i = 0; i < size; ++i) {
        cout << "Enter integer " << i + 1 << ": ";
        cin >> arr[i];
    }

    int num;
    // Accepting the number to search from the user
    cout << "Enter the number to search in the array: ";
    cin >> num;

    // Searching for the number in the array
    bool found = false;
    for (int i = 0; i < size; ++i) {
        if (arr[i] == num) {
            found = true;
            break;
        }
    }

    // Printing the result
    if (found) {
        cout << num << " is present in the array." << endl;
    } else {
        cout << num << " is not present in the array." << endl;
    }

    return 0;
}
