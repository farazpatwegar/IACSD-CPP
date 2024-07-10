// 4. Create a class Point with data members as x,y. Create Default and Parameterized constructors. Write getters and setters for all the data members. Also add the display function. Create the object of this class in main method and invoke all the methods in that class. 


#include<iostream>
using namespace std;

class Point{
    int x;
    int y;

public:
    Point(){
        x=0;
        y=0;
        cout<<"Inside default constructor"<<endl;
    }
    Point(int x,int y){
        this->x=x;
        this->y=y;
        cout<<"Inside parameterized constructor"<<endl;
    }
    int getX(){
        return x;
    }
    int getY(){
        return y;
    }

    void setX(int x){
        this->x=x;
    }
    void setY(int y){
        this->y=y;
    }

    void display(){
        cout<<"X: "<<x<<"   Y: "<<y<<endl;
    }
};
int main(){
    Point p1;
    Point p(20,25);
    p.display();

cout<<"\n----------using settor methods--------";
    p.setX(15);
    p.setY(10);

    cout<<endl;
    p.display();

cout<<"\n---------------Using gettor methods---------------\n";

    cout<<p.getX()<<endl;
    cout<<p.getY()<<endl;

    cout<<endl;
    p.display();

    

    return 0;
}
