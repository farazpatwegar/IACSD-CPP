#include <iostream>
using namespace std;
class Shape
{
public:
    float area = 0.0;
    float perimeter = 0.0;
    
    //pure virtual methods (Abstract class)
    virtual void displayArea() = 0;
    virtual void displayPerimeter() = 0;
    virtual float getArea()=0;
};
class Circle : public Shape   //inherited from shape class
{
    public :
         float radius;
         float pi=3.14;
         Circle(float radius)
         {
            this->radius=radius;
         }
         // ---- Implementing Virtual method from Abstract class
         void displayArea()
         {
            cout<<"Area of Circle : "<<pi*radius*radius<<endl;
         }
         void displayPerimeter()
         {
            cout<<"Perimeter of Circle : "<<2*pi*radius<<endl;
         }
         float getArea()
         {
            return pi*radius*radius;
         }
};
class Rectangle : public Shape
{
   public : 
        float length;
        float breadth;
        Rectangle(float length,float breadth)
        {
            this->length=length;
            this->breadth=breadth;
        }
        // ---- Implementing Virtual method from Abstract class
        void displayArea()
        {
            cout<<"Area of Rectangle : "<<length*breadth<<endl;
        }
        void displayPerimeter()
        {
            cout<<"Perimeter of Rectangle "<<2*(length+breadth)<<endl;
        }
        float getArea()
         {
            return length*breadth;
         }
};

class Sortable       //Abstract class(Interface)
{
    virtual void sort(Shape* shapes[],int size)=0;
};
class SortArea:public Sortable      //--- Inherited from Sortable class 
{
    public : 
            void sort(Shape* shapes[],int size)
            {
                 for(int i=0;i<size;i++)
                 {
                    for(int j=i+1;j<size;j++)
                    {
                        if(shapes[j]->getArea() > shapes[i]->getArea())
                        {
                            // creates a temporary pointer temp and assigns it the
                            //  address of the shape at index i
                            Shape *temp = shapes[i];
                            shapes[i]=shapes[j];
                            shapes[j] = temp;
                        }
                    }
                 }
                 
            }

};
int main()
{
    Circle c1(2.50);
    c1.displayArea();
    c1.displayPerimeter();

    Rectangle r1(2,3);
    r1.displayArea();
    r1.displayPerimeter();

    Shape* shapes[] = {&c1,&r1};    
    // Creates an array of pointers to Shape objects and
    //  assigns addresses of Circle and Rectangle objects.
    int size = sizeof(shapes) / sizeof(shapes[0]);

    SortArea sorter;
    sorter.sort(shapes, size);
    for(int i=0;i<size;i++)
    {
        cout<<"----------------------------"<<endl;
        shapes[i]->displayArea();
        // cout<<"Sorted Area of shapes : "<<shapes[i]->displayArea()<<endl;
    }
    return 0;
}