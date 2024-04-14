#include <iostream>
using namespace std;
int main()
{
    char ch;
    cout << "Enter a lowercase character : " << endl;
    cin >> ch;
    if (ch == 'a' || ch == 'A' || ch == 'e' || ch == 'E' || ch == 'i' || ch == 'I' || ch == 'o' || ch == 'O' || ch == 'u' || ch == 'U')
    {
        cout << "Entered character is a vowel " << endl;
    }
    else
    {
        cout << "Entered character is not a vowel  " << endl;
    }
    return 0;
}