#include<iostream>
#include<fstream>
using namespace std;
int main()
{
    ofstream fout;
    fout.open("demo.txt");    //transfer file from hardDisk to RAM 
    fout<<"Hello friends";
    fout.close();
    return 0;
}