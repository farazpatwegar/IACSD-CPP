// 3. Create a class Book with data members as bname,id,author,price. Write getters and setters for all the data members. Also add the display function. Create Default and Parameterized constructors. Create the object of this class in main method and invoke all the methods in that class.


#include<iostream>
using namespace std;

class Book{
    string bname,author;
    int id;
    double price;

public:
    Book(){
        bname=" ";
        author=" ";
        id=0;
        price=0.0;
        cout<<"Inside default constructor"<<endl;
    }
    Book(string bnm,string auth, int i, double pri){
        bname=bnm;
        author=auth;
        id=i;
        price=pri;
        cout<<"Inside parameterized constructor"<<endl;
    }
    string getBName(){
        return bname;
    }
    string getAuth(){
        return author;
    }
    int getID(){
        return id;
    }
    double getPrice(){
        return price;
    }

    void setBName(string bnm){
        bname=bnm;
    }
    void setAuth(string auth){
        author=auth;
    }
    void setID(int i){
        id=i;
    }
    void setprice(int pri){
        price=pri;
    }

    void display(){
        cout<<"Book Name: "<<bname<<"   author: "<<author<<"   id: "<<id<<"   Price:"<<price<<endl;
    }
};
int main(){
    Book b1;
    Book b("Rich Dad Poor Dad","Robert Kiyosaki",202,350);
    b.display();

cout<<"\n----------using settor methods--------";
    b.setBName("Attitude is Everything");
    b.setAuth("Jeff Keller");
    b.setID(203);
    b.setprice(300);
    

    cout<<endl;
    b.display();

cout<<"\n---------------Using gettor methods---------------\n";

    cout<<b.getBName()<<endl;
    cout<<b.getAuth()<<endl;
    cout<<b.getID()<<endl;
    cout<<b.getPrice()<<endl;


    cout<<endl;
    b.display();

    

    return 0;
}