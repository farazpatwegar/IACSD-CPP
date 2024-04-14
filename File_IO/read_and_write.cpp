#include <iostream>
#include <fstream>
#include <string.h>
using namespace std;
class input
{
public:
    int id;
    int rollNo;
    string name;
    input()
    {
        id = 1;
        rollNo = 10;
        name = "Shivanjali";
    }
    input(int id, int rollNo, string name)
    {
        this->id = id;
        this->rollNo = rollNo;
        this->name = name;
    }
    void write()
    {
        ofstream fout;
        fout.open("StudentData", ios::app);
        if (fout.is_open())
        {
            cout << "Enter Student id : ";
            cin >> id;
            cout << "Enter Student roll number : ";
            cin >> rollNo;
            cin.ignore();
            cout << "Enter Student name : ";
            getline(cin, name);    //reads the entire line, including any spaces
            //cin>>name;  ---->  stops reading at the space character
            fout << "Your Entered data : " << endl;
            fout << "ID: " << id << " Roll No: " << rollNo << " Name: " << name << endl;
            fout << "------ Data Entered Succesfully --------" << endl;
        }
        else
        {
            cout << "--- Error in Writing ---" << endl;
        }
        fout.close();
    }
    // void read()
    // {
    //     ifstream fin;
    //     fin.open("StudentData.txt");
    //     char ch;
    //     if (fin.is_open())
    //     {
    //         ch=fin.get();
    //         while (! fin.eof())
    //         {
    //             cout << ch;
    //             ch = fin.get();
    //         }
    //         fin.close();
    //     }
    //     else
    //     {
    //         cout << "--- Error in reading ---" << endl;
    //     }
    // }
    void read()
    {
        ifstream fin("StudentData",ios::in);
        string s;
        if (fin.is_open())
        {
            while (getline(fin, s))  //read each line from the file
            {
                cout <<" "<<s<< endl;
            }
            fin.close();
        }
        else
        {
            cout << "--- Error in reading ---" << endl;
        }
    }
};
int main()
{
    input obj;
    int choice;
    do
    {
        cout << "\n\nChoose an option:" << endl;
        cout << "1. Fill data" << endl;
        cout << "2. Read data" << endl;
        cout << "3. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            obj.write();
            break;
        case 2:
            obj.read();
            break;
        case 3:
            cout << "Exit" << endl;
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 3);
    return 0;
}