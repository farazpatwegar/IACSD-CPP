#include <iostream>
#include <cmath>
using namespace std;

// Function to compute the area of a circle
double computeCircleArea(double radius) {
    return M_PI * radius * radius;
}

// Function to compute the area of a rectangle
double computeRectangleArea(double length, double width) {
    return length * width;
}

// Function to compute the area of a triangle
double computeTriangleArea(double base, double height) {
    return 0.5 * base * height;
}

int main() {
    int choice;
    
    do {
        cout << "------ Menu ------" << endl;
        cout << "1. Compute area of circle" << endl;
        cout << "2. Compute area of rectangle" << endl;
        cout << "3. Compute area of triangle" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice (1-4): ";
        cin >> choice;
        
        switch(choice) {
            case 1: {
                double radius;
                cout << "Enter the radius of the circle: ";
                cin >> radius;
                cout << "Area of the circle: " << computeCircleArea(radius) << endl;
                break;
            }
            case 2: {
                double length, width;
                cout << "Enter the length of the rectangle: ";
                cin >> length;
                cout << "Enter the width of the rectangle: ";
                cin >> width;
                cout << "Area of the rectangle: " << computeRectangleArea(length, width) << endl;
                break;
            }
            case 3: {
                double base, height;
                cout << "Enter the base of the triangle: ";
                cin >> base;
                cout << "Enter the height of the triangle: ";
                cin >> height;
                cout << "Area of the triangle: " << computeTriangleArea(base, height) << endl;
                break;
            }
            case 4:
                cout << "Exiting program..." << endl;
                break;
            default:
                cout << "Invalid choice! Please select a valid option." << endl;
        }
        
    } while(choice != 4);
    
    return 0;
}
