// 5. Create a class ComplexNumber with data members real, imaginary. Create Default and Parameterized constructors. Write getters and setters for all the data members. Also add the display function. Create the object of this class in main method and invoke all the methods in that class.


#include<iostream>
using namespace std;

class ComplexNumber{
    int real;
    int imag;

public:
    ComplexNumber(){
        real=0;
        imag=0;
        cout<<"Inside default constructor"<<endl;
    }
    ComplexNumber(int real,int imag){
        this->real=real;
        this->imag=imag;
        cout<<"Inside parameterized constructor"<<endl;
    }
    int getReal(){
        return real;
    }
    int getImag(){
        return imag;
    }

    void setReal(int real){
        this->real=real;
    }
    void setIMag(int imag){
        this->imag=imag;
    }

    void display(){
        cout<<"Real: "<<real<<"   Imag: "<<imag<<endl;
    }
};
int main(){
    ComplexNumber c;
    ComplexNumber c1(2,5);
    c1.display();

cout<<"\n----------using settor methods--------";
    c1.setReal(7);
    c1.setIMag(8);

    cout<<endl;
    c1.display();

cout<<"\n---------------Using gettor methods---------------\n";

    cout<<c1.getReal()<<endl;
    cout<<c1.getImag()<<endl;

    cout<<endl;
    c1.display();

    

    return 0;
}