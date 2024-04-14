#include <iostream>
using namespace std;

class Student {
private:
    int rollno;
    float marks1, marks2, marks3;

public:
    void acceptInfo() {
        cout << "Enter Roll Number: ";
        cin >> rollno;
        cout << "Enter Marks for Subject 1: ";
        cin >> marks1;
        cout << "Enter Marks for Subject 2: ";
        cin >> marks2;
        cout << "Enter Marks for Subject 3: ";
        cin >> marks3;
    }

    void display() {
        cout << "Roll Number: " << rollno << endl;
        cout << "Marks for Subject 1: " << marks1 << endl;
        cout << "Marks for Subject 2: " << marks2 << endl;
        cout << "Marks for Subject 3: " << marks3 << endl;
    }

    void calculateTotal() {
        float total = marks1 + marks2 + marks3;
        cout << "Total Marks: " << total << endl;
    }

    void calculatePercentage() {
        float percentage = (marks1 + marks2 + marks3) / 3.0;
        cout << "Percentage: " << percentage << "%" << endl;
    }

    void calculateGrade() {
        float percentage = (marks1 + marks2 + marks3) / 3.0;
        if (percentage >= 90)
            cout << "Grade: A" << endl;
        else if (percentage >= 80)
            cout << "Grade: B" << endl;
        else if (percentage >= 70)
            cout << "Grade: C" << endl;
        else if (percentage >= 60)
            cout << "Grade: D" << endl;
        else
            cout << "Grade: F" << endl;
    }
};

int main() {
    Student s;

    // Accepting data
    s.acceptInfo();

    // Displaying data
    cout << "\nStudent Information:" << endl;
    s.display();

    // Calculating and displaying total, percentage, and grade
    s.calculateTotal();
    s.calculatePercentage();
    s.calculateGrade();

    return 0;
}
