#include <iostream>
using namespace std;
class Shape
{
    virtual void area() = 0;
};
class Rectangle : public Shape
{
public:
    float length;
    float breadth;

    Rectangle()
    {
        length = 0;
        breadth = 0;
    }

    Rectangle(float length, float breadth)
    {
        this->length = length;
        this->breadth = breadth;
    }

    void area()
    {
        cout << "Area of Rectangle : " << length * breadth << endl;
    }
};
class Circle : public Shape
{
public:
    float radius;
    float pi = 3.14;

    Circle()
    {
        radius = 0;
    }

    Circle(float radius)
    {
        this->radius = radius;
    }

    void area()
    {
        cout << "Area of Circle : " << 2 * pi * radius << endl;
    }
};
class Square : public Shape
{
public:
    float side;

    Square()
    {
        side = 0;
    }

    Square(float side)
    {
        this->side = side;
    }

    void area()
    {
        cout << "Area of Square : " << side * side << endl;
    }
};
int main()
{
    Rectangle r1(3, 4);
    r1.area();

    cout << "------------------------" << endl;

    Circle c1(4);
    c1.area();
    cout << "------------------------" << endl;

    Square s1(5);
    s1.area();

    return 0;
}