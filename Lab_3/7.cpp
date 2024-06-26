// 7:Write a program to create student class with data members rollno, marks1,mark2,mark3.
// Accept data (acceptInfo()) and display  using display member function.
// Also display total,percentage and grade.
#include<iostream>
using namespace std;

class Student{
    int rollno,m1,m2,m3;
    int total=0;
    double per=0.0;
    char grade;
public:
    Student(){
        rollno=0;
        m1=m2=m3=0;
        cout<<"Default ctor is called"<<endl;
    }
    Student(int rn, int m1,int m2,int m3){
        rollno=rn;
        this->m1=m1;
        this->m2=m2;
        this->m3=m3;
        cout<<"Parameterized ctor is called"<<endl;
    }
    void caltotal(){
        total=this->m1+this->m2+this->m3;
        
        cout<<"Total: "<<this->total<<endl;
    }
    void calPer(){
        per=(double)total*100/300;
        cout<<"Per: "<<this->per<<" % "<<endl;
        
    }

    void calgrade(){
        if(per>90){
            grade='A';
        }
        else if(per>80){
            grade='B';
        }
        else if(per>70){
            grade='C';
        }
        else if(per>60){
            grade='D';
        }
        else if(per>50){
            grade='E';
        }
        else if(per<=50){
            grade='F';
        }
        cout<<"Grade: "<<this->grade<<endl;
    }
     
    

    void accept(){
        cout<<"Enter roll no: ";
        cin>>rollno;
        cout<<"Enter Marks 1:";
        cin>>m1;
        cout<<"Enter Marks 2:";
        cin>>m2;
        cout<<"Enter Marks 3:";
        cin>>m3;
    }

    void display(){
        cout<<"Roll no: "<<rollno<<endl;
        cout<<"Marks 1: "<<m1<<endl;
        cout<<"Marks 2: "<<m2<<endl;
        cout<<"Marks 3: "<<m3<<endl;
        caltotal();
        calPer();
        calgrade();
        
    }

};
int main(){
    // Student s1;

    // Student s2(201,50,70,30);
    // s2.caltotal();
    // s2.calPer();
    // s2.calgrade();


    Student s3;
    s3.accept();
    cout<<endl;
    s3.display();



    return 0;
}