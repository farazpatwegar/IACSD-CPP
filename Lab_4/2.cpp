// 2. Create a class Date with data members as dd, mm, yy. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class. 

#include<iostream>
using namespace std;
//date of joining
class Date{
    int dd;
    int mm;
    int yy;

public:
    Date(){
        dd=0;
        mm=0;
        yy=0;
        cout<<"Inside default constructor"<<endl;
    }
    Date(int d,int m, int y){
        dd=d;
        mm=m;
        yy=y;
        cout<<"Inside parameterized constructor"<<endl;
    }
    int getDate(){
        return dd;
    }
    int getMonth(){
        return mm;
    }
    int getYear(){
        return yy;
    }

    void setDate(int d){
        dd=d;
    }
    void setMonth(int m){
        mm=m;
    }
    void setYear(int y){
        yy=y;
    }

    void display(){
        cout<<"Date: "<<dd<<"   Month: "<<mm<<"   Year: "<<yy<<endl;
    }
};
int main(){
    Date d1;
    Date d(13,3,22);
    d.display();

cout<<"\n----------using settor methods--------";
    d.setDate(9);
    d.setMonth(12);
    d.setYear(23);

    cout<<endl;
    d.display();

cout<<"\n---------------Using gettor methods---------------\n";

    cout<<d.getDate()<<endl;
    cout<<d.getMonth()<<endl;
    cout<<d.getYear()<<endl;

    cout<<endl;
    d.display();

    

    return 0;
}




































