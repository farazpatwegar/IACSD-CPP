#include<iostream>
using namespace std;
class Person
{
   private: string name;
            int age;
            string city;
    public:
            void setName(string name)
            {
                this->name=name;
            }
            string getName()
            {
                return name;
            }
            void setAge(int age)
            {
                this->age=age;
            }
            int getAge()
            {
                return age;
            }
            void setCity(string city)
            {
                this->city=city;
            }
            string getCity()
            {
                return city;
            }

            void display()
            {
                cout<<"Name : "<<name<<endl;
                cout<<"age : "<<age<<endl;
                cout<<"city : "<<city<<endl;
            }
            
            Person()
            {
                name="Shivanjali";
                age=21;
                city="Satara";
            }

            Person(string name,int age,string city)
            {
                this->name=name;
                this->age=age;
                this->city=city;
            }
};
int main()
{
    cout<<"-----Default constructor-----"<<endl;
    Person obj;
    obj.display();
    cout<<"-----Parameter constructor----"<<endl;
    Person obj1("Pratiksha",21,"Latur");
    obj1.display();
    cout<<"Enter name,age,city : "<<endl;
    obj1.setName("ABC");
    obj1.setAge(20);
    obj1.setCity("Pune");
    string name =obj1.getName();
    int age=obj1.getAge();
    string city=obj1.getCity();
    cout<<"New Name : "<<name<<endl;
    cout<<"New age : "<<age<<endl;
    cout<<"New city : "<<city<<endl;
    obj1.display();
    cout<<"------ END ------"<<endl;

    
    
    return 0;
}