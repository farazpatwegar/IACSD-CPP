//1:Write a program to create an array of integers and perform following operations on that array like 
// finding the sum, average, maximum and minimum number in that array. Accept the numbers of the 
// array from user. 

#include<iostream>
using namespace std;

int main(){

    int size;
    cout<<"\nEnter the size of array: ";
    cin>>size;

    int arr[size];

    cout<<"\nEnter array elements: \n";
    for(int i=0;i<size;i++)
    {
        cin>>arr[i];
    }

    cout<<"\nThe array elements are: \n";
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //finding sum and avg
    int sum=0,avg=0;
    for(int i=0;i<size;i++)
    {
        sum+=arr[i];
        
    }
    avg=sum/size;
//    cout<<"\nThe sum of array elements are: "<<sum<<endl;
//    cout<<"\nThe avg of array elements are: "<<avg<<endl;
    
    cout<<"\n---------------------------------\n";
    //finding max and min
    int max=0,min=INT_MAX;
    for(int i=0;i<size;i++)
    {
        if(arr[i]<min){
        	min=arr[i];
		}
		if(arr[i]>max){
        	max=arr[i];
		}
        
    }
    cout<<"\nThe max of array elements are: "<<max<<endl;
    cout<<"\nThe min of array elements are: "<<min<<endl;
    



    
    return 0;
}
