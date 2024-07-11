// Library Catalog with Books and Journals:
// Problem Statement: Build a library catalog system. Create a base class LibraryItem with properties like title and author. Then, derive classes like Book and Journal, each with their unique properties. Implement methods to check out and return items in the derived classes.
#include<iostream>
using namespace std;

class LibraryItem{
    string title;
    string author;
public:
    LibraryItem(){
        title="---";
        author="---";
        cout<<"LibraryItem default ctor"<<endl;
    }
    LibraryItem(string title,string auth){
        this->title=title;
        author=auth;
        cout<<"LibraryItem parameterized ctor"<<endl;
    }
    void display(){
        cout<<"Library Item title: "<<title<<"  Author: "<<author<<endl;
    }
};
class Journal:public LibraryItem{
    string subject;
public:
    Journal(){
        subject=" ";
        
        cout<<"Journal default ctor"<<endl;
    }
    Journal(string JName, string auth,string sub):LibraryItem(JName,auth){
        subject=sub;
        cout<<"Journal Parameterized fault ctor"<<endl;
    }
    void display(){
        LibraryItem::display();
        cout<<"Journal type: "<<subject<<endl;
    }
};
class Book:public LibraryItem{
    string genre;
public:
    Book(){
        genre="---";
        
        cout<<"Book default ctor"<<endl;
    }
    Book(string JName, string auth,string genre):LibraryItem(JName,auth){
        this->genre=genre;
        cout<<"Book Parameterized fault ctor"<<endl;
    }
    void display(){
        LibraryItem::display();
        cout<<"Book genre: "<<genre<<endl;
    }
};

int main(){
    

    // LibraryItem p;
    // p.display();

    // LibraryItem p1("The conqueror of destiny","Mr Raghvan Kolhi");
    // p1.display();


    // Journal s;
    // s.display();

    // Journal s1("Design and Fabrication of Kinematic Robotic Walker","D.Deepak and S.Pathmasharma","Research Paper");
    // s1.display();
    

    // Book s;
    // s.display();

    Book s1("Attitude is everything","Jeff Kellar","Self help book");
    s1.display();
    return 0;
}