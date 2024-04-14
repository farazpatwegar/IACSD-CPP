#include<iostream>
using namespace std;
class Student
{
   private: int rollno,marks1,marks2,marks3;
   public: 
          void acceptInfo()
          {
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
            cout << "\n---Student Information:---" << endl;
            cout << "Roll Number: " << rollno << endl;
            cout << "Marks for Subject 1: " << marks1 << endl;
            cout << "Marks for Subject 2: " << marks2 << endl;
            cout << "Marks for Subject 3: " << marks3 << endl;
          }

           // Function to calculate total marks
           float calculateTotal() {
                return marks1 + marks2 + marks3;
            }

            // Function to calculate percentage
            float calculatePercentage() {
             return (calculateTotal() / 3.0);
            }

            // Function to determine grade based on percentage
            char calculateGrade() {
            float percentage = calculatePercentage();
            if (percentage >= 90)
            return 'A';
            else if (percentage >= 80)
            return 'B';
            else if (percentage >= 70)
            return 'C';
            else if (percentage >= 60)
            return 'D';
            else if (percentage >= 50)
            return 'E';
            else
            return 'F';
        }
};
int main()
{
    Student obj;
    obj.acceptInfo();
    obj.display();

    // Calculate total marks, percentage, and grade
    float total = obj.calculateTotal();
    float percentage = obj.calculatePercentage();
    char grade = obj.calculateGrade();

    // Display total marks, percentage, and grade
    cout << "\nTotal Marks: " << total << endl;
    cout << "Percentage: " << percentage << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}