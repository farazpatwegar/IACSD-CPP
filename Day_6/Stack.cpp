#include <iostream>
using namespace std;

class Stack {
private:
    int arr[4];
    int top=-1;

public:
    void push(int number) {
        if (top >= 5) {
            throw "stack is full";
        }
        arr[++top] = number;
    }

    int pop() {
        if (top < 0) {
            throw "stack is empty";
        }
        return arr[top--];
    }
};

int main() {
    Stack s;
    try {
        s.push(10);
        s.push(20);
        s.push(30);
        // s.push(40); 
        // s.push(50); 

        int a = s.pop();
        cout << a << endl; 

        a = s.pop();
        cout << a << endl; 

        a = s.pop();
        cout << a << endl;

        a = s.pop();
        cout << a << endl; 

    }
    // catch (int no) {
    //     if(no==1)
    //     {
    //         cout<<"Stack is full"<<endl;
    //     }
    //     if(no==2)
    //     {
    //         cout<<"Stack is empty"<<endl;
    //     }
    // }
    catch( const char *ch)
    {
        cout<<"Exception : "<<ch<<endl; 
    }

    return 0;
}
