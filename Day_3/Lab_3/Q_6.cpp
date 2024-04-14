#include <iostream>
using namespace std;

class ComplexNumber {
private:
    float real;
    float imaginary;

public:
    // Default constructor
    ComplexNumber() 
    
    {
         real= 0.0;
          imaginary= 0.0; 
    }

    // Parameterized constructor
    ComplexNumber(float realPart, float imaginaryPart) 
    { 
        real= realPart;
         imaginary = imaginaryPart; 
    }

    // Getter and setter for real part
    float getReal() {
        return real;
    }
    void setReal(float realPart) {
        real = realPart;
    }

    // Getter and setter for imaginary part
    float getImaginary() {
        return imaginary;
    }
    void setImaginary(float imaginaryPart) {
        imaginary = imaginaryPart;
    }

    // Display function
    void display() {
        cout << "Complex Number: " << real << " + " << imaginary << "i" << endl;
    }
};

int main() {
    // Creating an object of ComplexNumber class using default constructor
    ComplexNumber c1;
    cout << "Default Complex Number Information:" << endl;
    c1.display();

    // Setting complex number using setter methods
    c1.setReal(3.5);
    c1.setImaginary(-2.8);

    // Displaying complex number using getter methods
    cout << "\nComplex Number Information after setting using setters:" << endl;
    cout << "Real Part: " << c1.getReal() << endl;
    cout << "Imaginary Part: " << c1.getImaginary() << endl;

    // Creating an object of ComplexNumber class using parameterized constructor
    ComplexNumber c2(-1.2, 4.6);
    cout << "\nParameterized Complex Number Information:" << endl;
    c2.display();

    return 0;
}
