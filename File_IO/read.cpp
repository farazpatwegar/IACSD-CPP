#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ifstream fin;
    char a[20];
    fin.open("demo.txt");
    fin>>a;
    cout<<a;
    fin.close();
    return 0;
}