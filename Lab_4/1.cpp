
// 1. Create a class Person with data members as name, age, city. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class.


#include<iostream>
using namespace std;

class Person{
    string name,city;
    int age;

public:
    Person(){
        name=" ";
        city=" ";
        age=0;
        cout<<"Inside default constructor"<<endl;
    }
    Person(string nm,string cty, int ag){
        name=nm;
        city=cty;
        age=ag;
        cout<<"Inside parameterized constructor"<<endl;
    }
    string getName(){
        return name;
    }
    string getCity(){
        return city;
    }
    int getAge(){
        return age;
    }

    void setName(string nm){
        name=nm;
    }
    void setCity(string cty){
        city=cty;
    }
    void setAge(int ag){
        age=ag;
    }

    void display(){
        cout<<"Name: "<<name<<"   city: "<<city<<"   age: "<<age<<endl;
    }
};
int main(){
    // Person p;
    Person p("Utkarsha","Pune",22);
    p.display();

cout<<"\n----------using settor methods--------";
    p.setName("Anushka");
    p.setCity("Sangli");
    p.setAge(23);

    cout<<endl;
    p.display();

cout<<"\n---------------Using gettor methods---------------\n";

    cout<<p.getName()<<endl;
    cout<<p.getCity()<<endl;
    cout<<p.getAge()<<endl;

    cout<<endl;
    p.display();

    

    return 0;
}