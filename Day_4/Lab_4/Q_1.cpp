#include <iostream>
using namespace std;

class Animal {
public:
    string name;
    string color;

    Animal() {
        name = "animal";
        color = "no color";
    }

    Animal(string name, string color) {
        this->name = name;
        this->color = color;
    }

    virtual void display() {
        cout << "Name: " << name << ", Color: " << color << endl;
    }
};

class Mammal : public Animal {
public:
    string type;

    Mammal() {
        type = "Mammal";
    }

    Mammal(string name, string color, string type) : Animal(name, color) {
        this->type = type;
    }

    void display() override {
        Animal::display();
        cout << "Type: " << type << endl;
    }
};

class Bird : public Animal {
public:
    string type;

    Bird() {
        type = "Bird";
    }

    Bird(string name, string color, string type) : Animal(name, color) {
        this->type = type;
    }

    void display() override {
        Animal::display();
        cout << "Type: " << type << endl;
    }
};

class Fish : public Animal {
public:
    string type;

    Fish() {
        type = "Fish";
    }

    Fish(string name, string color, string type) : Animal(name, color) {
        this->type = type;
    }

    void display() override {
        Animal::display();
        cout << "Type: " << type << endl;
    }
};

int main() {
    Mammal lion("Leo", "Yellow", "Lion");
    Bird sparrow("Sparrow", "Brown", "House Sparrow");
    Fish goldfish("Goldie", "Orange", "Freshwater");

    lion.display();
    sparrow.display();
    goldfish.display();

    return 0;
}
