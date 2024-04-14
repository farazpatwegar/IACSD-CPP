#include <iostream>
using namespace std;

class Point {
private:
    int x;
    int y;
public:
    // Default constructor
    Point() {
        x = 0;
        y = 0;
    }

    // Parameterized constructor
    Point(int xVal, int yVal) {
        x = xVal;
        y = yVal;
    }

    // Getter and setter for x
    int getX() {
        return x;
    }
    void setX(int newX) {
        x = newX;
    }

    // Getter and setter for y
    int getY() {
        return y;
    }
    void setY(int newY) {
        y = newY;
    }

    // Display function
    void display() {
        cout << "Point: (" << x << ", " << y << ")" << endl;
    }
};

int main() {
    // Creating an object of Point class using default constructor
    Point p1;
    cout << "Default Point Information:" << endl;
    p1.display();

    // Setting point coordinates using setter methods
    p1.setX(5);
    p1.setY(10);

    // Displaying point coordinates using getter methods
    cout << "\nPoint Information after setting using setters:" << endl;
    cout << "X-coordinate: " << p1.getX() << endl;
    cout << "Y-coordinate: " << p1.getY() << endl;

    // Creating an object of Point class using parameterized constructor
    Point p2(3, 7);
    cout << "\nParameterized Point Information:" << endl;
    p2.display();

    return 0;
}
