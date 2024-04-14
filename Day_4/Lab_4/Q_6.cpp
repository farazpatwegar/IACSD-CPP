#include <iostream>
using namespace std;

// Base class Shape
class Shape {
public:
    virtual double area() const = 0;
    virtual double perimeter() const = 0;
};

// Derived class Circle
class Circle : public Shape {
private:
    double radius;
public:
    Circle(double r) : radius(r) {}

    double area() const override {
        return 3.14 * radius * radius;
    }

    double perimeter() const override {
        return 2 * 3.14 * radius;
    }
};

// Derived class Rectangle
class Rectangle : public Shape {
private:
    double length;
    double breadth;
public:
    Rectangle(double l, double b) : length(l), breadth(b) {}

    double area() const override {
        return length * breadth;
    }

    double perimeter() const override {
        return 2 * (length + breadth);
    }
};

// Derived class Triangle
class Triangle : public Shape {
private:
    double base;
    double height;
    double side1, side2, side3;
public:
    Triangle(double b, double h, double s1, double s2, double s3) : base(b), height(h), side1(s1), side2(s2), side3(s3) {}

    double area() const override {
        return 0.5 * base * height;
    }

    double perimeter() const override {
        return side1 + side2 + side3;
    }
};

int main() {
    Circle c1(4.5);
    cout << "Circle Area: " << c1.area() << endl;
    cout << "Circle Perimeter: " << c1.perimeter() << endl;
    cout << "--------------------------------" << endl;

    Rectangle r1(3, 5);
    cout << "Rectangle Area: " << r1.area() << endl;
    cout << "Rectangle Perimeter: " << r1.perimeter() << endl;
    cout << "--------------------------------" << endl;

    Triangle t1(2, 3, 4, 3, 2);
    cout << "Triangle Area: " << t1.area() << endl;
    cout << "Triangle Perimeter: " << t1.perimeter() << endl;

    return 0;
}
