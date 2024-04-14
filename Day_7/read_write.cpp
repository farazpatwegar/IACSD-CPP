#include <iostream>
#include <fstream>
using namespace std;
class Base
{
public:
    int id;
    string name;

    Base()
    {
        id = 0;
        name = "No Name";
    }
    Base(int id, string name)
    {
        this->id = id;
        this->name = name;
    }
    void display()
    {
        cout << "Id : " << id << endl;
        cout << "Name : " << name << endl;
    }
    void write()
    {
        ofstream fout("file.txt", ios::out | ios::app);
        if (fout.is_open())
        {
            cout << "Enter id : " << endl;
            cin >> id;
            cout << "Enter name : " << endl;
            cin >> name;
            fout << "Your Entered data : " << endl;
            fout << id << " " << name << endl;
            fout.close();
        }
        else
        {
            cout << " File is not opening " << endl;
        }
    }
};
class Derived : public Base
{
public:
    string department;
    Derived()
    {
        department = " No Department";
    }
    Derived(int id, string name, string department) : Base(id, name)
    {
        this->department = department;
    }
    void display()
    {
        cout << "Department : " << department << endl;
    }
    void write()
    {
        Base::write();
        ofstream fout("file.txt", ios::out | ios::app);
        if (fout.is_open())
        {
            cout << "Enter department : " << endl;
            cin >> department;

            fout << "Your Entered data : " << endl;
            fout << "Department : " << department << endl;
            fout.close();
        }
        else
        {
            cout << " File is not opening " << endl;
        }
    }
    void read()
    {
        ifstream fin("file.txt");
        string s;
        if (fin.is_open())
        {
            while (getline(fin, s)) // read each line from the file
            {
                cout << " " << s << endl;
            }
            fin.close();
        }
        else
        {
            cout << "--- Error in reading ---" << endl;
        }
    }

    void modify(int modifyid)
    {
        ifstream fin("file.txt");
        ofstream fout("temp.txt");
        int tempId;
        string tempName, tempDepartment;
        bool found = false;
        if (fin.is_open() && fout.is_open())
        {
            // Reset file cursor to the beginning of the file
            fin.seekg(0);

            while (fin >> tempId >> tempName >> tempDepartment)
            {
                if (tempId == modifyid)
                {
                    found = true;
                    cout << "Enter new name: ";
                    cin >> tempName;
                    cout << "Enter new department: ";
                    cin >> tempDepartment;
                    fout << modifyid << " " << tempName << " " << tempDepartment << endl;
                    cout << "Record modified successfully!" << endl;
                }
                else
                {
                    fout << tempId << " " << tempName << " " << tempDepartment << endl;
                }
            }
            fin.close();
            fout.close();

            if (!found)
            {
                cout << "Employee with ID " << modifyid << " not found." << endl;
                remove("temp.txt");
            }
            else
            {
                remove("file.txt");
                rename("temp.txt", "file.txt");
            }
        }
        else
        {
            cout << "Error in opening file." << endl;
        }
    }
};
int main()
{
    Base bobj;
    Derived dobj;
    int choice;
    do
    {
        cout << "\n\nChoose an option:" << endl;
        cout << "1. Fill data" << endl;
        cout << "2. Read data" << endl;
        cout << "3. Modify data" << endl;
        cout << "4. Exit" << endl;
        cout << "Enter your choice: ";
        cin >> choice;
        switch (choice)
        {
        case 1:
            dobj.write();
            break;
        case 2:
            dobj.read();
            break;
        case 3:
            int modifyid;
            cout << "Enter employee id to modify data : " << endl;
            cin >> modifyid;
            dobj.modify(modifyid);
            break;
        default:
            cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);
    return 0;
}