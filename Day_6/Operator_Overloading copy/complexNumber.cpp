#include<iostream>
using namespace std;
class Complex
{
   public : int real , imaginary;
            Complex()
            {
                int real =0;
                int imaginary = 0;
            }

            Complex(int real , int imaginary)
            {
                this->real = real;
                this->imaginary = imaginary;
            }

            Complex operator+(const Complex& obj1)
            {
                Complex obj2;
                obj2.real = this->real + obj1.real;
                obj2.imaginary = this->imaginary + obj1.imaginary;
                return obj2;
            }

            void print()
            {
                cout<<" Complex Number : "<<real<<" + "<<imaginary<<"i"<<endl;

            }

};
int main()
{
    Complex c1(3,4);
    Complex c2(4,2);
    Complex c3 = c1 + c2;
    c3.print();
    return 0;
}