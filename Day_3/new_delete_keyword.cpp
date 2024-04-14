#include <iostream>
using namespace std;

class Example {
public:
    Example() {
        cout << "Constructor called" << endl;
    }

    ~Example() {
        cout << "Destructor called" << endl;
    }
};

int main() {
    Example *ptr = new Example(); // Constructor called when object is dynamically allocated
    // Code here...
    delete ptr; // Destructor called explicitly to release memory
    return 0;
}
