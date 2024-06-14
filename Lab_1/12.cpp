// 12:Sum of series :
// 	1+2+3+….+n

#include<iostream>
using namespace std;

int main(){
    int n,i=1,sum=0;
    cout<<"Enter number:";
    cin>>n;

    while(i<=n){
        sum=sum+i;
        i++;
    }
    cout<<"The sum of interers is: "<<sum<<endl;
    return 0;
}