// Shape Hierarchy:
// Problem Statement: Design a hierarchy of shape classes. Begin with a base class Shape and then create derived classes like Circle, Rectangle, and Triangle. Each shape should have methods for calculating area and perimeter specific to its geometry.


#include<iostream>
using namespace std;

class Shape{
protected:   float area;
public:
    Shape(){
        area=0.0;
    }
    
};

class Circle:public Shape{
    float radius,circum;
        
public:
    Circle(){
        radius=0.0;
    }
    Circle(float radius){
        this->radius=radius;
    }
    void calArea(){
        area=3.14 * radius * radius ;
        
        cout<<"Area: "<< area <<endl;
    }
    void calcircum(){
        circum=2 * 3.14 * radius;
        cout<<"circum: "<<circum<<endl;
    }
    void display(){
        cout<<"Area: "<<area<<"Circumference: "<<circum<<endl;
    }
    
};

class Rectangle:public Shape{
    float length, breadth,peri;
        
public:
    Rectangle(){
        length=breadth=0.0;
    }
    Rectangle(float length, float breadth){
        this->length=length;
        this->breadth=breadth;
    }
    void calArea(){
        area=length * breadth;
        cout<<"Area: "<<area<<endl;
    }
    void calPeri(){
        peri=2 * (length + breadth) ;
        cout<<"Perimeter: "<<peri <<endl;
    }
    void display(){
        cout<<"Area: "<<area<<"Perimeter: "<<peri<<endl;
    }
    
};

class Triangle:public Shape{
    float base,height,peri;
    float side1,side2,side3;
        
public:
    Triangle(){
        base=height=side1=side2=side3=0.0;
    }
    Triangle(float base,float height){
        this->base=base;
        this->height=height;
        
        
    }
    void calArea(){
        area=base * height * 1/2;
        cout<<"Area: "<<area<<endl;
    }
    void calPeri(){
        cout<<"Enter sides of triangle:"<<endl;
        cin>>side1>>side2>>side3;
        // side1=s1;
        // side2=s2;
        // side3=s3;
        peri=(side1 + side2 + side3);
        cout<<"Perimeter: "<<peri<<endl;
    }
    void display(){
        cout<<"\nArea: "<<area<<"   Perimeter: "<<peri<<endl;
    }
};
int main(){
    // Shape s;
    // s.display();

    // Circle c(5);
    // c.calArea();
    // c.calcircum();
    
    // Rectangle r(10,20);
    // r.calArea();
    // r.calPeri();
    // r.display();

    Triangle t(10,20);
    t.calArea();
    t.calPeri();
    t.display();
    return 0;
}