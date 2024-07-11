// Person and Student Inheritance:
// Problem Statement: Model a system for handling individuals and students within an educational institution. Create a base class Person with attributes like name and age. Derive a Student class with additional attributes like student ID and GPA, inheriting the common attributes from the Person class.


#include<iostream>
#include<string.h>
using namespace std;
class Person{
    string name;
    int age;
public:
    Person(){
        name="---";
        age=0;
        cout<<"Person default ctor"<<endl;
    }
    Person(string nm,int ag){
        name=nm;
        age=ag;
        cout<<"Person parameterized ctor"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<"  Age: "<<age<<endl;
    }
};
class Student:public Person{
    int id;
    float CGPA;
public:
    Student(){
        id=0;
        CGPA=0.0;
        
        cout<<"Student default ctor"<<endl;
    }
    Student(string nm,int ag, int id, float cgpa):Person(nm,ag){
        this->id=id;
        CGPA=cgpa;
        cout<<"Student Parameterized fault ctor"<<endl;
    }
    void display(){
        Person::display();
        cout<<"Student ID: "<<id<<"  Student CGPA: "<<CGPA<<endl;
    }
};


int main(){
    Person p;
    p.display();

    Person p1("Ram",20);
    p1.display();


    Student s;
    s.display();

    Student s1("Sham",21,101,9.1);
    s1.display();
    
    return 0;
}