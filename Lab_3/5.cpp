//5.Write a program to accept array  from user .Accept number from user and search number is present in array or not.

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
    
    int key;
    cout<<"\nEnter element to search in an array: ";
    cin>>key;
    int flg=0;
    int i;
     for(i=0;i<size;i++)
    {
        if(key==arr[i]){
        	flg=1;  break;     	
		}
		else
		{
			flg=0;			
		}
		
    }
    if(flg==1){
    	cout<<"\nkey found at "<<i<<" th index";
	}
	else{
		cout<<"\nKey not found";
	}
    
    cout<<endl;
	
	return 0;
}
