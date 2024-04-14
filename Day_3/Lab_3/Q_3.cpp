#include <iostream>
using namespace std;

class Date {
private:
    int dd, mm, yy;

public:
    // Default constructor
    Date()
    {
        dd=12;
        mm=8;
        yy=2002;
    }

    // Parameterized constructor
    Date(int day, int month, int year) 
    {
       dd=day;
       mm=month;
       yy=year;
    }
   
   int getDay()
   {
    return dd;
   }
    void setDay(int day)
    {
        dd=day;
    }
   int getMonth()
   {
    return mm;
   }

    void setMonth(int month)
    {
        mm=month;
    }

   int getYear()
   {
    return yy;
   }
   void setYear(int year)
   {
     yy = year;
   }
    void display() 
    {
        cout << "Date: " << dd << "/" << mm << "/" << yy << endl;
    }
};

int main() {
    // Creating an object of Date class using default constructor
    Date date1;
    cout << "Default Date:" << endl;
    date1.display();

    // Setting date using setter methods
    date1.setDay(17);
    date1.setMonth(3);
    date1.setYear(2024);

    // Displaying date using getter methods
    cout << "\nDate after setting using setters:" << endl;
    cout << "Day: " << date1.getDay() << endl;
    cout << "Month: " << date1.getMonth() << endl;
    cout << "Year: " << date1.getYear() << endl;

    // Creating an object of Date class using parameterized constructor
    Date date2(25, 12, 2025);
    cout << "\nParameterized Date:" << endl;
    date2.display();

    return 0;
}
