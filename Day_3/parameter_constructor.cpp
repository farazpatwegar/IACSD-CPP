#include<iostream>
using namespace std;

class Car
{
   public: string brand;
           string model;
           int year;
           Car()
           {
            brand = "ABC";  // Assigning default values
            model = "XYZ";
            year = 2002;
           }
           // ------ Parameter constructor-------
           Car(string brand, string model, int year)
           {
              this->brand=brand;
              this->model=model;
              this->year=year;
           }
           // ----- Destructor -------
           ~Car()
           {
            cout<<"-----Destructor is called-----"<<endl;
           }
};
int main()
{
    //--- Creating object of class car---
    Car carobj1;
    Car carobj2("Ford","Mustang",1969);

    // Print values
  cout << carobj1.brand << " " << carobj1.model << " " << carobj1.year << "\n";
  cout << carobj2.brand << " " << carobj2.model << " " << carobj2.year << "\n";
    return 0;
}