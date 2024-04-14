#include <iostream>
#include <iomanip> // For setprecision
using namespace std;

int main() {
   
    int choice;
    double totalAmount = 0.0;

    do
    {
        cout << "Welcome to Pizza Shop!" << endl;
    cout << "1. Margherita Pizza - 500" << endl;
    cout << "2. Pepperoni Pizza - 600" << endl;
    cout << "3. Hawaiian Pizza - 700" << endl;
    cout << "4. Vegetarian Pizza - 550" << endl;
    cout << "5. Exit" << endl;

    // Input choice from user
    cout << "Enter your choice (1-5): ";
    cin >> choice;
    switch (choice) {
        case 1:
            totalAmount += 500.0;
            break;
        case 2:
            totalAmount += 600.0;
            break;
        case 3:
            totalAmount += 700.0;
            break;
        case 4:
            totalAmount += 550.0;
            break;
        default:
            cout << "Invalid choice! Please enter a number from 1 to 5." << endl;
            break; 
    }
    } while (choice != 5);
    
   
    cout<<"---- Thank you for visiting ----"<<endl;
    cout << "Total amount: " << fixed << setprecision(2) << totalAmount << endl;

    return 0;
}
