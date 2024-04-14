#include <iostream>
using namespace std;

int main() {
    char ch;
    int n;
    cout << "Enter a character: ";
    cin >> ch;
    cout << "Enter the number of characters to display: ";
    cin >> n;
    cout << "Characters following '" << ch << "': ";
    for (int i = 0; i < n; ++i) 
    {
        cout <<(char)(ch + i + 1);
    }
    cout << endl;
    return 0;
}
