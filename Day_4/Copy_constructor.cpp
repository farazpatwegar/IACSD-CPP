#include<iostream>
using namespace std;
class Person
{
   private:
           string name;
           int age;
   public:
         Person()
         {
            name="";
            age=0;
         }
         Person(string name ,int age)
         {
            this->name=name;
            this->age=age;
         }
         //------- Copy Constructor --------
         Person(const Person &obj)
         {
            name=obj.name;
            age=obj.age;
         }
         int setName(string name)
         {
            this->name=name;
         }
          void display() {
        cout << "Name: " << name << ", Age: " << age << endl;
    }
};
int main()
{
    Person Pobj("Shivanjali",21);
    Person Pobj2=Pobj;
    Pobj2.setName("ABC");
    
    // Displaying name and age of both objects
    cout << "Person 1: ";
    Pobj.display();
    cout << "Person 2: ";
    Pobj2.display();
    return 0;
}