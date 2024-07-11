// Vehicle Inheritance:
// Problem Statement: Develop a class hierarchy for vehicles. Start with a base class Vehicle and create derived classes like Car, Motorcycle, and Truck. Each derived class should have unique properties like the number of wheels and specific methods like start_engine().

#include<iostream>
#include<string.h>

using namespace std;

class Vehicle{
    int VehID;
protected:    char  name[15];
public:
    Vehicle(){
        strcpy(name,"---" );
        VehID=0;
        cout<<"Vehicle default ctor"<<endl;
    }
    Vehicle(char * Vname, int vID){
        strcpy(name,Vname);
        VehID=vID;
        cout<<"Vehicle Parameterized  ctor"<<endl;

    }
    void StartEngine(){
        cout<<"The " <<name<<" engine has started"<<endl;
    }

     void display(){
        cout<<" Vehicle ID: "<<VehID<<endl;
    }

};

class Car: public Vehicle{
    int numOfWheels;
public: 
    Car(){
        numOfWheels=4;
        cout<<"car d ctor"<<endl;
    }
    Car(char * Vname,int vID):Vehicle(Vname,vID){
        this->numOfWheels=4;
        cout<<"Car Parameterized  ctor"<<endl;
    }
    void StartEngine(){
        cout<<"The "<<name<<" engine has started"<<endl;
    }
    
};
class MotorCycle: public Vehicle{
    int numOfWheels;
public: 
    MotorCycle(){
        numOfWheels=2;
        cout<<"Motorcycle d ctor"<<endl;
    }
    MotorCycle(char * Vname,int vID):Vehicle(Vname,vID){
        this->numOfWheels=4;
        cout<<"MotorCycle Parameterized  ctor"<<endl;
    }
    void StartEngine(){
        cout<<"The "<<name<<" engine has started"<<endl;
    }
};
class Truck: public Vehicle{
    int numOfWheels;
public: 
    Truck(){
        numOfWheels=6;
        cout<<"Truck d ctor"<<endl;
    }
    Truck(char * Vname,int vID,int numWheels):Vehicle(Vname,vID){
        this->numOfWheels=numWheels;
        cout<<"Truck Parameterized  ctor"<<endl;
    }
    void StartEngine(){
        cout<<"The "<<name<<" engine has started"<<endl;
        cout<<"Number of wheels for "<<name<< " is "<<numOfWheels<<endl;
    }
};
int main(){


    // Vehicle v;
    // Vehicle v1("Jeep",101);
    // v1.StartEngine();
    // v1.display();

    // Car c;
    // c.display();
    // c.StartEngine();
    // Car c1("Swift",102);
    // c1.display();
    // c1.StartEngine();


    // MotorCycle m;
    // m.display();
    // m.StartEngine();
    // MotorCycle m1("Triunph",103);
    // m1.display();
    // m1.StartEngine();

    // Truck t;
    // t.display();
    // t.StartEngine();
    Truck t1("Eicher truck",104,16);
    t1.display();
    t1.StartEngine();




    
    return 0;
}