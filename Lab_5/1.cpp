// Animal Hierarchy:
// Problem Statement: Create a hierarchy of animal classes. Start with a base class Animal and then create derived classes like Mammal, Bird, and Fish. Each of these derived classes should have specific properties and methods related to their respective categories of animals.

#include<iostream>
using namespace std;

class Animal{
protected: string name;
private: string habitat;
public:
    Animal(){
        name=" ";
        habitat=" ";
        // cout<<"Inside parameterless constructor of Animal"<<endl;
    }
    Animal(string nm, string habt){
        name=nm;
        habitat=habt;
        // cout<<"Inside parameterized constructor of Animal"<<endl;
    }
    void display(){
        cout<<"Name: "<<name<<"   Habitat: "<<habitat<<endl;
    }
};

class Mammal: public Animal{
    float weight;
public:
    Mammal(){
        weight=0.0;
        cout<<"Inside parameterless constructor of Mammal"<<endl;
    }
    Mammal(string nm, string habt, float weight):Animal(nm,habt){
        this->weight=weight;
        cout<<"Inside parameterized constructor of Mammal"<<endl;
    }
    void Walk(){
        cout<<"The "<<name<<" can walk"<<endl;
    }
    void display(){
        Animal::display();
        cout<<"Weight of "<<name<<" is "<< weight<<" kg."<<endl;
    }
};

class Bird:public Animal{
    float wings_length; 
public:
    Bird(){
        wings_length= 0.0;
        cout<<"Inside parameterless constructor of Mammal"<<endl;
    }
    Bird(string nm, string habt,float wings_ln):Animal(nm,habt){
        wings_length=wings_ln;
        cout<<"Inside parameterized constructor of Mammal"<<endl;
    }
    void Fly(){
        cout<<"The "<<name<<" can fly."<<endl;
    }
    void display(){
        Animal::display();
        cout<<"Wings length of "<<name<<" is "<<wings_length<<" cm."<<endl;
    }
};

class Fish:public Animal{
    float size;
public:
    Fish(){
        size = 0.0;
        cout<<"Inside parameterless constructor of Fish"<<endl;
    }
    Fish(string nm, string habt,float size):Animal(nm,habt){
        this->size=size;
        cout<<"Inside parameterized constructor of Fish"<<endl;
    }
    void Swim(){
        cout<<"The "<<name<<" can Swin"<<endl;
    }
    void display(){
        Animal::display();
        cout<<"The size of "<<name<<" is "<<size<<" inches"<<endl;
    }
};


int main(){

    // Animal a;
    // Animal a1("Cow","Grass Land");
    // a1.display();

    // Mammal m;
    // Mammal m1("Horse","Land", 550);//weight = 500 to 600 kg of adult horse
    // m1.display();

    // Bird b;
    // Bird b1("Sparrow","Nests", 20.50);//wings length=19 to 25 cm
    // b1.display();

    Fish f;
    Fish f1("Dartfish","Shallow Waters", 3);
    f1.display();
    return 0;
}