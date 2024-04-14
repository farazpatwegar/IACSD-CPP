#include <iostream>
using namespace std;

class Book
{
private:
    string bname;
    int id;
    string author;
    float price;

public:
    // Default constructor
    Book()
    {
        bname = "Shivanjali";
        id = 101;
        author = "ABCD";
        price = 400.00;
    }

    Book(string bname, int id, string author, float price)
    {
        this->bname = bname;
        this->id = id;
        this->author = author;
        this->price = price;
    }
    // Getter and setter for book name
    string getBname()
    {
        return bname;
    }
    void setBname(string name)
    {
        bname = name;
    }

    // Getter and setter for book id
    int getId()
    {
        return id;
    }
    void setId(int bookId)
    {
        id = bookId;
    }

    // Getter and setter for book author
    string getAuthor()
    {
        return author;
    }
    void setAuthor(string bookAuthor)
    {
        author = bookAuthor;
    }

    // Getter and setter for book price
    float getPrice()
    {
        return price;
    }
    void setPrice(float bookPrice)
    {
        price = bookPrice;
    }

    // Display function
    void display()
    {
        cout << "Book Name: " << bname << endl;
        cout << "Book ID: " << id << endl;
        cout << "Author: " << author << endl;
        cout << "Price: " << price << endl;
    }
};

int main()
{
    // Creating an object of Book class using default constructor
    Book book1;
    cout << "Default Book Information:" << endl;
    book1.display();

    // Setting book information using setter methods
    book1.setBname("The Power of your subconscious mind Book by Joseph Murphy");
    book1.setId(12345);
    book1.setAuthor("Joseph Murphy");
    book1.setPrice(300);

    // Displaying book information using getter methods
    cout << "\nBook Information after setting using setters:" << endl;
    cout << "Book Name: " << book1.getBname() << endl;
    cout << "Book ID: " << book1.getId() << endl;
    cout << "Author: " << book1.getAuthor() << endl;
    cout << "Price: " << book1.getPrice() << endl;

    // Creating an object of Book class using parameterized constructor
    Book book2("To Kill a Mockingbird", 67890, "Harper Lee", 400);
    cout << "\nParameterized Book Information:" << endl;
    book2.display();

    return 0;
}
